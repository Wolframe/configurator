
function preprocSearchQueryString( search_)
	local search = search_:table()
	if search then
		search = "%" .. normalizer( "name" )( search ) .. "%"
	end
	if search == nil then
		search = "%%"
	end
	return search
end

