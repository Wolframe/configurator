
local function map_tree_node( treenodes, nodeid, tagname)
	local tree = nil
	if treenodes[ nodeid ] then
		tree[ "id"] = nodeid
		tree[ tagname] = treenodes[ nodeid ].name
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

-- IN tree := { name = treename, node = { name=STRING, description=STRING, pictures=INT[], parentID=INT, children=INT[] } }
function resfilterTreeView( tree_)
	local tree = tree_:table()
	local id2nodemap = {}
	local parentmap = {}
	local tagname = tree[ "name"]
	local treenodes = tree[ "node"]

	for i,v in pairs( treenodes) do
		local pi = tonumber( v.parentID)
		local ti = tonumber( v.ID)
		parentmap[ ti] = pi
		table.insert( id2nodemap, ti, { name=v.name, description=v.description, pictures=v.pictures, parentID=pi, children = {} } )
	end
	local rootID = nil
	for i,v in pairs( parentmap) do
		if not parentmap[ v] then
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
		local rt = {}
		rt[ "item"] = map_tree_node( id2nodemap, rootID, tagname)
		return rt
	else
		return nil
	end
end

