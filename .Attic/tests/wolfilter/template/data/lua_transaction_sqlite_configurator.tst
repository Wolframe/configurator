#!/bin/sh
testname=`basename $0 ".tst"`				# name of the test
requestdoctype='addCategoryHierarchy'
opt=""
modpath="../../src/modules"				# module directory relative from tests/temp
opt="$opt --module $modpath/cmdbind/lua/mod_command_lua"
luascript=`echo $testname | sed 's/lua_//' | sed 's/_sqlite//'`.lua
opt="$opt --program=$luascript"
opt="$opt --program configurator.normalize"		# normalization program for simpleform ddl types
opt="$opt --program category.simpleform"		# category forms
opt="$opt --program feature.simpleform"			# feature forms
opt="$opt --program manufacturer.simpleform"		# manufacturer forms
opt="$opt --program picture.simpleform"			# picture forms
opt="$opt --program tag.simpleform"			# tag forms
modpath="../../src/modules/ddlcompiler/"		# module directory for ddl definitions relative from tests/temp
mod="$modpath/simpleform/mod_ddlcompiler_simpleform"	# module to load
opt="$opt --module $mod"
modpath="../../src/modules/normalize/"			# module directory for normalizers relative from tests/temp
mod="$modpath/number/mod_normalize_number"		# module to load
opt="$opt --module $mod"
mod="$modpath/string/mod_normalize_string"		# module to load
opt="$opt --module $mod"
modpath="../../src/modules/cmdbind/directmap"		# module directory relative from tests/temp
opt="$opt --module $modpath/mod_command_directmap"
modpath="../wolfilter/modules/functions"		# module directory relative from tests/temp
opt="$opt --module $modpath/fakegraphix/mod_graphix"
modpath="../wolfilter/modules/database"			# module directory relative from tests/temp
opt="$opt --module $modpath/sqlite3/mod_db_sqlite3test"
opt="$opt --database 'identifier=testdb,file=test.db,dumpfile=DBDUMP,inputfile=DBDATA,program=program.sql'"
opt="$opt --program=DBPRG.tdl"
demopath=../../../examples/demo/configurator
genscript=../scripts/$luascript
projectpath=../../../examples/demo/configurator
cat $projectpath/program/configurator.lua > $genscript
echo >> $genscript
cat scripts/$luascript >> $genscript
testscripts="$luascript"
testcmd="$opt run"					# command to execute by the test
docname=`echo $testname | sed 's/_sqlite//'`
docin=$docname.in					# input document name
docout=$docname.out					# output document name
dumpout="program/$testname.dbdump.txt"			# resource dump to add to expected test output
testdata="
**file: DBDATA
`cat $projectpath/database/schema_sqlite.sql`
**file:category.simpleform
`cat $projectpath/program/category.simpleform`
**file:feature.simpleform
`cat $projectpath/program/feature.simpleform`
**file:tag.simpleform
`cat $projectpath/program/tag.simpleform`
**file:manufacturer.simpleform
`cat $projectpath/program/manufacturer.simpleform`
**file:picture.simpleform
`cat $projectpath/program/picture.simpleform`
**file:configurator.normalize
`cat $projectpath/program/configurator.normalize`
**file:program.sql
`cat $projectpath/program/sqlite.sql`
**file:DBPRG.tdl
`cat $projectpath/program/category.tdl`
`cat $projectpath/program/feature.tdl`
`cat $projectpath/program/tag.tdl`
`cat $projectpath/program/manufacturer.tdl`
`cat $projectpath/program/picture.tdl`
**outputfile:DBDUMP"
csetlist="UTF-8"
. ./output_tst_all.sh
