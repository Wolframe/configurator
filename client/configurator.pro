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
	ui_categories_features_add.h \
	ui_categories_features_edit.h \
	ui_categories_features.h \
	ui_categories.h \
	ui_category_add.h \
	ui_category_edit.h \
	ui_component_add.h \
	ui_component_edit.h \
	ui_components_features_add.h \
	ui_components_features_edit.h \
	ui_components_features.h \
	ui_components.h \
	ui_configuration_add.h \
	ui_configuration_component_add.h \
	ui_configuration_component_edit.h \
	ui_configuration_components.h \
	ui_configuration_edit.h \
	ui_configurations.h \
	ui_configuration_subconfig_add.h \
	ui_configuration_subconfig_edit.h \
	ui_configuration_subconfigs.h \
	ui_feature_add.h \
	ui_feature_edit.h \
	ui_features.h \
	ui_loginDialog.h \
	ui_MainWindow.h \
	ui_manageServersDialog.h \
	ui_manufacturer_add.h \
	ui_manufacturer_edit.h \
	ui_manufacturers.h \
	ui_picture_add.h \
	ui_picture_edit.h \
	ui_picture_info.h \
	ui_pictures.h \
	ui_PreferencesDialogDeveloper.h \
	ui_PreferencesDialog.h \
	ui_PreferencesDialogInterface.h \
	ui_recipe_add.h \
	ui_recipe_content_add.h \
	ui_recipe_content_edit.h \
	ui_recipe_content.h \
	ui_recipe_edit.h \
	ui_recipes.h \
	ui_serverDefinitionDialog.h \
	ui_serverDefinitionDialogNoSSL.h \
	ui_tag_add.h \
	ui_tag_edit.h \
	ui_tags.h \
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

RESOURCES = \
	qtclient.qrc
	
