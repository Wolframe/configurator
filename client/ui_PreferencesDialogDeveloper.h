/********************************************************************************
** Form generated from reading UI file 'PreferencesDialogDeveloper.ui'
**
** Created: Thu Mar 7 07:26:53 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOGDEVELOPER_H
#define UI_PREFERENCESDIALOGDEVELOPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "FileChooser.hpp"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialogDeveloper
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *developer;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QRadioButton *uiLoadModeLocalFile;
    QRadioButton *uiLoadModeNetwork;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    FileChooser *uiFormTranslationsDir;
    QGridLayout *gridLayout_6;
    FileChooser *uiFormsDir;
    QLabel *label_4;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    FileChooser *uiFormResourcesDir;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *dataLoadModeLocalFile;
    QRadioButton *dataLoadModeNetwork;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    FileChooser *dataLoaderDir;
    QLabel *label_2;
    QCheckBox *debug;
    QCheckBox *autoLogin;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PreferencesDialogDeveloper)
    {
        if (PreferencesDialogDeveloper->objectName().isEmpty())
            PreferencesDialogDeveloper->setObjectName(QString::fromUtf8("PreferencesDialogDeveloper"));
        PreferencesDialogDeveloper->resize(508, 739);
        gridLayout = new QGridLayout(PreferencesDialogDeveloper);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        developer = new QGroupBox(PreferencesDialogDeveloper);
        developer->setObjectName(QString::fromUtf8("developer"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        developer->setFont(font);
        developer->setCheckable(true);
        verticalLayout = new QVBoxLayout(developer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(developer);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        uiLoadModeLocalFile = new QRadioButton(groupBox);
        uiLoadModeLocalFile->setObjectName(QString::fromUtf8("uiLoadModeLocalFile"));

        gridLayout_9->addWidget(uiLoadModeLocalFile, 0, 0, 1, 1);

        uiLoadModeNetwork = new QRadioButton(groupBox);
        uiLoadModeNetwork->setObjectName(QString::fromUtf8("uiLoadModeNetwork"));

        gridLayout_9->addWidget(uiLoadModeNetwork, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 0, 0, 1, 1);

        uiFormTranslationsDir = new FileChooser(groupBox_3);
        uiFormTranslationsDir->setObjectName(QString::fromUtf8("uiFormTranslationsDir"));
        uiFormTranslationsDir->setSelectionMode(FileChooser::SelectExistingDir);

        gridLayout_7->addWidget(uiFormTranslationsDir, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_7, 3, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        uiFormsDir = new FileChooser(groupBox_3);
        uiFormsDir->setObjectName(QString::fromUtf8("uiFormsDir"));
        uiFormsDir->setSelectionMode(FileChooser::SelectExistingDir);

        gridLayout_6->addWidget(uiFormsDir, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_6, 2, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);

        uiFormResourcesDir = new FileChooser(groupBox_3);
        uiFormResourcesDir->setObjectName(QString::fromUtf8("uiFormResourcesDir"));
        uiFormResourcesDir->setSelectionMode(FileChooser::SelectExistingDir);

        gridLayout_8->addWidget(uiFormResourcesDir, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_8, 4, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(developer);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dataLoadModeLocalFile = new QRadioButton(groupBox_2);
        dataLoadModeLocalFile->setObjectName(QString::fromUtf8("dataLoadModeLocalFile"));

        gridLayout_2->addWidget(dataLoadModeLocalFile, 0, 0, 1, 1);

        dataLoadModeNetwork = new QRadioButton(groupBox_2);
        dataLoadModeNetwork->setObjectName(QString::fromUtf8("dataLoadModeNetwork"));

        gridLayout_2->addWidget(dataLoadModeNetwork, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        dataLoaderDir = new FileChooser(groupBox_4);
        dataLoaderDir->setObjectName(QString::fromUtf8("dataLoaderDir"));
        dataLoaderDir->setSelectionMode(FileChooser::SelectExistingDir);

        gridLayout_4->addWidget(dataLoaderDir, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        debug = new QCheckBox(developer);
        debug->setObjectName(QString::fromUtf8("debug"));

        verticalLayout->addWidget(debug);

        autoLogin = new QCheckBox(developer);
        autoLogin->setObjectName(QString::fromUtf8("autoLogin"));

        verticalLayout->addWidget(autoLogin);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addWidget(developer, 0, 0, 1, 1);

        QWidget::setTabOrder(developer, uiLoadModeLocalFile);
        QWidget::setTabOrder(uiLoadModeLocalFile, uiLoadModeNetwork);
        QWidget::setTabOrder(uiLoadModeNetwork, uiFormsDir);
        QWidget::setTabOrder(uiFormsDir, uiFormTranslationsDir);
        QWidget::setTabOrder(uiFormTranslationsDir, uiFormResourcesDir);
        QWidget::setTabOrder(uiFormResourcesDir, dataLoadModeLocalFile);
        QWidget::setTabOrder(dataLoadModeLocalFile, dataLoadModeNetwork);
        QWidget::setTabOrder(dataLoadModeNetwork, dataLoaderDir);
        QWidget::setTabOrder(dataLoaderDir, debug);

        retranslateUi(PreferencesDialogDeveloper);

        QMetaObject::connectSlotsByName(PreferencesDialogDeveloper);
    } // setupUi

    void retranslateUi(QWidget *PreferencesDialogDeveloper)
    {
        developer->setTitle(QApplication::translate("PreferencesDialogDeveloper", "Developer Mode", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("PreferencesDialogDeveloper", "User interface", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PreferencesDialogDeveloper", "Where to load user interface XML (ui files), translations and resources from. Productive systems fetch them from the server.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PreferencesDialogDeveloper", "Load mode", 0, QApplication::UnicodeUTF8));
        uiLoadModeLocalFile->setText(QApplication::translate("PreferencesDialogDeveloper", "Local file", 0, QApplication::UnicodeUTF8));
        uiLoadModeNetwork->setText(QApplication::translate("PreferencesDialogDeveloper", "Network", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PreferencesDialogDeveloper", "Translations directory:", 0, QApplication::UnicodeUTF8));
        uiFormTranslationsDir->setTitle(QApplication::translate("PreferencesDialogDeveloper", "Select a directory holding UI form translations", 0, QApplication::UnicodeUTF8));
        uiFormsDir->setTitle(QApplication::translate("PreferencesDialogDeveloper", "Select a directory holding UI forms", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PreferencesDialogDeveloper", "Form directory:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PreferencesDialogDeveloper", "Resources directory:", 0, QApplication::UnicodeUTF8));
        uiFormResourcesDir->setTitle(QApplication::translate("PreferencesDialogDeveloper", "Select a directory holding UI form resources", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("PreferencesDialogDeveloper", "&Data Processing", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PreferencesDialogDeveloper", "Load mode", 0, QApplication::UnicodeUTF8));
        dataLoadModeLocalFile->setText(QApplication::translate("PreferencesDialogDeveloper", "Local file", 0, QApplication::UnicodeUTF8));
        dataLoadModeNetwork->setText(QApplication::translate("PreferencesDialogDeveloper", "Network", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PreferencesDialogDeveloper", "Data directory:", 0, QApplication::UnicodeUTF8));
        dataLoaderDir->setTitle(QApplication::translate("PreferencesDialogDeveloper", "Select a directory which contains local XML data", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PreferencesDialogDeveloper", "Usually requests and answers containing data forms are sent between client and server. For testing the UI some mock data can retrieved from the local file system.", 0, QApplication::UnicodeUTF8));
        debug->setText(QApplication::translate("PreferencesDialogDeveloper", "Enable verbose &debug output", 0, QApplication::UnicodeUTF8));
        autoLogin->setText(QApplication::translate("PreferencesDialogDeveloper", "Login &automatically when starting the client", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(PreferencesDialogDeveloper);
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialogDeveloper: public Ui_PreferencesDialogDeveloper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOGDEVELOPER_H
