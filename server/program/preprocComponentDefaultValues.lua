--\brief TDL Preprocess add default values to Component
--\param[in] node structure with component attributes
--\return node structure with default values for attributes not set
--
function preprocComponentDefaultValues( node_ )
	local rt = {}
	local node = node_:table()
	if not node["price"] then
		rt["price"] = 0
	end
	if not node["priceCurrency"] then
		rt["priceCurrency"] = 'E'
	end
	return rt
end
