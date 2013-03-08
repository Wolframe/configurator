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
update category set active='1';
update feature set active='1';
update manufacturer set active='1';
update component set active='1';
