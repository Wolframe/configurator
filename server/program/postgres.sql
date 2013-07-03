PREPARE getLastPictureID AS SELECT DISTINCT currval( pg_get_serial_sequence( 'picture', 'id' ) );
PREPARE getLastConfigurationID AS SELECT DISTINCT currval( pg_get_serial_sequence( 'configuration', 'id' ) ) AS "id";
PREPARE createIdList AS CREATE LOCAL TEMPORARY TABLE IDlist (ID INT) ON COMMIT DROP;
PREPARE createIdUnion AS CREATE LOCAL TEMPORARY TABLE IDunion (ID INT) ON COMMIT DROP;
PREPARE dropIdList AS DROP TABLE IDList;
PREPARE dropIdUnion AS DROP TABLE IDUnion;
PREPARE createFeatureIDlist AS CREATE LOCAL TEMPORARY TABLE IDlist (featureID INT, minQuantity INT, maxQuantity INT) ON COMMIT DROP;
PREPARE createComponentIDlist AS CREATE LOCAL TEMPORARY TABLE IDlist (componentID INT, quantity INT) ON COMMIT DROP;
PREPARE createCategoryIDlist AS CREATE LOCAL TEMPORARY TABLE IDlist (categoryID INT, minQuantity INT, maxQuantity INT) ON COMMIT DROP;
