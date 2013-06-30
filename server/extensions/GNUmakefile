all: configurator.sqlext

configurator.sqlext: configurator_ext.c
	gcc -shared -fPIC -Isqlite3 -o configurator.sqlext configurator_ext.c 

clean:
	-rm -f configurator.sqlext

test: all
	-LD_LIBRARY_PATH=. sqlite3 -batch < test.sql
	
