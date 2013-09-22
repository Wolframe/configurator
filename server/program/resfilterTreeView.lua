
--\brief Local function resfilterTreeView
--		Recursiv build of the node of a tree
local function map_tree_node( treenodes, nodeid, tagname)
	local tree = nil
	if treenodes[ nodeid ] then
		tree = { id = nodeid, name = treenodes[ nodeid ].name}
		if treenodes[ nodeid ].description then
			tree[ "description"] = treenodes[ nodeid ].description
		end
		if treenodes[ nodeid ].pictures then
			tree[ "pictures"] = treenodes[ nodeid ].description
		end
		local children = {}
		for i,v in pairs( treenodes[ nodeid].children) do
			local childnode = map_tree_node( treenodes, v, tagname)
			table.insert( children, childnode)
		end
		if #children > 0 then
			tree[ "item"] = children
		end
	end
	return tree
end

--\brief TDL Result Filter Function resfilterTreeView
--		Builds a tree structure out from a list of nodes linked with ID integer numbers (parent,children)
--\param[in] tree structure with tree properties
--		name : Name of the tree
--		node : list of structure
--			{
--				name		: name of the node
--				description	: description of the node
--				pictures	: list of picture ids
--				parentID	: id of the parent in the tree
--				children	: list of children ids
--			}
--\return recursively defined list (*) of tree structure with
--		name		: name of the node
--		description	: description of the node
--		pictures	: list of picture ids
--		item		: Array of child tree nodes (*)
--
function resfilterTreeView( tree_)
	local tree = tree_:table()
	local id2nodemap = {}
	local parentmap = {}
	local tagname = tree[ "name"]
	local treenodes = tree[ "node"]

	for i,v in pairs( treenodes) do
		local pi = 0
		if v.parentID then
			pi = tonumber( v.parentID)
		end
		local ti = tonumber( v.ID)
		parentmap[ ti] = pi
		table.insert( id2nodemap, ti, { name=v.name, description=v.description, pictures=v.pictures, parentID=pi, children = {} } )
	end
	local rootID = nil
	for i,v in pairs( parentmap) do
		if not parentmap[ v] and parentmap[ v] ~= 0 then
			if rootID then
				error("filter tree called with multiple root nodes")
			end
			rootID = i
		end
	end
	if rootID then
		for i,v in pairs( id2nodemap) do
			if i ~= rootID and v.parentID then
				table.insert( id2nodemap[ v.parentID ].children, i )
			end
		end
		local rt = map_tree_node( id2nodemap, rootID, tagname);
		return {item = rt[ "item"]}
	else
		return nil
	end
end

