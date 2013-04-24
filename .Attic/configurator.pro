TEMPLATE = app

TARGET = qtclient

CONFIG += qt debug

DEFINES += WITH_SSL

INCLUDEPATH += .

QT += core gui network

SOURCES += \
	MainWindow.cpp \
	FormLoader.cpp \
	FileFormLoader.cpp \
	NetworkFormLoader.cpp \
	DataLoader.cpp \
	FileDataLoader.cpp \
	NetworkDataLoader.cpp \
	DataHandler.cpp \
	WolframeClient.cpp \
	FormWidget.cpp \
	PreferencesDialog.cpp \
	FormChooseDialog.cpp \
	connection.cpp \
	manageServersDialog.cpp \
	serverDefinitionDialog.cpp \
	settings.cpp \
	loginDialog.cpp \
	LoadMode.cpp \
	DebugTerminal.cpp \
	HistoryLineEdit.cpp \
	qtclient.cpp \
	FileChooser.cpp \
	PictureChooser.cpp \
	configurator_form.cpp \
    ImageSelectionDialog.cpp

HEADERS += \
	MainWindow.hpp \
	FormLoader.hpp \
	FileFormLoader.hpp \
	NetworkFormLoader.hpp \
	DataLoader.hpp \
	FileDataLoader.hpp \
	NetworkDataLoader.hpp \
	DataHandler.hpp \
	WolframeClient.hpp \
	FormWidget.hpp \
	PreferencesDialog.hpp \
	FormChooseDialog.hpp \
	connection.hpp \
	manageServersDialog.hpp \
	serverDefinitionDialog.hpp \
	settings.hpp \
	loginDialog.hpp \
	LoadMode.hpp \
	DebugTerminal.hpp \
	HistoryLineEdit.hpp \
	FileChooser.hpp \
	PictureChooser.hpp \
	categories_features_add_form.h \
	categories_features_edit_form.h \
	categories_features_form.h \
	categories_form.h \
	category_add_form.h \
	category_edit_form.h \
	component_add_form.h \
	component_edit_form.h \
	components_features_add_form.h \
	components_features_edit_form.h \
	components_features_form.h \
	components_form.h \
	configuration_add_form.h \
	configuration_edit_form.h \
	configurations_form.h \
	feature_add_form.h \
	feature_edit_form.h \
	features_form.h \
	manufacturer_add_form.h \
	manufacturer_edit_form.h \
	manufacturers_form.h \
	picture_add_form.h \
	picture_edit_form.h \
	picture_info_form.h \
	pictures_form.h \
	recipe_add_form.h \
	recipe_content_add_form.h \
	recipe_content_edit_form.h \
	recipe_content_form.h \
	recipe_edit_form.h \
	recipes_form.h \
	tag_add_form.h \
	tag_edit_form.h \
	tags_form.h \
	categories_features_add_form.h \
	categories_features_edit_form.h \
	categories_features_form.h \
	categories_form.h \
	category_add_form.h \
	category_edit_form.h \
	component_add_form.h \
	component_edit_form.h \
	components_features_add_form.h \
	components_features_edit_form.h \
	components_features_form.h \
	components_form.h \
	configuration_add_form.h \
	configuration_edit_form.h \
	configurations_form.h \
	feature_add_form.h \
	feature_edit_form.h \
	features_form.h \
	manufacturer_add_form.h \
	manufacturer_edit_form.h \
	manufacturers_form.h \
	picture_add_form.h \
	picture_edit_form.h \
	picture_info_form.h \
	pictures_form.h \
	recipe_add_form.h \
	recipe_content_add_form.h \
	recipe_content_edit_form.h \
	recipe_content_form.h \
	recipe_component_add_form.h \
	recipe_component_edit_form.h \
	recipe_component_form.h \
	recipe_edit_form.h \
	recipes_form.h \
	tag_add_form.h \
	tag_edit_form.h \
	tags_form.h \
	configurator_form.h \
	feature_equivalence_form.h \
	feature_equivalence_add_form.h \
	feature_equivalence_edit_form.h \
    ImageSelectionDialog.hpp

FORMS += \
	loginDialog.ui \
	MainWindow.ui \
	manageServersDialog.ui \
	PreferencesDialogDeveloper.ui \
	PreferencesDialogInterface.ui \
	PreferencesDialog.ui \
	serverDefinitionDialog.ui \
	../client/forms/categories_features_add.ui \
	../client/forms/categories_features_edit.ui \
	../client/forms/categories_features.ui \
	../client/forms/categories.ui \
	../client/forms/category_add.ui \
	../client/forms/category_edit.ui \
	../client/forms/component_add.ui \
	../client/forms/component_edit.ui \
	../client/forms/components_features_add.ui \
	../client/forms/components_features_edit.ui \
	../client/forms/components_features.ui \
	../client/forms/components.ui \
	../client/forms/configuration_add.ui \
	../client/forms/configuration_edit.ui \
	../client/forms/configurations.ui \
	../client/forms/feature_add.ui \
	../client/forms/feature_edit.ui \
	../client/forms/features.ui \
	../client/forms/manufacturer_add.ui \
	../client/forms/manufacturer_edit.ui \
	../client/forms/manufacturers.ui \
	../client/forms/picture_add.ui \
	../client/forms/picture_edit.ui \
	../client/forms/picture_info.ui \
	../client/forms/pictures.ui \
	../client/forms/recipe_add.ui \
	../client/forms/recipe_content_add.ui \
	../client/forms/recipe_content_edit.ui \
	../client/forms/recipe_content.ui \
	../client/forms/recipe_component_add.ui \
	../client/forms/recipe_component_edit.ui \
	../client/forms/recipe_component.ui \
	../client/forms/recipe_edit.ui \
	../client/forms/recipes.ui \
	../client/forms/tag_add.ui \
	../client/forms/tag_edit.ui \
	../client/forms/tags.ui \
	../client/forms/feature_equivalence.ui \
	../client/forms/feature_equivalence_add.ui \
	../client/forms/feature_equivalence_edit.ui \
    ../client/forms/recipe_select.ui \
    ../client/forms/tag_select.ui \
    ../client/forms/category_select.ui \
    ../client/forms/feature_select.ui \
    ../client/forms/picture_select.ui
	
RESOURCES = \
	qtclient.qrc
	
