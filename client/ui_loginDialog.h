/********************************************************************************
** Form generated from reading UI file 'loginDialog.ui'
**
** Created: Thu Mar 7 16:32:07 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *userLabel;
    QLabel *passwdLabel;
    QLabel *serverLabel;
    QLineEdit *userInput;
    QLineEdit *passwdInput;
    QComboBox *serverCombo;
    QToolButton *serverManageButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(361, 158);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(LoginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 120, 341, 32));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        userLabel = new QLabel(LoginDialog);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setGeometry(QRect(10, 20, 81, 21));
        userLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        passwdLabel = new QLabel(LoginDialog);
        passwdLabel->setObjectName(QString::fromUtf8("passwdLabel"));
        passwdLabel->setGeometry(QRect(10, 50, 81, 21));
        passwdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serverLabel = new QLabel(LoginDialog);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));
        serverLabel->setGeometry(QRect(10, 80, 81, 21));
        serverLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        userInput = new QLineEdit(LoginDialog);
        userInput->setObjectName(QString::fromUtf8("userInput"));
        userInput->setGeometry(QRect(100, 20, 251, 25));
        passwdInput = new QLineEdit(LoginDialog);
        passwdInput->setObjectName(QString::fromUtf8("passwdInput"));
        passwdInput->setGeometry(QRect(100, 50, 251, 25));
        passwdInput->setEchoMode(QLineEdit::Password);
        serverCombo = new QComboBox(LoginDialog);
        serverCombo->setObjectName(QString::fromUtf8("serverCombo"));
        serverCombo->setGeometry(QRect(100, 80, 221, 26));
        serverManageButton = new QToolButton(LoginDialog);
        serverManageButton->setObjectName(QString::fromUtf8("serverManageButton"));
        serverManageButton->setGeometry(QRect(320, 80, 31, 26));

        retranslateUi(LoginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Login to Server", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("LoginDialog", "Username:", 0, QApplication::UnicodeUTF8));
        passwdLabel->setText(QApplication::translate("LoginDialog", "Password:", 0, QApplication::UnicodeUTF8));
        serverLabel->setText(QApplication::translate("LoginDialog", "Server:", 0, QApplication::UnicodeUTF8));
        serverManageButton->setText(QApplication::translate("LoginDialog", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
