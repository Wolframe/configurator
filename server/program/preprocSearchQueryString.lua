
function preprocSearchQueryString( search)
	if search then
		search = "%" .. normalizer( "name" )( search ) .. "%"
	end
	if search == nil then
		search = "%%"
	end
	return search
end
