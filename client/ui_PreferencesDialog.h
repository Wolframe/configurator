/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created: Thu Mar 7 07:26:53 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(600, 685);
        gridLayout = new QGridLayout(PreferencesDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(PreferencesDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(148, 0));
        listWidget->setMaximumSize(QSize(148, 16777215));
        listWidget->setIconSize(QSize(32, 32));
        listWidget->setSpacing(12);
        listWidget->setViewMode(QListView::IconMode);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(PreferencesDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::Box);
        stackedWidget->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
