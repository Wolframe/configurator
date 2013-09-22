--\brief Local function to round a number
local function round( num, idp )
	local mult = 10 ^ ( idp or 0 )
	return math.floor( num * mult + 0.5 ) / mult
end

--\brief TDL Preprocess Function preprocImage
--		Enriches a structure with picture attributes with values calculated by the Wolframe graphix library module
--\param[in] picture structure with picture properties
--		image : base64 encoded picture data
--\return picture structure with picture properties
--		image		: base64 encoded picture data from imput
--		width		: Calculated width of the picture
--		height		: Calculated height of the picture
--		thumbnail	: Calculated base64 encoded thubnail of the picture
--
function preprocImage( picture_ )
	local picture = picture_:table()
	info = formfunction( "imageInfo" )( { [ "data"] = picture["image"] } ):table( )
	width = info.width
	height = info.height
	picture["width"] = width
	picture["height"] = height
	size = 50
	if height >= width then
		ratio = width / height
		height = size
		width = round( size * ratio )
	else
		ratio = height / width
		width = size
		height = round( size * ratio )
	end
	thumb = formfunction( "imageRescale" )( { [ "image" ] = { [ "data" ] = picture["image"] }, [ "width" ] = width, [ "height" ] = height } ):table( )
	picture["thumbnail"] = thumb.data
	return picture
end

