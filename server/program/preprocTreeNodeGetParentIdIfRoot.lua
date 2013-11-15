--\brief TDL Preprocess Tree Node Attributes
--		Interpretes some tree node attributes and set some values accordingly
--\param[in] node structure with tree node attributes
--		root		: "true"/"false" defines if the node is the root node
--\return node structure with tree node attributes
--		_parentID	: 1 if node["root"] == "true" else node["parentID"]
--
function preprocTreeNodeGetParentIdIfRoot( node_ )
	local rt = {}
	local node = node_:table()
	if node["root"] and node["root"] == "true" then
		rt[ "_parentID"] = 1
	else
		rt[ "_parentID"] = node["parentID"]
	end
	return rt
end

