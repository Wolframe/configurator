CREATE TABLE FeatureFulfill	(
	featureID	INT	REFERENCES Feature( ID ),
	featureCount	INT,
	fulfillID	INT	REFERENCES Feature( ID ),
	fulfillCount	INT,
	UNIQUE ( featureID, fulfillID )
);

CREATE TABLE RecipeComponent	(
	recipeID	INT	REFERENCES Recipe( ID ),
	componentID	INT	REFERENCES Component( ID ),
	quantity	INT,
	comment		TEXT,
	UNIQUE ( recipeID, componentID )	
);

alter table category add active boolean;
alter table feature add active boolean;
alter table manufacturer add active boolean;
alter table component add active boolean;
alter table Configuration add recipeID INT REFERENCES Recipe( ID );
alter table configComponent add fromRecipe boolean;

update category set active='1';
update feature set active='1';
update manufacturer set active='1';
update component set active='1';
