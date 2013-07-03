PREPARE getLastPictureID AS SELECT DISTINCT last_insert_rowid( ) AS "id" FROM Picture;
PREPARE getLastConfigurationID AS SELECT DISTINCT last_insert_rowid( ) AS "id" FROM Configuration AS id;
PREPARE createIdList AS CREATE TEMPORARY TABLE IF NOT EXISTS IDlist (ID INT);
PREPARE createIdUnion AS CREATE TEMPORARY TABLE IF NOT EXISTS IDunion (ID INT);
PREPARE dropIdList AS DROP TABLE IDList;
PREPARE dropIdUnion AS DROP TABLE IDUnion;
PREPARE createFeatureIDlist AS CREATE TEMPORARY TABLE IF NOT EXISTS IDlist (featureID INT, minQuantity INT, maxQuantity INT);
PREPARE createComponentIDlist AS CREATE TEMPORARY TABLE IF NOT EXISTS IDlist (componentID INT, quantity INT);
PREPARE createCategoryIDlist AS CREATE TEMPORARY TABLE IF NOT EXISTS IDlist (categoryID INT, minQuantity INT, maxQuantity INT);
