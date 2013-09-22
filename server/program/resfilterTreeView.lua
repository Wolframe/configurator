
local function map_tree_node( treenodes, nodeid)
	local tree = nil
	if treenodes[ nodeid ] then
		tree = { id = nodeid, name = treenodes[ nodeid ].name }
		if treenodes[ nodeid ].description then
			tree[ "description"] = treenodes[ nodeid ].description
		end
		if treenodes[ nodeid ].pictures then
			tree[ "pictures"] = treenodes[ nodeid ].description
		end
		local children = {}
		for i,v in pairs( treenodes[ nodeid].children) do
			local childnode = map_tree_node( treenodes, v)
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
	logger.printc( "TREE=", tree)
	local id2nodemap = {}
	local parentmap = {}
	local tagname = tree[ "name"]
	local treenodes = tree[ "node"]

	logger.printc( "TREENODES=", treenodes)
	for i,v in pairs( treenodes) do
		local pi = 0
		if v.parentID then
			pi = tonumber( v.parentID)
		end
		local ti = tonumber( v.ID)
		parentmap[ ti] = pi
		table.insert( id2nodemap, ti, { name=v.name, description=v.description, pictures=v.pictures, parentID=pi, children = {} } )
	end
	logger.printc( "PARENTMAP=", parentmap)
	local rootID = nil
	for i,v in pairs( parentmap) do
		if not parentmap[ v] or parentmap[ v] == 0 then
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
		rt[ "item"] = map_tree_node( id2nodemap, rootID)
		logger.printc( "RESULT resfilterTreeView: ", rt)
		return rt
	else
		logger.printc( "RESULT OF resfilterTreeView IS EMPTY")
		return nil
	end
end

