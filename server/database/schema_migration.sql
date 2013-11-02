CREATE TABLE CurrencyCode	(
	code		CHAR(3)	NOT NULL PRIMARY KEY,
	name		TEXT	NOT NULL,
	multiplier	INT	NOT NULL DEFAULT 1
);

INSERT INTO CurrencyCode VALUES( 'EUR', 'Euro', 1 );

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

alter table Component add priceCurrency CHAR(3) NOT NULL DEFAULT 'EUR';

alter table Component add foreign key(priceCurrency) REFERENCES CurrencyCode( code );
