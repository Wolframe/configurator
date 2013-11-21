alter table picture add  orderNumber INT;
update picture set orderNumber=id;
alter table picture alter orderNumber set  NOT NULL;

ALTER TABLE CategoryPicture ADD COLUMN orderNumber INT;
UPDATE CategoryPicture SET orderNumber = pictureID;
alter table CategoryPicture alter orderNumber set  NOT NULL;

ALTER TABLE FeaturePicture ADD COLUMN orderNumber INT;
UPDATE FeaturePicture SET orderNumber = pictureID;
alter table FeaturePicture alter orderNumber set  NOT NULL;

ALTER TABLE RecipePicture ADD COLUMN orderNumber INT;
UPDATE RecipePicture SET orderNumber = pictureID;
alter table RecipePicture alter orderNumber set  NOT NULL;
