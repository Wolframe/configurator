-- The currency tables
--
CREATE TABLE CurrencyCode	(
	code		CHAR(3)	NOT NULL PRIMARY KEY,
	name		TEXT	NOT NULL,
	multiplier	INT	NOT NULL DEFAULT 1
);

CREATE TABLE ExchangeRate	(
	code1		CHAR(3)	NOT NULL REFERENCES CurrencyCode( code ),
	value1		REAL	NOT NULL,
	code2		CHAR(3)	NOT NULL REFERENCES CurrencyCode( code ),
	value2		REAL	NOT NULL,
	rateDate	TIMESTAMP,
	CONSTRAINT xchngRate_valid_check CHECK ( NOT code1 = code2 AND value1 > 0 AND value2 > 0 ),
	CONSTRAINT xchngRate_unique_check UNIQUE ( code1, code2 )
);

CREATE TABLE ExchangeRateHistory	(
	code1		CHAR(3)	NOT NULL REFERENCES CurrencyCode( code ),
	value1		INT	NOT NULL,
	code2		CHAR(3)	NOT NULL REFERENCES CurrencyCode( code ),
	value2		INT	NOT NULL,
	rateDate	TIMESTAMP,
	CONSTRAINT xchngRate_valid_check CHECK ( NOT code1 = code2 AND value1 > 0 AND value2 > 0 )
);


-- The tags tree
--
CREATE TABLE Tag	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	parentID	INT	REFERENCES Tag( ID ),
	name		TEXT	NOT NULL,
	normalizedName	TEXT	NOT NULL,
	description	TEXT,
	lft		INT	NOT NULL UNIQUE DEFERRABLE CHECK ( lft > 0 ),
	rgt		INT	NOT NULL UNIQUE DEFERRABLE CHECK ( rgt > 1 ),
	CONSTRAINT order_check CHECK ( rgt > lft ),
	CONSTRAINT tag_normalizedName_check UNIQUE( normalizedName, parentID )
);
ALTER SEQUENCE Tag_ID_seq RESTART WITH 1;

INSERT INTO Tag( parentID, name, normalizedName, description, lft, rgt )
	VALUES ( NULL, '_ROOT_', '_ROOT_', 'Tags tree root', 1, 2 );

CREATE VIEW TagPath AS
	SELECT ID,
		group_concat( name, '/' ) AS name,
		group_concat( normalizedName, '/' ) AS normalizedName
		FROM ( SELECT T1.ID, T2.name, T2.normalizedName
			FROM Tag AS T1, Tag AS T2
			WHERE T2.lft <= T1.lft AND T2.rgt >= T1.rgt
			AND NOT T2.ID=1
		ORDER BY T2.lft ) AS bla
	GROUP BY ID;

-- The list of images used
--
CREATE TABLE Picture	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	caption		TEXT,
	info		TEXT,
	width		INT,
	height		INT,
	image		TEXT,
	thumbnail	TEXT
);
ALTER SEQUENCE Picture_ID_seq RESTART WITH 1;

CREATE TABLE PictureTag	(
	pictureID	INT	REFERENCES Picture( ID ),
	tagID		INT	REFERENCES Tag( ID ),
	UNIQUE ( pictureID, tagID )
);


-- The categories tree
--
CREATE TABLE Category	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	parentID	INT	REFERENCES Category( ID ),
	name		TEXT	NOT NULL,
	normalizedName	TEXT	NOT NULL,
	description	TEXT,
	lft		INT	NOT NULL UNIQUE DEFERRABLE CHECK ( lft > 0 ),
	rgt		INT	NOT NULL UNIQUE DEFERRABLE CHECK ( rgt > 1 ),
	active		BOOLEAN,
	CONSTRAINT order_check CHECK ( rgt > lft ),
	CONSTRAINT category_normalizedName_check UNIQUE( normalizedName, parentID )
);
ALTER SEQUENCE Category_ID_seq RESTART WITH 1;

INSERT INTO Category( parentID, name, normalizedName, description, lft, rgt )
	VALUES ( NULL, '_ROOT_', '_ROOT_', 'Categories tree root', 1, 2 );

CREATE TABLE CategoryTag	(
	categoryID	INT	REFERENCES Category( ID ),
	tagID		INT	REFERENCES Tag( ID ),
	UNIQUE ( categoryID, tagID )
);

CREATE TABLE CategoryPicture	(
	categoryID	INT	REFERENCES Category( ID ),
	pictureID	INT	REFERENCES Picture( ID ),
	orderNumber	INT	NOT NULL,
	UNIQUE ( categoryID, pictureID ),
	UNIQUE ( categoryID, orderNumber ),
);


-- The features tree
--
CREATE TABLE Feature	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	parentID	INT	REFERENCES Feature( ID ),
	name		TEXT	NOT NULL,
	normalizedName	TEXT	NOT NULL,
	description	TEXT,
	lft		INT	NOT NULL UNIQUE DEFERRABLE CHECK ( lft > 0 ),
	rgt		INT	NOT NULL UNIQUE DEFERRABLE CHECK ( rgt > 1 ),
	active		BOOLEAN,
	CONSTRAINT order_check CHECK ( rgt > lft ),
	CONSTRAINT feature_normalizedName_check UNIQUE( normalizedName, parentID )
);
ALTER SEQUENCE Feature_ID_seq RESTART WITH 1;

INSERT INTO Feature( parentID, name, normalizedName, description, lft, rgt )
	VALUES ( NULL, '_ROOT_', '_ROOT_', 'Features tree root', 1, 2 );

CREATE TABLE FeatureTag	(
	featureID	INT	REFERENCES Feature( ID ),
	tagID		INT	REFERENCES Tag( ID ),
	UNIQUE ( featureID, tagID )
);

CREATE TABLE FeaturePicture	(
	featureID	INT	REFERENCES Feature( ID ),
	pictureID	INT	REFERENCES Picture( ID ),
	orderNumber	INT	NOT NULL,
	UNIQUE ( featureID, pictureID ),
	UNIQUE ( featureID, orderNumber )
);

-- Feature requirements fulfillment
--
CREATE TABLE FeatureFulfill	(
	requiredFeatureID	INT	REFERENCES Feature( ID ),
	requiredFeatureCount	INT	DEFAULT 1,
	providedFeatureID	INT	REFERENCES Feature( ID ),
	providedFeatureCount	INT	DEFAULT 1,
	UNIQUE ( requiredFeatureID, providedFeatureID )
);


-- The list of manufacturers
--
CREATE TABLE Manufacturer	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	name		TEXT	NOT NULL,
	normalizedName	TEXT	NOT NULL UNIQUE,
	webPage		TEXT,
	logo		INT	REFERENCES Picture( ID ),
	active		BOOLEAN
);


-- The list of components
--
CREATE TABLE Component	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	code		TEXT	NOT NULL UNIQUE,
	name		TEXT	NOT NULL,
	normalizedName	TEXT	NOT NULL UNIQUE,
	categoryID	INT	REFERENCES Category( ID ),
	manufacturerID	INT	REFERENCES Manufacturer( ID ),
	mfgCode		TEXT,
	webPage		TEXT,
	description	TEXT,
	active		BOOLEAN,
	price		NUMERIC( 10, 2 ),
	priceCurrency	CHAR(3)	NOT NULL REFERENCES CurrencyCode( code )
);

CREATE TABLE ComponentPriceHistory	(
	componentID	INT	REFERENCES Component( ID ),
	price		NUMERIC( 10, 2 ),
	priceCurrency	CHAR(3)	NOT NULL REFERENCES CurrencyCode( code ),
	priceDate	TIMESTAMP,
	username	TEXT
);

CREATE TABLE ComponentTag	(
	componentID	INT	REFERENCES Component( ID ),
	tagID		INT	REFERENCES Tag( ID ),
	UNIQUE ( componentID, tagID )
);

CREATE TABLE ComponentPicture	(
	componentID	INT	REFERENCES Component( ID ),
	pictureID	INT	REFERENCES Picture( ID ),
	orderNumber	INT	NOT NULL,
	UNIQUE ( componentID, pictureID ),
	UNIQUE ( componentID, orderNumber ),
);


-- The list of features defined for a category
--
CREATE TABLE CategFeatures	(
	categoryID	INT	REFERENCES Category( ID ),
	featureID	INT	REFERENCES Feature( ID ),
	required	BOOLEAN,
	optional	BOOLEAN,
	UNIQUE ( categoryID, featureID )
);


-- The list of features required by members of a category
--
CREATE TABLE CategRequires	(
	categoryID	INT	REFERENCES Category( ID ),
	featureID	INT	REFERENCES Feature( ID ),
	quantity	INT,
	UNIQUE ( categoryID, featureID )
);

-- The list of features provided by members of a category
--
CREATE TABLE CategProvides	(
	categoryID	INT	REFERENCES Category( ID ),
	featureID	INT	REFERENCES Feature( ID ),
	quantity	INT,
	UNIQUE ( categoryID, featureID )
);

-- The list of checks for members of a category
--
CREATE TABLE CategoryCheck	(
	categoryID	INT	REFERENCES Category( ID ),
	ruleName	TEXT	NOT NULL,
	normalizedName	TEXT	NOT NULL UNIQUE
);

-- The list of features required by a component
--
CREATE TABLE ComponentRequires	(
	componentID	INT	REFERENCES Component( ID ),
	featureID	INT	REFERENCES Feature( ID ),
	quantity	INT,
	UNIQUE ( componentID, featureID )
);

-- The list of features provided by a component
--
CREATE TABLE ComponentProvides	(
	componentID	INT	REFERENCES Component( ID ),
	featureID	INT	REFERENCES Feature( ID ),
	quantity	INT,
	UNIQUE ( componentID, featureID )
);

-- The list of checks for a component
--
CREATE TABLE ComponentCheck	(
	categoryID	INT	REFERENCES Category( ID ),
	ruleName	TEXT
);


-- Recipes
--
CREATE TABLE Recipe	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	name		TEXT	NOT NULL,
	normalizedName	TEXT	NOT NULL UNIQUE,
	description	TEXT,
	categoryID	INT	REFERENCES Category( ID ),
	creationDate	TIMESTAMP,
	comment		TEXT
);

CREATE TABLE RecipePicture	(
	recipeID	INT	REFERENCES Recipe( ID ),
	pictureID	INT	REFERENCES Picture( ID ),
	orderNumber	INT	NOT NULL,
	UNIQUE ( recipeID, pictureID ),
	UNIQUE ( recipeID, orderNumber ),
);

CREATE TABLE RecipeContent	(
	recipeID	INT	REFERENCES Recipe( ID ),
	categoryID	INT	REFERENCES Category( ID ),
	minQuantity	INT,
	maxQuantity	INT,
	comment		TEXT,
	UNIQUE ( recipeID, categoryID )
);

CREATE TABLE RecipeComponent	(
	recipeID	INT	REFERENCES Recipe( ID ),
	componentID	INT	REFERENCES Component( ID ),
	quantity	INT,
	comment		TEXT,
	UNIQUE ( recipeID, componentID )
);


-- Configuration
--
CREATE TABLE Configuration	(
	ID		SERIAL	NOT NULL PRIMARY KEY,
	categoryID	INT	REFERENCES Category( ID ),
	name		TEXT,
	description	TEXT,
	comment		TEXT,
	recipeID	INT	REFERENCES Recipe( ID )
);

CREATE TABLE ConfigComponent	(
	configID	INT	REFERENCES Configuration( ID ),
	componentID	INT	REFERENCES Component( ID ),
	quantity	INT,
	fromRecipe	BOOLEAN,
	UNIQUE ( configID, componentID )
);

CREATE TABLE ComposedConfig	(
	configID	INT	REFERENCES Configuration( ID ),
	subConfigID	INT	REFERENCES Configuration( ID ),
	quantity	INT,
	UNIQUE ( configID, subConfigID )
);


-- Helper functions
--
CREATE OR REPLACE FUNCTION _group_concat(text, text)
RETURNS text AS $$
	SELECT CASE
		WHEN $2 IS NULL THEN $1
		WHEN $1 IS NULL THEN $2
	ELSE $1 operator(pg_catalog.||) ',' operator(pg_catalog.||) $2
END
$$ IMMUTABLE LANGUAGE SQL;

DROP AGGREGATE IF EXISTS group_concat(text);
CREATE AGGREGATE group_concat(text) (
	SFUNC = _group_concat,
	STYPE = text
);

CREATE OR REPLACE FUNCTION _group_concat_delim(text, text, text)
RETURNS text AS $$
	SELECT CASE
		WHEN $2 IS NULL THEN $1
		WHEN $1 IS NULL THEN $2
	ELSE $1 operator(pg_catalog.||) $3 operator(pg_catalog.||) $2
END
$$ IMMUTABLE LANGUAGE SQL;

DROP AGGREGATE IF EXISTS group_concat(text,text);
CREATE AGGREGATE group_concat(text,text) (
	SFUNC = _group_concat_delim,
	STYPE = text
);

CREATE OR REPLACE FUNCTION datetime(text)
RETURNS timestamp AS $$
	SELECT now( )::timestamp
$$ IMMUTABLE LANGUAGE SQL;

CREATE OR REPLACE FUNCTION convert_to_integer(v_input text)
RETURNS INTEGER AS $$
DECLARE v_int_value INTEGER DEFAULT NULL;
BEGIN
    BEGIN
        v_int_value := v_input::INTEGER;
    EXCEPTION WHEN OTHERS THEN
        RETURN NULL;
    END;
RETURN v_int_value;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION convert_to_numeric(v_input text)
RETURNS NUMERIC(10, 2) AS $$
DECLARE v_numeric_value NUMERIC(10, 2) DEFAULT NULL;
BEGIN
    BEGIN
        v_numeric_value := v_input::NUMERIC(10, 2);
    EXCEPTION WHEN OTHERS THEN
        RETURN NULL;
    END;
RETURN v_numeric_value;
END;
$$ LANGUAGE plpgsql;
