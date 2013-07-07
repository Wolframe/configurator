local function content_value( itr)
	local rt = nil
	for v,t in itr do
		if v and not t then
			rt = v
		end
	end
	return rt
end

local function pictures_value( pictures, itr )
	if pictures == nil then
		pictures = { ["picture"] = { } }
	end
	for v,t in itr do
		if( t == "id") then
			table.insert( pictures[ "picture" ], { ["id"] = v } )
		end
	end
	return pictures
end

local function insert_itr( tablename, parentID, itr)
	local id = 1
	local name = nil
	local nname = nil
	local description = nil
	local pictures = nil
	for v,t in itr do
		if (t == "name") then
			if v then
				name = v
			else
				name = content_value( scope(itr))
			end
			nname = normalizer("name")( name)
		elseif (t == "description") then
			if v then
				description = v
			else
				description = content_value( scope(itr))
			end
		elseif (t == "picture") then
			pictures = pictures_value( pictures, scope( itr))
		elseif (t == "node") then
			if name then
				id = formfunction( "add" .. tablename)( {name=name, normalizedName=nname, description=description, parentID=parentID, pictures=pictures} ):table().ID
				name = nil
				description = nil
			end
			insert_itr( tablename, id, scope( itr))
		end
	end
	if name then
		id = formfunction( "add" .. tablename)( {name=name, normalizedName=nname, description=description, parentID=parentID, pictures=pictures} ):table().ID
	end
	return id
end

local function insert_topnode( tablename, name, description, pictures, parentID)
	local nname = normalizer("name")( name)
	if not parentID then
		parentID = 1
	end
	local id = formfunction( "add" .. tablename)( {normalizedName=nname, name=name, description=description, parentID=parentID, pictures=pictures} ):table().ID
	return id
end

local function insert_tree_topnode( tablename, itr)
	local parentID = nil
	local id = 1
	local name = nil
	local description = nil
	local pictures = nil
	for v,t in itr do
		if (t == "parentID") then
			parentID = tonumber( v)
		elseif (t == "name") then
			if v then
				name = v
			else
				name = content_value( scope(itr))
			end
		elseif (t == "description") then
			if v then
				description = v
			else
				description = content_value( scope(itr))
			end
		elseif (t == "picture") then
			pictures = pictures_value( pictures, scope( itr))
		elseif (t == "node") then
			if name then
				id = insert_topnode( tablename, name, description, pictures, parentID)
				name = nil
				description = nil
			end
			insert_itr( tablename, id, scope( itr))
		end
	end
	if name then
		insert_topnode( tablename, name, description, pictures, parentID)
	end
end

local function get_tree( tablename, parentID)
	local t = formfunction( "selectSub" .. tablename)( {id=parentID} ):table()["node"] or {}
	local a = {}
	for i,v in pairs( t) do
		table.insert( a, tonumber( v.ID), { name=v.name, description=v.description, pictures=v.pictures, parentID=tonumber(v.parentID), children = {} } )
	end
	for i,v in pairs( a) do
		if i ~= parentID and v.parentID then
			table.insert( a[ v.parentID ].children, i )
		end
	end
	return a
end

local function print_tree( tree, tagname, nodeid, indent)
	if (indent ~= "") then
		output:print( "\n" .. indent)
	end
	if tree[ nodeid ] then
		output:opentag( "item" )
		output:print( nodeid, "id")
		output:print( "\n" .. indent .. "\t")
		output:opentag( tagname)
		output:print( tree[ nodeid ].name )
		output:closetag( )
		if tree[ nodeid ].description then
			output:print( "\n" .. indent .. "\t")
			output:opentag( "description" )
			output:print( tree[ nodeid ].description )
			output:closetag( )
		end
		local n = 0
		for i,v in pairs( tree[ nodeid].children) do
			print_tree( tree, tagname, v, indent .. "\t")
			n = n + 1
		end
		if n > 0 then
			output:print( "\n" .. indent)
		end
		output:closetag( )
	end
end

local function select_tree( tablename, tagname, itr)
	filter().empty = false
	for v,t in itr do
		if t == "id" then
			local id = tonumber( v)
			output:opentag( "tree" )
			local tree = get_tree( tablename, id);
			for i,chld in pairs( tree[ id].children) do
				print_tree( tree, tagname, chld, "\t")
			end
			output:closetag()
		end
	end
end

local function select_node( tablename, elementname, itr)
	filter().empty = false
	for v,t in itr do
		if t == "id" then
			local r = formfunction( "select" .. tablename)( {id=v} )
			local f = form( tablename)
			f:fill( r:get(), {elementname})
			output:print( f:get())
		end
	end
end

local function edit_node( tablename, itr)
	local name = nil
	local nname = nil
	local description = nil
	local pictures = nil
	local id = nil
	local idseen = false
	for v,t in itr do
		if( t == "id" ) then
			if not idseen then
				id = v
				idseen = true
			end
		elseif t ==  "name" then
			if v then
				name = v
			else
				name = content_value( scope(itr))
			end
			nname = normalizer("name")( name)
		elseif t == "description" then
			if v then
				description = v
			else
				description = content_value( scope(itr))
			end
		elseif( t == "picture" ) then
			pictures = pictures_value( pictures, scope( itr))
		end
	end
	formfunction( "update" .. tablename)( {normalizedName=nname, name=name, description=description, id=id, pictures=pictures} )
end

local function delete_node( tablename, itr)
	local id = nil
	for v,t in itr do
		if t == "id" then
			id = v
		end
	end
	formfunction( "delete" .. tablename)( {id=id} )
end

-- Aba: should go away, is simply unreadable!
local function create_node( tablename, itr)
	local name = nil
	local parentID = nil
	local description = nil
	local pictures = nil
	local root = nil
	for v,t in itr do
		if t == "parentID" then
			parentID = v
		elseif t == "root" then
			root = content_value(scope(itr))
		elseif t ==  "name" then
			if v then
				name = v
			else
				name = content_value( scope(itr))
			end
			nname = normalizer("name")( name)
		elseif t ==  "description" then
			if v then
				description = v
			else
				description = content_value( scope(itr))
			end
		elseif t ==  "picture" then
			pictures = pictures_value( pictures, scope( itr))
		end
	end
	if root and root == "true" then
		parentID = 1
	end
	insert_topnode( tablename, name, description, pictures, parentID)
end

local function add_tree( tablename, itr)
	filter().empty = false
	for v,t in itr do
		if t == "node" then
			insert_tree_topnode( tablename, scope( itr))
		end
	end
end


function CategoryHierarchyRequest()
	output:as( {root='tree', system='CategoryHierarchy.simpleform'})
	select_tree( "Category", "category", input:get())
end

function FeatureHierarchyRequest()
	output:as( {root='tree', system='FeatureHierarchy.simpleform'})
	select_tree( "Feature", "feature", input:get())
end

function FulfillHierarchyRequest()
	output:as( {root='tree', system='FeatureHierarchy.simpleform'})
	select_tree( "Feature", "fulfill", input:get())
end

function TagHierarchyRequest()
	output:as( {root='tree', system='TagHierarchy.simpleform'})
	select_tree( "Tag", "tag", input:get())
end

function pushCategoryHierarchy()
	add_tree( "Category", input:get())
end

function pushFeatureHierarchy()
	add_tree( "Feature", input:get())
end

function pushTagHierarchy()
	add_tree( "Tag", input:get())
end

function CategoryRequest()
	output:as( {root='category', system='Category.simpleform'})
	select_node( "Category", "category", input:get())
end

function FeatureRequest()
	output:as( {root='feature', system='Feature.simpleform'})
	select_node( "Feature", "feature", input:get())
end

function TagRequest()
	output:as( {root='tag', system='Tag.simpleform'})
	select_node( "Tag", "tag", input:get())
end

function createCategory()
	local category = input:table( )["category"]
	category["normalizedName"] = normalizer( "name" )( category["name"] )
	if category["root"] and category["root"] == "true" then
		category["parentID"] = 1
	end
	formfunction( "addCategory" )( category )
end

function updateCategory()
	local category = input:table( )["category"]
	category["normalizedName"] = normalizer( "name" )( category["name"] )
	formfunction( "updateCategory" )( category )
end

function updateFeature()
	edit_node( "Feature", input:get())
end

function editTag()
	edit_node( "Tag", input:get())
end

function deleteCategory()
	delete_node( "Category", input:get())
end

function deleteFeature()
	delete_node( "Feature", input:get())
end

function deleteTag()
	delete_node( "Tag", input:get())
end

function createFeature()
	create_node( "Feature", input:get())
end

function createTag()
	create_node( "Tag", input:get())
end

-- manufacturers

function addManufacturer( )
	local manufacturer = input:table( )["manufacturer"]
	if manufacturer["name"] then
		manufacturer["normalizedName"] = normalizer( "name" )( manufacturer["name"] )
	end
	formfunction( "addManufacturer" )( manufacturer )
end

function updateManufacturer( )
	local manufacturer = input:table( )["manufacturer"]
	if manufacturer["name"] then
		manufacturer["normalizedName"] = normalizer( "name" )( manufacturer["name"] )
	end
	formfunction( "updateManufacturer" )( manufacturer )
end

-- components

function createComponent( )
	local component = input:table( )["component"]
	if component["name"] then
		component["normalizedName"] = normalizer( "name" )( component["name"] )
	end
	formfunction( "addComponent" )( component )
end

function updateComponent( )
	local component = input:table( )["component"]
	if component["name"] then
		component["normalizedName"] = normalizer( "name" )( component["name"] )
	end
	formfunction( "updateComponent" )( component )
end

-- recipes

function createRecipe( )
	local recipe = input:table( )["recipe"]
	if recipe["name"] then
		recipe["normalizedName"] = normalizer( "name" )( recipe["name"] )
	end
	formfunction( "addRecipe" )( recipe )
end

function updateRecipe( )
	local recipe = input:table( )["recipe"]
	if recipe["name"] then
		recipe["normalizedName"] = normalizer( "name" )( recipe["name"] )
	end
	formfunction( "updateRecipe" )( recipe )
end

-- configurations

function createConfiguration( )
	local configuration = input:table( )["configuration"]
	local t = formfunction( "addConfiguration" )( configuration )
	local f = form( "Configuration" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function updateConfiguration( )
	local configuration = input:table( )["configuration"]
	formfunction( "updateConfiguration" )( configuration )
end

-- pictures

function PictureListRequest( )
	output:as( {root='list', system='PictureList.simpleform'})
	filter().empty = false
	local inp = input:table()
	local search = inp[ "picture"][ "search"]
	if search then
		search = "%" .. normalizer( "name" )( search ) .. "%"
	end
	if search == nil then
		search = "%%"
	end
	local t = formfunction( "selectPictureList" )( { search = search } )
	local f = form( "PictureList" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

local function round( num, idp )
	local mult = 10 ^ ( idp or 0 )
	return math.floor( num * mult + 0.5 ) / mult
end

local function transform_picture( picture )
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

function updatePicture( )
	local picture = transform_picture( input:table()["picture"] )
	formfunction( "updatePicture" )( { picture = picture } )
end

function createPicture( )
	local picture = transform_picture( input:table()["picture"] )
	formfunction( "addPicture" )( { picture = picture } )
end
