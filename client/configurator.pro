TEMPLATE = app

TARGET = qtclient

CONFIG += thread qt uitools designer debug

DEFINES += QCOMMANDLINE_STATIC WITH_SSL

INCLUDEPATH += .

QT += core gui network sql

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
	qcommandline.cpp \
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
	PictureChooser.cpp

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
	qcommandline.h \
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
	configuration_component_add_form.h \
	configuration_component_edit_form.h \
	configuration_components_form.h \
	configuration_edit_form.h \
	configurations_form.h \
	configuration_subconfig_add_form.h \
	configuration_subconfig_edit_form.h \
	configuration_subconfigs_form.h \
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
	configuration_component_add_form.h \
	configuration_component_edit_form.h \
	configuration_components_form.h \
	configuration_edit_form.h \
	configurations_form.h \
	configuration_subconfig_add_form.h \
	configuration_subconfig_edit_form.h \
	configuration_subconfigs_form.h \
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
	tags_form.h

FORMS += \
	loginDialog.ui \
	MainWindow.ui \
	manageServersDialog.ui \
	PreferencesDialogDeveloper.ui \
	PreferencesDialogInterface.ui \
	PreferencesDialog.ui \
	serverDefinitionDialogNoSSL.ui \
	serverDefinitionDialog.ui \
	forms/categories_features_add.ui \
	forms/categories_features_edit.ui \
	forms/categories_features.ui \
	forms/categories.ui \
	forms/category_add.ui \
	forms/category_edit.ui \
	forms/component_add.ui \
	forms/component_edit.ui \
	forms/components_features_add.ui \
	forms/components_features_edit.ui \
	forms/components_features.ui \
	forms/components.ui \
	forms/configuration_add.ui \
	forms/configuration_component_add.ui \
	forms/configuration_component_edit.ui \
	forms/configuration_components.ui \
	forms/configuration_edit.ui \
	forms/configuration_subconfig_add.ui \
	forms/configuration_subconfig_edit.ui \
	forms/configuration_subconfigs.ui \
	forms/configurations.ui \
	forms/feature_add.ui \
	forms/feature_edit.ui \
	forms/features.ui \
	forms/manufacturer_add.ui \
	forms/manufacturer_edit.ui \
	forms/manufacturers.ui \
	forms/picture_add.ui \
	forms/picture_edit.ui \
	forms/picture_info.ui \
	forms/pictures.ui \
	forms/recipe_add.ui \
	forms/recipe_content_add.ui \
	forms/recipe_content_edit.ui \
	forms/recipe_content.ui \
	forms/recipe_edit.ui \
	forms/recipes.ui \
	forms/tag_add.ui \
	forms/tag_edit.ui \
	forms/tags.ui

RESOURCES = \
	qtclient.qrc
	
