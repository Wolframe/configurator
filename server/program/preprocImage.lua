local function round( num, idp )
	local mult = 10 ^ ( idp or 0 )
	return math.floor( num * mult + 0.5 ) / mult
end

function preprocImage( picture )
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

