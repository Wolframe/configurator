.load configurator.sqlext
select convert_to_integer('44');
select convert_to_integer('22');
select convert_to_integer('0');
select convert_to_integer('');
select convert_to_integer('bla');
select ifnull(convert_to_integer(''), 'null');
select ifnull(convert_to_integer('bla'), 'null');
select convert_to_numeric('2.45');
select convert_to_numeric('22');
select convert_to_numeric('');
select convert_to_numeric('bla');
select ifnull(convert_to_numeric(''), 'null');
select ifnull(convert_to_numeric('bla'), 'null');
.quit
