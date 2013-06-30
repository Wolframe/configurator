#include <sqlite3ext.h>

#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <errno.h>
#include <string.h>

SQLITE_EXTENSION_INIT1

static void convert_to_integer( sqlite3_context *context, int argc, sqlite3_value **argv )
{
	const unsigned char *s = sqlite3_value_text( argv[0] );
	size_t len = strlen( s );
	char *end;
	long int i = strtol( s, &end, 10 );
	if( (unsigned char *)end - s < len || len == 0 || ( i == LONG_MIN || i == LONG_MAX && errno == ERANGE ) ) {
		sqlite3_result_null( context );
	} else {
		sqlite3_result_int( context, i );
	}
}

static void convert_to_numeric( sqlite3_context *context, int argc, sqlite3_value **argv )
{
	const unsigned char *s = sqlite3_value_text( argv[0] );
	size_t len = strlen( s );
	char *end;
	double d = strtod( s, &end );
	if( (unsigned char *)end - s < len || len == 0 || d == HUGE_VAL && errno == ERANGE ) {
		sqlite3_result_null( context );
	} else {
		sqlite3_result_double( context, d );
	}
}

int sqlite3_extension_init( sqlite3 *db, char **errmsg, const sqlite3_api_routines *api )
{
  SQLITE_EXTENSION_INIT2( api )
  sqlite3_create_function( db, "convert_to_integer", 1, SQLITE_ANY, 0, convert_to_integer, 0, 0);
  sqlite3_create_function( db, "convert_to_numeric", 1, SQLITE_ANY, 0, convert_to_numeric, 0, 0);
  return 0;
}
