/********************************************************************************
** Form generated from reading UI file 'serverDefinitionDialogNoSSL.ui'
**
** Created: Thu Mar 7 16:32:07 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERDEFINITIONDIALOGNOSSL_H
#define UI_SERVERDEFINITIONDIALOGNOSSL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ServerDefinitionDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *nameLbl;
    QLabel *hostLbl;
    QLabel *portLbl;
    QSpinBox *portSpinBox;
    QLineEdit *nameEdit;
    QLineEdit *hostEdit;
    QPushButton *testBttn;
    QSpinBox *timeoutSpinBox;
    QLabel *timeoutLbl;

    void setupUi(QDialog *ServerDefinitionDialog)
    {
        if (ServerDefinitionDialog->objectName().isEmpty())
            ServerDefinitionDialog->setObjectName(QString::fromUtf8("ServerDefinitionDialog"));
        ServerDefinitionDialog->setWindowModality(Qt::WindowModal);
        ServerDefinitionDialog->resize(422, 191);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/world.png"), QSize(), QIcon::Normal, QIcon::Off);
        ServerDefinitionDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(ServerDefinitionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 150, 401, 32));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nameLbl = new QLabel(ServerDefinitionDialog);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        nameLbl->setGeometry(QRect(10, 20, 131, 21));
        nameLbl->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        hostLbl = new QLabel(ServerDefinitionDialog);
        hostLbl->setObjectName(QString::fromUtf8("hostLbl"));
        hostLbl->setGeometry(QRect(20, 50, 121, 21));
        hostLbl->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        portLbl = new QLabel(ServerDefinitionDialog);
        portLbl->setObjectName(QString::fromUtf8("portLbl"));
        portLbl->setGeometry(QRect(40, 80, 101, 21));
        portLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        portSpinBox = new QSpinBox(ServerDefinitionDialog);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setGeometry(QRect(150, 80, 72, 27));
        portSpinBox->setMinimum(1);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(7661);
        nameEdit = new QLineEdit(ServerDefinitionDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(150, 20, 261, 27));
        hostEdit = new QLineEdit(ServerDefinitionDialog);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));
        hostEdit->setGeometry(QRect(150, 50, 261, 27));
        testBttn = new QPushButton(ServerDefinitionDialog);
        testBttn->setObjectName(QString::fromUtf8("testBttn"));
        testBttn->setGeometry(QRect(10, 150, 141, 27));
        timeoutSpinBox = new QSpinBox(ServerDefinitionDialog);
        timeoutSpinBox->setObjectName(QString::fromUtf8("timeoutSpinBox"));
        timeoutSpinBox->setGeometry(QRect(150, 110, 81, 27));
        timeoutSpinBox->setValue(15);
        timeoutLbl = new QLabel(ServerDefinitionDialog);
        timeoutLbl->setObjectName(QString::fromUtf8("timeoutLbl"));
        timeoutLbl->setGeometry(QRect(10, 110, 131, 21));
        timeoutLbl->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        QWidget::setTabOrder(nameEdit, hostEdit);
        QWidget::setTabOrder(hostEdit, portSpinBox);
        QWidget::setTabOrder(portSpinBox, timeoutSpinBox);
        QWidget::setTabOrder(timeoutSpinBox, buttonBox);
        QWidget::setTabOrder(buttonBox, testBttn);

        retranslateUi(ServerDefinitionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ServerDefinitionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ServerDefinitionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ServerDefinitionDialog);
    } // setupUi

    void retranslateUi(QDialog *ServerDefinitionDialog)
    {
        ServerDefinitionDialog->setWindowTitle(QApplication::translate("ServerDefinitionDialog", "Connection Parameters", 0, QApplication::UnicodeUTF8));
        nameLbl->setText(QApplication::translate("ServerDefinitionDialog", "Connection name :", 0, QApplication::UnicodeUTF8));
        hostLbl->setText(QApplication::translate("ServerDefinitionDialog", "Server name / IP :", 0, QApplication::UnicodeUTF8));
        portLbl->setText(QApplication::translate("ServerDefinitionDialog", "Server port :", 0, QApplication::UnicodeUTF8));
        testBttn->setText(QApplication::translate("ServerDefinitionDialog", "&Test Connection", 0, QApplication::UnicodeUTF8));
        timeoutSpinBox->setSuffix(QApplication::translate("ServerDefinitionDialog", " sec.", 0, QApplication::UnicodeUTF8));
        timeoutLbl->setText(QApplication::translate("ServerDefinitionDialog", "Message timeout :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ServerDefinitionDialog: public Ui_ServerDefinitionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERDEFINITIONDIALOGNOSSL_H
