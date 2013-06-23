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

