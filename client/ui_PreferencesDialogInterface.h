/********************************************************************************
** Form generated from reading UI file 'PreferencesDialogInterface.ui'
**
** Created: Thu Mar 7 07:26:53 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOGINTERFACE_H
#define UI_PREFERENCESDIALOGINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialogInterface
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QRadioButton *systemLocale;
    QRadioButton *manualLocale;
    QComboBox *locales;
    QLabel *label;
    //QCheckBox *mdi;
    QCheckBox *rememberLogin;
    QCheckBox *saveRestoreState;
    QCheckBox *errorsMessageBoxes;

    void setupUi(QWidget *PreferencesDialogInterface)
    {
        if (PreferencesDialogInterface->objectName().isEmpty())
            PreferencesDialogInterface->setObjectName(QString::fromUtf8("PreferencesDialogInterface"));
        PreferencesDialogInterface->resize(464, 314);
        gridLayout = new QGridLayout(PreferencesDialogInterface);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(PreferencesDialogInterface);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        systemLocale = new QRadioButton(groupBox);
        systemLocale->setObjectName(QString::fromUtf8("systemLocale"));

        gridLayout_9->addWidget(systemLocale, 0, 0, 1, 1);

        manualLocale = new QRadioButton(groupBox);
        manualLocale->setObjectName(QString::fromUtf8("manualLocale"));

        gridLayout_9->addWidget(manualLocale, 1, 0, 1, 1);

        locales = new QComboBox(groupBox);
        locales->setObjectName(QString::fromUtf8("locales"));

        gridLayout_9->addWidget(locales, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 3, 0, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        //~ mdi = new QCheckBox(groupBox_3);
        //~ mdi->setObjectName(QString::fromUtf8("mdi"));
//~ 
        //~ gridLayout_3->addWidget(mdi, 1, 0, 1, 1);

        rememberLogin = new QCheckBox(groupBox_3);
        rememberLogin->setObjectName(QString::fromUtf8("rememberLogin"));

        gridLayout_3->addWidget(rememberLogin, 4, 0, 1, 1);

        saveRestoreState = new QCheckBox(groupBox_3);
        saveRestoreState->setObjectName(QString::fromUtf8("saveRestoreState"));

        gridLayout_3->addWidget(saveRestoreState, 5, 0, 1, 1);

        errorsMessageBoxes = new QCheckBox(groupBox_3);
        errorsMessageBoxes->setObjectName(QString::fromUtf8("errorsMessageBoxes"));

        gridLayout_3->addWidget(errorsMessageBoxes, 6, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        //~ QWidget::setTabOrder(mdi, systemLocale);
        QWidget::setTabOrder(systemLocale, manualLocale);
        QWidget::setTabOrder(manualLocale, locales);
        QWidget::setTabOrder(locales, rememberLogin);
        QWidget::setTabOrder(rememberLogin, saveRestoreState);

        retranslateUi(PreferencesDialogInterface);

        QMetaObject::connectSlotsByName(PreferencesDialogInterface);
    } // setupUi

    void retranslateUi(QWidget *PreferencesDialogInterface)
    {
        groupBox_3->setTitle(QApplication::translate("PreferencesDialogInterface", "Interface Preferences", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PreferencesDialogInterface", "Locale", 0, QApplication::UnicodeUTF8));
        systemLocale->setText(QApplication::translate("PreferencesDialogInterface", "&System locale (as set by the operating system environment)", 0, QApplication::UnicodeUTF8));
        manualLocale->setText(QApplication::translate("PreferencesDialogInterface", "&Manually set locale to:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PreferencesDialogInterface", "Set the language and the visual appearance of the client.", 0, QApplication::UnicodeUTF8));
        //~ mdi->setText(QApplication::translate("PreferencesDialogInterface", "&MDI interface", 0, QApplication::UnicodeUTF8));
        rememberLogin->setText(QApplication::translate("PreferencesDialogInterface", "&Remember login (server and username, not credentials)", 0, QApplication::UnicodeUTF8));
        saveRestoreState->setText(QApplication::translate("PreferencesDialogInterface", "S&ave and restore state, position and size of (sub)windows", 0, QApplication::UnicodeUTF8));
        errorsMessageBoxes->setText(QApplication::translate("PreferencesDialogInterface", "&Show errors as message boxes (default: in status bar)", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(PreferencesDialogInterface);
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialogInterface: public Ui_PreferencesDialogInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOGINTERFACE_H
