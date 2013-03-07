/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Thu Mar 7 07:26:53 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionDebugTerminal;
    QAction *actionPreferences;
    QAction *actionManageStorage;
    QAction *actionRestart;
    QAction *actionContents;
    QAction *actionIndex;
    QAction *actionContextHelp;
    QAction *actionTechnicalSupport;
    QAction *actionReportBug;
    QAction *actionCheckForUpdates;
    QAction *actionReload;
    QAction *actionClose;
    QAction *actionCloseAll;
    QAction *actionTile;
    QAction *actionCascade;
    QAction *actionNextWindow;
    QAction *actionPreviousWindow;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelectAll;
    QAction *actionCopy;
    QAction *actionLogin;
    QAction *actionLogout;
    QAction *actionPrint;
    QAction *actionManageServers;
    QAction *actionTest;
    QAction *action_Close_form;
    QMdiArea *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuWindow;
    QMenu *menuForms;
    QMenu *menuFile;
    //~ QMenu *menuSettings;
    //~ QMenu *menuLanguages;
    QStatusBar *statusbar;
    QToolBar *toolBarConnection;
    QToolBar *toolBarEdit;
    QToolBar *toolBarWindow;
    QAction *action_categories_features_add;	
    QAction *action_categories_features_edit;	
    QAction *action_categories_features;	
    QAction *action_categories;	
    QAction *action_category_add;	
    QAction *action_category_edit;	
    QAction *action_component_add;	
    QAction *action_component_edit;	
    QAction *action_components_features_add;	
    QAction *action_components_features_edit;	
    QAction *action_components_features;	
    QAction *action_components;	
    QAction *action_configuration_add;	
    QAction *action_configuration_component_add;	
    QAction *action_configuration_component_edit;	
    QAction *action_configuration_components;	
    QAction *action_configuration_edit;	
    QAction *action_configurations;	
    QAction *action_configuration_subconfig_add;	
    QAction *action_configuration_subconfig_edit;	
    QAction *action_configuration_subconfigs;	
    QAction *action_feature_add;	
    QAction *action_feature_edit;	
    QAction *action_features;	
    QAction *action_manufacturer_add;	
    QAction *action_manufacturer_edit;	
    QAction *action_manufacturers;	
    QAction *action_picture_add;	
    QAction *action_picture_edit;	
    QAction *action_picture_info;	
    QAction *action_pictures;	
    QAction *action_recipe_add;	
    QAction *action_recipe_content_add;	
    QAction *action_recipe_content_edit;	
    QAction *action_recipe_content;	
    QAction *action_recipe_edit;	
    QAction *action_recipes;	
    QAction *action_tag_add;	
    QAction *action_tag_edit;	
    QAction *action_tags;	

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(607, 395);
        MainWindow->setDocumentMode(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionExit->setMenuRole(QAction::QuitRole);
        actionExit->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Quit")));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionAboutQt->setMenuRole(QAction::AboutQtRole);
        actionDebugTerminal = new QAction(MainWindow);
        actionDebugTerminal->setObjectName(QString::fromUtf8("actionDebugTerminal"));
        actionDebugTerminal->setCheckable(true);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon2);
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionPreferences->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Preferences")));
        actionManageStorage = new QAction(MainWindow);
        actionManageStorage->setObjectName(QString::fromUtf8("actionManageStorage"));
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName(QString::fromUtf8("actionRestart"));
        actionContents = new QAction(MainWindow);
        actionContents->setObjectName(QString::fromUtf8("actionContents"));
        actionContents->setEnabled(false);
        actionContents->setVisible(true);
        actionContents->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::HelpContents")));
        actionIndex = new QAction(MainWindow);
        actionIndex->setObjectName(QString::fromUtf8("actionIndex"));
        actionIndex->setEnabled(false);
        actionContextHelp = new QAction(MainWindow);
        actionContextHelp->setObjectName(QString::fromUtf8("actionContextHelp"));
        actionContextHelp->setEnabled(false);
        actionTechnicalSupport = new QAction(MainWindow);
        actionTechnicalSupport->setObjectName(QString::fromUtf8("actionTechnicalSupport"));
        actionTechnicalSupport->setEnabled(false);
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName(QString::fromUtf8("actionReportBug"));
        actionReportBug->setEnabled(false);
        actionCheckForUpdates = new QAction(MainWindow);
        actionCheckForUpdates->setObjectName(QString::fromUtf8("actionCheckForUpdates"));
        actionCheckForUpdates->setEnabled(false);
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        actionReload->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReload->setIcon(icon3);
        actionReload->setVisible(true);
        actionReload->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Refresh")));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose->setEnabled(false);
        actionClose->setShortcutContext(Qt::WidgetShortcut);
        actionClose->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Close")));
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        actionCloseAll->setEnabled(false);
        actionTile = new QAction(MainWindow);
        actionTile->setObjectName(QString::fromUtf8("actionTile"));
        actionTile->setEnabled(false);
        actionCascade = new QAction(MainWindow);
        actionCascade->setObjectName(QString::fromUtf8("actionCascade"));
        actionCascade->setEnabled(false);
        actionNextWindow = new QAction(MainWindow);
        actionNextWindow->setObjectName(QString::fromUtf8("actionNextWindow"));
        actionNextWindow->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNextWindow->setIcon(icon4);
        actionNextWindow->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::NextChild")));
        actionPreviousWindow = new QAction(MainWindow);
        actionPreviousWindow->setObjectName(QString::fromUtf8("actionPreviousWindow"));
        actionPreviousWindow->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreviousWindow->setIcon(icon5);
        actionPreviousWindow->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::PreviousChild")));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon6);
        actionUndo->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Undo")));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon7);
        actionRedo->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Redo")));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionCut->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Cut")));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionPaste->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Paste")));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionDelete->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon10);
        actionDelete->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Delete")));
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        actionSelectAll->setEnabled(false);
        actionSelectAll->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::SelectAll")));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon11);
        actionCopy->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Copy")));
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        actionLogin->setEnabled(false);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogin->setIcon(icon12);
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionLogout->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogout->setIcon(icon13);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionPrint->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon14);
        actionPrint->setProperty("defaultShortcut", QVariant(QString::fromUtf8("QKeySequence::Print")));
        actionManageServers = new QAction(MainWindow);
        actionManageServers->setObjectName(QString::fromUtf8("actionManageServers"));
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        action_Close_form = new QAction(MainWindow);
        action_Close_form->setObjectName(QString::fromUtf8("action_Close_form"));
        centralWidget = new QMdiArea(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setViewMode(QMdiArea::SubWindowView);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 607, 19));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
	menuForms = new QMenu(menuBar);
	menuForms->setObjectName(QString::fromUtf8("menuForms"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        //~ menuSettings = new QMenu(menuBar);
        //~ menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        //~ menuLanguages = new QMenu(menuSettings);
        //~ menuLanguages->setObjectName(QString::fromUtf8("menuLanguages"));
        MainWindow->setMenuBar(menuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBarConnection = new QToolBar(MainWindow);
        toolBarConnection->setObjectName(QString::fromUtf8("toolBarConnection"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarConnection);
        toolBarEdit = new QToolBar(MainWindow);
        toolBarEdit->setObjectName(QString::fromUtf8("toolBarEdit"));
        toolBarEdit->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarEdit);
        toolBarWindow = new QToolBar(MainWindow);
        toolBarWindow->setObjectName(QString::fromUtf8("toolBarWindow"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarWindow);

	action_categories_features_add = new QAction(MainWindow);
	action_categories_features_add->setObjectName(QString::fromUtf8("action_categories_features_add"));
	action_categories_features_add->setEnabled(true);
	menuForms->addAction(action_categories_features_add);
	action_categories_features_edit = new QAction(MainWindow);
	action_categories_features_edit->setObjectName(QString::fromUtf8("action_categories_features_edit"));
	action_categories_features_edit->setEnabled(true);
	menuForms->addAction(action_categories_features_edit);
	action_categories_features = new QAction(MainWindow);
	action_categories_features->setObjectName(QString::fromUtf8("action_categories_features"));
	action_categories_features->setEnabled(true);
	menuForms->addAction(action_categories_features);
	action_categories = new QAction(MainWindow);
	action_categories->setObjectName(QString::fromUtf8("action_categories"));
	action_categories->setEnabled(true);
	menuForms->addAction(action_categories);
	action_category_add = new QAction(MainWindow);
	action_category_add->setObjectName(QString::fromUtf8("action_category_add"));
	action_category_add->setEnabled(true);
	menuForms->addAction(action_category_add);
	action_category_edit = new QAction(MainWindow);
	action_category_edit->setObjectName(QString::fromUtf8("action_category_edit"));
	action_category_edit->setEnabled(true);
	menuForms->addAction(action_category_edit);
	action_component_add = new QAction(MainWindow);
	action_component_add->setObjectName(QString::fromUtf8("action_component_add"));
	action_component_add->setEnabled(true);
	menuForms->addAction(action_component_add);
	action_component_edit = new QAction(MainWindow);
	action_component_edit->setObjectName(QString::fromUtf8("action_component_edit"));
	action_component_edit->setEnabled(true);
	menuForms->addAction(action_component_edit);
	action_components_features_add = new QAction(MainWindow);
	action_components_features_add->setObjectName(QString::fromUtf8("action_components_features_add"));
	action_components_features_add->setEnabled(true);
	menuForms->addAction(action_components_features_add);
	action_components_features_edit = new QAction(MainWindow);
	action_components_features_edit->setObjectName(QString::fromUtf8("action_components_features_edit"));
	action_components_features_edit->setEnabled(true);
	menuForms->addAction(action_components_features_edit);
	action_components_features = new QAction(MainWindow);
	action_components_features->setObjectName(QString::fromUtf8("action_components_features"));
	action_components_features->setEnabled(true);
	menuForms->addAction(action_components_features);
	action_components = new QAction(MainWindow);
	action_components->setObjectName(QString::fromUtf8("action_components"));
	action_components->setEnabled(true);
	menuForms->addAction(action_components);
	action_configuration_add = new QAction(MainWindow);
	action_configuration_add->setObjectName(QString::fromUtf8("action_configuration_add"));
	action_configuration_add->setEnabled(true);
	menuForms->addAction(action_configuration_add);
	action_configuration_component_add = new QAction(MainWindow);
	action_configuration_component_add->setObjectName(QString::fromUtf8("action_configuration_component_add"));
	action_configuration_component_add->setEnabled(true);
	menuForms->addAction(action_configuration_component_add);
	action_configuration_component_edit = new QAction(MainWindow);
	action_configuration_component_edit->setObjectName(QString::fromUtf8("action_configuration_component_edit"));
	action_configuration_component_edit->setEnabled(true);
	menuForms->addAction(action_configuration_component_edit);
	action_configuration_components = new QAction(MainWindow);
	action_configuration_components->setObjectName(QString::fromUtf8("action_configuration_components"));
	action_configuration_components->setEnabled(true);
	menuForms->addAction(action_configuration_components);
	action_configuration_edit = new QAction(MainWindow);
	action_configuration_edit->setObjectName(QString::fromUtf8("action_configuration_edit"));
	action_configuration_edit->setEnabled(true);
	menuForms->addAction(action_configuration_edit);
	action_configurations = new QAction(MainWindow);
	action_configurations->setObjectName(QString::fromUtf8("action_configurations"));
	action_configurations->setEnabled(true);
	menuForms->addAction(action_configurations);
	action_configuration_subconfig_add = new QAction(MainWindow);
	action_configuration_subconfig_add->setObjectName(QString::fromUtf8("action_configuration_subconfig_add"));
	action_configuration_subconfig_add->setEnabled(true);
	menuForms->addAction(action_configuration_subconfig_add);
	action_configuration_subconfig_edit = new QAction(MainWindow);
	action_configuration_subconfig_edit->setObjectName(QString::fromUtf8("action_configuration_subconfig_edit"));
	action_configuration_subconfig_edit->setEnabled(true);
	menuForms->addAction(action_configuration_subconfig_edit);
	action_configuration_subconfigs = new QAction(MainWindow);
	action_configuration_subconfigs->setObjectName(QString::fromUtf8("action_configuration_subconfigs"));
	action_configuration_subconfigs->setEnabled(true);
	menuForms->addAction(action_configuration_subconfigs);
	action_feature_add = new QAction(MainWindow);
	action_feature_add->setObjectName(QString::fromUtf8("action_feature_add"));
	action_feature_add->setEnabled(true);
	menuForms->addAction(action_feature_add);
	action_feature_edit = new QAction(MainWindow);
	action_feature_edit->setObjectName(QString::fromUtf8("action_feature_edit"));
	action_feature_edit->setEnabled(true);
	menuForms->addAction(action_feature_edit);
	action_features = new QAction(MainWindow);
	action_features->setObjectName(QString::fromUtf8("action_features"));
	action_features->setEnabled(true);
	menuForms->addAction(action_features);
	action_manufacturer_add = new QAction(MainWindow);
	action_manufacturer_add->setObjectName(QString::fromUtf8("action_manufacturer_add"));
	action_manufacturer_add->setEnabled(true);
	menuForms->addAction(action_manufacturer_add);
	action_manufacturer_edit = new QAction(MainWindow);
	action_manufacturer_edit->setObjectName(QString::fromUtf8("action_manufacturer_edit"));
	action_manufacturer_edit->setEnabled(true);
	menuForms->addAction(action_manufacturer_edit);
	action_manufacturers = new QAction(MainWindow);
	action_manufacturers->setObjectName(QString::fromUtf8("action_manufacturers"));
	action_manufacturers->setEnabled(true);
	menuForms->addAction(action_manufacturers);
	action_picture_add = new QAction(MainWindow);
	action_picture_add->setObjectName(QString::fromUtf8("action_picture_add"));
	action_picture_add->setEnabled(true);
	menuForms->addAction(action_picture_add);
	action_picture_edit = new QAction(MainWindow);
	action_picture_edit->setObjectName(QString::fromUtf8("action_picture_edit"));
	action_picture_edit->setEnabled(true);
	menuForms->addAction(action_picture_edit);
	action_picture_info = new QAction(MainWindow);
	action_picture_info->setObjectName(QString::fromUtf8("action_picture_info"));
	action_picture_info->setEnabled(true);
	menuForms->addAction(action_picture_info);
	action_pictures = new QAction(MainWindow);
	action_pictures->setObjectName(QString::fromUtf8("action_pictures"));
	action_pictures->setEnabled(true);
	menuForms->addAction(action_pictures);
	action_recipe_add = new QAction(MainWindow);
	action_recipe_add->setObjectName(QString::fromUtf8("action_recipe_add"));
	action_recipe_add->setEnabled(true);
	menuForms->addAction(action_recipe_add);
	action_recipe_content_add = new QAction(MainWindow);
	action_recipe_content_add->setObjectName(QString::fromUtf8("action_recipe_content_add"));
	action_recipe_content_add->setEnabled(true);
	menuForms->addAction(action_recipe_content_add);
	action_recipe_content_edit = new QAction(MainWindow);
	action_recipe_content_edit->setObjectName(QString::fromUtf8("action_recipe_content_edit"));
	action_recipe_content_edit->setEnabled(true);
	menuForms->addAction(action_recipe_content_edit);
	action_recipe_content = new QAction(MainWindow);
	action_recipe_content->setObjectName(QString::fromUtf8("action_recipe_content"));
	action_recipe_content->setEnabled(true);
	menuForms->addAction(action_recipe_content);
	action_recipe_edit = new QAction(MainWindow);
	action_recipe_edit->setObjectName(QString::fromUtf8("action_recipe_edit"));
	action_recipe_edit->setEnabled(true);
	menuForms->addAction(action_recipe_edit);
	action_recipes = new QAction(MainWindow);
	action_recipes->setObjectName(QString::fromUtf8("action_recipes"));
	action_recipes->setEnabled(true);
	menuForms->addAction(action_recipes);
	action_tag_add = new QAction(MainWindow);
	action_tag_add->setObjectName(QString::fromUtf8("action_tag_add"));
	action_tag_add->setEnabled(true);
	menuForms->addAction(action_tag_add);
	action_tag_edit = new QAction(MainWindow);
	action_tag_edit->setObjectName(QString::fromUtf8("action_tag_edit"));
	action_tag_edit->setEnabled(true);
	menuForms->addAction(action_tag_edit);
	action_tags = new QAction(MainWindow);
	action_tags->setObjectName(QString::fromUtf8("action_tags"));
	action_tags->setEnabled(true);
	menuForms->addAction(action_tags);
	
        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuForms->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        //~ menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionIndex);
        menuHelp->addAction(actionContextHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionTechnicalSupport);
        menuHelp->addAction(actionReportBug);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheckForUpdates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelectAll);
        menuWindow->addAction(actionReload);
        menuWindow->addSeparator();
        menuWindow->addAction(actionClose);
        menuWindow->addAction(actionCloseAll);
        menuWindow->addSeparator();
        menuWindow->addAction(actionTile);
        menuWindow->addAction(actionCascade);
        menuWindow->addSeparator();
        menuWindow->addAction(actionNextWindow);
        menuWindow->addAction(actionPreviousWindow);
        menuFile->addAction(actionLogin);
        menuFile->addAction(actionLogout);
        menuFile->addAction(actionManageServers);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionRestart);
        menuFile->addAction(actionExit);
        //~ menuSettings->addAction(actionPreferences);
        //~ menuSettings->addAction(menuLanguages->menuAction());
        //~ menuLanguages->addAction(actionTest);
        toolBarConnection->addAction(actionLogin);
        toolBarConnection->addAction(actionLogout);
        toolBarEdit->addAction(actionUndo);
        toolBarEdit->addAction(actionRedo);
        toolBarEdit->addAction(actionCut);
        toolBarEdit->addAction(actionCopy);
        toolBarEdit->addAction(actionPaste);
        toolBarEdit->addAction(actionDelete);
        toolBarEdit->addSeparator();
        toolBarWindow->addAction(actionReload);
        toolBarWindow->addAction(actionPreviousWindow);
        toolBarWindow->addAction(actionNextWindow);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Wolframe Qt Client", 0, QApplication::UnicodeUTF8));
        MainWindow->setProperty("themeAuthor", QVariant(QApplication::translate("MainWindow", "Andreas Baumann", 0, QApplication::UnicodeUTF8)));
        MainWindow->setProperty("themeBaseStyle", QVariant(QApplication::translate("MainWindow", "plastique", 0, QApplication::UnicodeUTF8)));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit the Wolframe client", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About Wolframe Client", 0, QApplication::UnicodeUTF8));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About &Qt", 0, QApplication::UnicodeUTF8));
        actionDebugTerminal->setText(QApplication::translate("MainWindow", "&Debug Terminal", 0, QApplication::UnicodeUTF8));
        actionDebugTerminal->setIconText(QApplication::translate("MainWindow", "Debug Terminal", 0, QApplication::UnicodeUTF8));
        actionDebugTerminal->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("MainWindow", "&Preferences", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPreferences->setToolTip(QApplication::translate("MainWindow", "Configure application preferences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionManageStorage->setText(QApplication::translate("MainWindow", "&Manage Storage", 0, QApplication::UnicodeUTF8));
        actionRestart->setText(QApplication::translate("MainWindow", "&Restart", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRestart->setToolTip(QApplication::translate("MainWindow", "Restart the Wolframe client", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionContents->setText(QApplication::translate("MainWindow", "Contents", 0, QApplication::UnicodeUTF8));
        actionIndex->setText(QApplication::translate("MainWindow", "Index", 0, QApplication::UnicodeUTF8));
        actionContextHelp->setText(QApplication::translate("MainWindow", "Context Help", 0, QApplication::UnicodeUTF8));
        actionTechnicalSupport->setText(QApplication::translate("MainWindow", "Technical Support", 0, QApplication::UnicodeUTF8));
        actionReportBug->setText(QApplication::translate("MainWindow", "Report Bug...", 0, QApplication::UnicodeUTF8));
        actionCheckForUpdates->setText(QApplication::translate("MainWindow", "Check for Updates...", 0, QApplication::UnicodeUTF8));
        actionReload->setText(QApplication::translate("MainWindow", "&Reload Window", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReload->setToolTip(QApplication::translate("MainWindow", "Reload the active window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("MainWindow", "&Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("MainWindow", "Close the active window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCloseAll->setText(QApplication::translate("MainWindow", "Close &all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCloseAll->setToolTip(QApplication::translate("MainWindow", "Close all the windows", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTile->setText(QApplication::translate("MainWindow", "&Tile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTile->setToolTip(QApplication::translate("MainWindow", "Tile the windows", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCascade->setText(QApplication::translate("MainWindow", "&Cascade", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCascade->setToolTip(QApplication::translate("MainWindow", "Cascade the windows", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNextWindow->setText(QApplication::translate("MainWindow", "Ne&xt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNextWindow->setToolTip(QApplication::translate("MainWindow", "Move the focus to the next window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPreviousWindow->setText(QApplication::translate("MainWindow", "Pre&vious", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPreviousWindow->setToolTip(QApplication::translate("MainWindow", "Move the focus to the previous window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUndo->setText(QApplication::translate("MainWindow", "&Undo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("MainWindow", "Undo the last action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRedo->setText(QApplication::translate("MainWindow", "&Redo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("MainWindow", "Redo the last undo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("MainWindow", "Cut the current selection's contents to the clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MainWindow", "Paste the clipboard's contents into the current selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "Delete the current selection's contents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSelectAll->setText(QApplication::translate("MainWindow", "Select &All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSelectAll->setToolTip(QApplication::translate("MainWindow", "Select all items in the current window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow", "Copy the current selection's contents to the clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLogin->setText(QApplication::translate("MainWindow", "&Login", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLogin->setToolTip(QApplication::translate("MainWindow", "Login to a Wolframe server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLogout->setText(QApplication::translate("MainWindow", "L&ogout", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLogout->setToolTip(QApplication::translate("MainWindow", "Logout from the Wolframe server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrint->setText(QApplication::translate("MainWindow", "&Print", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("MainWindow", "Print current document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionManageServers->setText(QApplication::translate("MainWindow", "&Manage servers...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionManageServers->setToolTip(QApplication::translate("MainWindow", "Manage the list of Wolframe servers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTest->setText(QApplication::translate("MainWindow", "&English", 0, QApplication::UnicodeUTF8));
        actionTest->setIconText(QApplication::translate("MainWindow", "English", 0, QApplication::UnicodeUTF8));
        action_Close_form->setText(QApplication::translate("MainWindow", "&Close form", 0, QApplication::UnicodeUTF8));
        action_Close_form->setProperty("defaultShortcut", QVariant(QApplication::translate("MainWindow", "QKeySequence::Close", 0, QApplication::UnicodeUTF8)));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuWindow->setTitle(QApplication::translate("MainWindow", "&Window", 0, QApplication::UnicodeUTF8));
        menuForms->setTitle(QApplication::translate("MainWindow", "F&orms", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        //~ menuSettings->setTitle(QApplication::translate("MainWindow", "&Settings", 0, QApplication::UnicodeUTF8));
        //~ menuLanguages->setTitle(QApplication::translate("MainWindow", "&Language", 0, QApplication::UnicodeUTF8));
        toolBarConnection->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
        toolBarEdit->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBarWindow->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        
        action_categories_features_add->setText(QApplication::translate("MainWindow", "action_categories_features_add", 0, QApplication::UnicodeUTF8));
        action_categories_features_edit->setText(QApplication::translate("MainWindow", "action_categories_features_edit", 0, QApplication::UnicodeUTF8));
        action_categories_features->setText(QApplication::translate("MainWindow", "action_categories_features", 0, QApplication::UnicodeUTF8));
        action_categories->setText(QApplication::translate("MainWindow", "action_categories", 0, QApplication::UnicodeUTF8));
        action_category_add->setText(QApplication::translate("MainWindow", "action_category_add", 0, QApplication::UnicodeUTF8));
        action_category_edit->setText(QApplication::translate("MainWindow", "action_category_edit", 0, QApplication::UnicodeUTF8));
        action_component_add->setText(QApplication::translate("MainWindow", "action_component_add", 0, QApplication::UnicodeUTF8));
        action_component_edit->setText(QApplication::translate("MainWindow", "action_component_edit", 0, QApplication::UnicodeUTF8));
        action_components_features_add->setText(QApplication::translate("MainWindow", "action_components_features_add", 0, QApplication::UnicodeUTF8));
        action_components_features_edit->setText(QApplication::translate("MainWindow", "action_components_features_edit", 0, QApplication::UnicodeUTF8));
        action_components_features->setText(QApplication::translate("MainWindow", "action_components_features", 0, QApplication::UnicodeUTF8));
        action_components->setText(QApplication::translate("MainWindow", "action_components", 0, QApplication::UnicodeUTF8));
        action_configuration_add->setText(QApplication::translate("MainWindow", "action_configuration_add", 0, QApplication::UnicodeUTF8));
        action_configuration_component_add->setText(QApplication::translate("MainWindow", "action_configuration_component_add", 0, QApplication::UnicodeUTF8));
        action_configuration_component_edit->setText(QApplication::translate("MainWindow", "action_configuration_component_edit", 0, QApplication::UnicodeUTF8));
        action_configuration_components->setText(QApplication::translate("MainWindow", "action_configuration_components", 0, QApplication::UnicodeUTF8));
        action_configuration_edit->setText(QApplication::translate("MainWindow", "action_configuration_edit", 0, QApplication::UnicodeUTF8));
        action_configurations->setText(QApplication::translate("MainWindow", "action_configurations", 0, QApplication::UnicodeUTF8));
        action_configuration_subconfig_add->setText(QApplication::translate("MainWindow", "action_configuration_subconfig_add", 0, QApplication::UnicodeUTF8));
        action_configuration_subconfig_edit->setText(QApplication::translate("MainWindow", "action_configuration_subconfig_edit", 0, QApplication::UnicodeUTF8));
        action_configuration_subconfigs->setText(QApplication::translate("MainWindow", "action_configuration_subconfigs", 0, QApplication::UnicodeUTF8));
        action_feature_add->setText(QApplication::translate("MainWindow", "action_feature_add", 0, QApplication::UnicodeUTF8));
        action_feature_edit->setText(QApplication::translate("MainWindow", "action_feature_edit", 0, QApplication::UnicodeUTF8));
        action_features->setText(QApplication::translate("MainWindow", "action_features", 0, QApplication::UnicodeUTF8));
        action_manufacturer_add->setText(QApplication::translate("MainWindow", "action_manufacturer_add", 0, QApplication::UnicodeUTF8));
        action_manufacturer_edit->setText(QApplication::translate("MainWindow", "action_manufacturer_edit", 0, QApplication::UnicodeUTF8));
        action_manufacturers->setText(QApplication::translate("MainWindow", "action_manufacturers", 0, QApplication::UnicodeUTF8));
        action_picture_add->setText(QApplication::translate("MainWindow", "action_picture_add", 0, QApplication::UnicodeUTF8));
        action_picture_edit->setText(QApplication::translate("MainWindow", "action_picture_edit", 0, QApplication::UnicodeUTF8));
        action_picture_info->setText(QApplication::translate("MainWindow", "action_picture_info", 0, QApplication::UnicodeUTF8));
        action_pictures->setText(QApplication::translate("MainWindow", "action_pictures", 0, QApplication::UnicodeUTF8));
        action_recipe_add->setText(QApplication::translate("MainWindow", "action_recipe_add", 0, QApplication::UnicodeUTF8));
        action_recipe_content_add->setText(QApplication::translate("MainWindow", "action_recipe_content_add", 0, QApplication::UnicodeUTF8));
        action_recipe_content_edit->setText(QApplication::translate("MainWindow", "action_recipe_content_edit", 0, QApplication::UnicodeUTF8));
        action_recipe_content->setText(QApplication::translate("MainWindow", "action_recipe_content", 0, QApplication::UnicodeUTF8));
        action_recipe_edit->setText(QApplication::translate("MainWindow", "action_recipe_edit", 0, QApplication::UnicodeUTF8));
        action_recipes->setText(QApplication::translate("MainWindow", "action_recipes", 0, QApplication::UnicodeUTF8));
        action_tag_add->setText(QApplication::translate("MainWindow", "action_tag_add", 0, QApplication::UnicodeUTF8));
        action_tag_edit->setText(QApplication::translate("MainWindow", "action_tag_edit", 0, QApplication::UnicodeUTF8));
        action_tags->setText(QApplication::translate("MainWindow", "action_tags", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
