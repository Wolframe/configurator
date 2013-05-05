TEMPLATE = lib

FORMS += \
	../uiforms/categories_features_add.ui \
	../uiforms/categories_features_edit.ui \
	../uiforms/categories_features.ui \
	../uiforms/categories.ui \
	../uiforms/category_add.ui \
	../uiforms/category_edit.ui \
	../uiforms/category_select.ui \
	../uiforms/component_add.ui \
	../uiforms/component_edit.ui \
	../uiforms/components_features_add.ui \
	../uiforms/components_features_edit.ui \
	../uiforms/components_features.ui \
	../uiforms/components.ui \
	../uiforms/configuration_add.ui \
	../uiforms/configuration_edit.ui \
	../uiforms/configurations.ui \
	../uiforms/feature_add.ui \
	../uiforms/feature_edit.ui \
	../uiforms/feature_equivalence_add.ui \
	../uiforms/feature_equivalence_edit.ui \
	../uiforms/feature_equivalence.ui \
	../uiforms/feature_select.ui \
	../uiforms/features.ui \
	../uiforms/manufacturer_add.ui \
	../uiforms/manufacturer_edit.ui \
	../uiforms/manufacturers.ui \
	../uiforms/picture_add.ui \
	../uiforms/picture_edit.ui \
	../uiforms/picture_info.ui \
	../uiforms/picture_select.ui \
	../uiforms/pictures.ui \
	../uiforms/recipe_add.ui \
	../uiforms/recipe_component_add.ui \
	../uiforms/recipe_component_edit.ui \
	../uiforms/recipe_component.ui \
	../uiforms/recipe_content_add.ui \
	../uiforms/recipe_content_edit.ui \
	../uiforms/recipe_content.ui \
	../uiforms/recipe_edit.ui \
	../uiforms/recipe_select.ui \
	../uiforms/recipes.ui \
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
