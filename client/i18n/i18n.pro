TEMPLATE = lib

FORMS += \
	../uiforms/categories.ui \
	../uiforms/category_add.ui \
	../uiforms/category_edit.ui \
	../uiforms/category_select.ui \
	../uiforms/component_add.ui \
	../uiforms/component_edit.ui \
	../uiforms/components.ui \
	../uiforms/feature_add.ui \
	../uiforms/feature_edit.ui \
	../uiforms/feature_select_required_add.ui \
	../uiforms/feature_select_required_edit.ui \
	../uiforms/feature_select_provided_add.ui \
	../uiforms/feature_select_provided_edit.ui \
	../uiforms/features.ui \
	../uiforms/manufacturer_add.ui \
	../uiforms/manufacturer_edit.ui \
	../uiforms/manufacturer_select.ui \
	../uiforms/manufacturers.ui \
	../uiforms/picture_add.ui \
	../uiforms/picture_edit.ui \
	../uiforms/picture_info.ui \
	../uiforms/picture_select.ui \
	../uiforms/pictures.ui \
	../uiforms/tag_add.ui \
	../uiforms/tag_edit.ui \
	../uiforms/tag_select.ui \
	../uiforms/tags.ui \
	../menus/mainmenu.ui
	
TRANSLATIONS += \
	configurator.de_CH.ts \
	configurator.ro_RO.ts

isEmpty(QMAKE_LRELEASE) {
    win32:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]\\lrelease.exe
    else:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]/lrelease
}
updateqm.input = TRANSLATIONS
updateqm.output = ${QMAKE_FILE_PATH}/${QMAKE_FILE_BASE}.qm
updateqm.commands = $$QMAKE_LRELEASE ${QMAKE_FILE_IN} -qm ${QMAKE_FILE_PATH}/${QMAKE_FILE_BASE}.qm
updateqm.CONFIG += no_link
QMAKE_EXTRA_COMPILERS += updateqm
PRE_TARGETDEPS += compiler_updateqm_make_all

# update language resources with 'lupdate-qt4 -verbose i18n.pro'

SOURCES = \
	dummy.cpp
	
