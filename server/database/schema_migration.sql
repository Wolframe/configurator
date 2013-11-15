alter table picture add  orderNumber INT;
update picture set orderNumber=id;
alter table picture alter orderNumber set  NOT NULL;
