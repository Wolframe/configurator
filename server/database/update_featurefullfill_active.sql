CREATE TABLE FeatureFulfill	(
	featureID	INT	REFERENCES Feature( ID ),
	featureCount	INT,
	fulfillID	INT	REFERENCES Feature( ID ),
	fulfillCount	INT,
	UNIQUE ( featureID, fulfillID )
);

alter table category add active boolean;
alter table feature add active boolean;
alter table manufacturer add active boolean;
alter table component add active boolean;
update category set active=TRUE;
update feature set active=TRUE;
update manufacturer set active=TRUE;
update component set active=TRUE;
