--\brief TDL Preprocess add default values to Component
--\param[in] node structure with component attributes
--\return node structure with default values for attributes not set
--
function preprocComponentDefaultValues( node_ )
	local rt = {}
	local node = node_:table()
	if not node["price"] or node["price"] == '' then
		rt["_price"] = 0
	else
		rt["_price"] = node["price"]
	end
	if not node["priceCurrency"] then
		rt["_priceCurrency"] = 'E'
	else
		rt["_priceCurrency"] = node["priceCurrency"]
	end
	return rt
end
