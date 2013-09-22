
--\brief TDL Preprocess Function preprocSearchQueryString
--		Builds a query string to be usable in a SQL 'like' statement argument
function preprocSearchQueryString( search_)
	local search = search_:value()
	if search then
		search = "%" .. normalizer( "name" )( search ) .. "%"
	end
	if search == nil then
		search = "%%"
	end
	return search
end

