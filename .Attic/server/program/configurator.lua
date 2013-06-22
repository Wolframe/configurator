-- this is from the configurator plugin, should be renamed, name clash
-- with feature req/prov of component dialogs

function ConfiguredComponentsFixRequest( )
	local t = formfunction( "selectConfiguredComponentsFix" )( { configID = input:table( )["component"]["configID"] } )
	local f = form( "ConfiguredComponentsFix" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function ConfiguredComponentsUserRequest( )
	local t = formfunction( "selectConfiguredComponentsUser" )( { configID = input:table( )["component"]["configID"] } )
	local f = form( "ConfiguredComponentsUser" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function ConfiguredComponentsRequest( )
	local t = formfunction( "selectConfiguredComponents" )( { configID = input:table( )["component"]["configID"] } )
	local f = form( "ConfiguredComponents" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function RequiredFeaturesRequest( )
	local t = formfunction( "selectRequiredFeatures" )( { configID = input:table( )["configuration"]["configID"] } )
	local f = form( "RequiredFeatures" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function ConfiguratorAddComponentRequest( )
	local t = formfunction( "ConfiguratorAddComponent" )( input:table( ) )
end

function ConfiguratorDeleteComponentRequest( )
	local t = formfunction( "ConfiguratorDeleteComponent" )( input:table( ) )
end

function ComponentFeatureRequest( )
	local componentFeature = input:table( )["ComponentFeature"]
	local t = formfunction( "selectComponentFeature" )( {
		component_id = componentFeature["component_id"],
		feature_id = componentFeature["feature_id"]
	} )
	local f = form( "ComponentFeature" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function ComponentFeatureListRequest( )
	local componentFeature = input:table( )["ComponentFeature"]
	local t = formfunction( "selectComponentFeatureList" )( {
		component_id = componentFeature["component_id"]
	} )
	local f = form( "ComponentFeatureList" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function RecipeComponentListRequest( )
	local recipeComponent = input:table( )["RecipeComponent"]
	local t = formfunction( "selectRecipeComponentList" )( {
		recipe_id = recipeComponent["recipe_id"]
	} )
	local f = form( "RecipeComponentList" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end


-- feature equivalences

function createFeatureEquivalence( )
	local featureEquivalence = input:table( )["FeatureEquivalence"]
	formfunction( "addFeatureEquivalence" )( featureEquivalence )
end

function deleteFeatureEquivalence( )
	local featureEquivalence = input:table( )["FeatureEquivalence"]
	formfunction( "deleteFeatureEquivalence" )( featureEquivalence )
end

function FeatureEquivalenceRequest( )
	local featureEquivalence = input:table( )["FeatureEquivalence"]
	
	local t = formfunction( "selectFeatureEquivalence" )( {
		feature_id = featureEquivalence["feature_id"],
		fulfill_id = featureEquivalence["fulfill_id"]
	} )
	local f = form( "FeatureEquivalence" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

function FeatureEquivalenceListRequest( )
	local featureEquivalence = input:table( )["FeatureEquivalence"]
	local t = formfunction( "selectFeatureEquivalenceList" )( {
		feature_id = featureEquivalence["feature_id"]
	} )
	local f = form( "FeatureEquivalenceList" )
	f:fill( t:get( ) )
	output:print( f:get( ) )
end

