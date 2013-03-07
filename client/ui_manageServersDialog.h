/********************************************************************************
** Form generated from reading UI file 'manageServersDialog.ui'
**
** Created: Thu Mar 7 07:26:53 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGESERVERSDIALOG_H
#define UI_MANAGESERVERSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManageServersDialog
{
public:
    QLabel *connectionLbl;
    QPushButton *editConBttn;
    QPushButton *newConnBttn;
    QPushButton *delConnBttn;
    QListWidget *connectionList;
    QLabel *parametersLbl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ManageServersDialog)
    {
        if (ManageServersDialog->objectName().isEmpty())
            ManageServersDialog->setObjectName(QString::fromUtf8("ManageServersDialog"));
        ManageServersDialog->setWindowModality(Qt::ApplicationModal);
        ManageServersDialog->resize(421, 279);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/world-setup.png"), QSize(), QIcon::Normal, QIcon::Off);
        ManageServersDialog->setWindowIcon(icon);
        ManageServersDialog->setModal(true);
        connectionLbl = new QLabel(ManageServersDialog);
        connectionLbl->setObjectName(QString::fromUtf8("connectionLbl"));
        connectionLbl->setGeometry(QRect(10, 10, 221, 16));
        editConBttn = new QPushButton(ManageServersDialog);
        editConBttn->setObjectName(QString::fromUtf8("editConBttn"));
        editConBttn->setGeometry(QRect(235, 160, 176, 31));
        newConnBttn = new QPushButton(ManageServersDialog);
        newConnBttn->setObjectName(QString::fromUtf8("newConnBttn"));
        newConnBttn->setGeometry(QRect(235, 120, 176, 31));
        delConnBttn = new QPushButton(ManageServersDialog);
        delConnBttn->setObjectName(QString::fromUtf8("delConnBttn"));
        delConnBttn->setGeometry(QRect(235, 200, 176, 31));
        connectionList = new QListWidget(ManageServersDialog);
        connectionList->setObjectName(QString::fromUtf8("connectionList"));
        connectionList->setGeometry(QRect(10, 30, 211, 236));
        connectionList->setSortingEnabled(true);
        parametersLbl = new QLabel(ManageServersDialog);
        parametersLbl->setObjectName(QString::fromUtf8("parametersLbl"));
        parametersLbl->setGeometry(QRect(230, 20, 181, 91));
        parametersLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        buttonBox = new QDialogButtonBox(ManageServersDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 240, 401, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        QWidget::setTabOrder(connectionList, newConnBttn);
        QWidget::setTabOrder(newConnBttn, editConBttn);
        QWidget::setTabOrder(editConBttn, delConnBttn);

        retranslateUi(ManageServersDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ManageServersDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ManageServersDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ManageServersDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageServersDialog)
    {
        ManageServersDialog->setWindowTitle(QApplication::translate("ManageServersDialog", "Manage Connections", 0, QApplication::UnicodeUTF8));
        connectionLbl->setText(QApplication::translate("ManageServersDialog", "Configured Connections:", 0, QApplication::UnicodeUTF8));
        editConBttn->setText(QApplication::translate("ManageServersDialog", "&Edit Connection ...", 0, QApplication::UnicodeUTF8));
        newConnBttn->setText(QApplication::translate("ManageServersDialog", "&New Connection ...", 0, QApplication::UnicodeUTF8));
        delConnBttn->setText(QApplication::translate("ManageServersDialog", "&Delete Connection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        connectionList->setStatusTip(QApplication::translate("ManageServersDialog", "Connect to the selected server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        parametersLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ManageServersDialog: public Ui_ManageServersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGESERVERSDIALOG_H
