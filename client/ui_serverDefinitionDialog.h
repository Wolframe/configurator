/********************************************************************************
** Form generated from reading UI file 'serverDefinitionDialog.ui'
**
** Created: Thu Mar 7 07:26:53 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERDEFINITIONDIALOG_H
#define UI_SERVERDEFINITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>

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
    QFrame *SSLframe;
    QCheckBox *SSLcheck;
    QFrame *SSLclientFrame;
    QLabel *certificateLbl;
    QLineEdit *certEdit;
    QLabel *keyLbl;
    QLineEdit *keyEdit;
    QToolButton *certFileBttn;
    QToolButton *keyFileBttn;
    QCheckBox *clientCertCheck;
    QFrame *SSLverifyFrame;
    QCheckBox *SSLverifyCheck;
    QLabel *CAbundleLbl;
    QLineEdit *CAbundleEdit;
    QToolButton *CAbundleFileBttn;
    QSpinBox *timeoutSpinBox;
    QLabel *timeoutLbl;

    void setupUi(QDialog *ServerDefinitionDialog)
    {
        if (ServerDefinitionDialog->objectName().isEmpty())
            ServerDefinitionDialog->setObjectName(QString::fromUtf8("ServerDefinitionDialog"));
        ServerDefinitionDialog->setWindowModality(Qt::WindowModal);
        ServerDefinitionDialog->resize(422, 419);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/world.png"), QSize(), QIcon::Normal, QIcon::Off);
        ServerDefinitionDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(ServerDefinitionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 380, 401, 32));
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
        testBttn->setGeometry(QRect(10, 380, 141, 27));
        SSLframe = new QFrame(ServerDefinitionDialog);
        SSLframe->setObjectName(QString::fromUtf8("SSLframe"));
        SSLframe->setGeometry(QRect(10, 150, 401, 221));
        SSLframe->setFrameShape(QFrame::StyledPanel);
        SSLframe->setFrameShadow(QFrame::Raised);
        SSLcheck = new QCheckBox(SSLframe);
        SSLcheck->setObjectName(QString::fromUtf8("SSLcheck"));
        SSLcheck->setGeometry(QRect(10, 0, 141, 31));
        SSLclientFrame = new QFrame(SSLframe);
        SSLclientFrame->setObjectName(QString::fromUtf8("SSLclientFrame"));
        SSLclientFrame->setGeometry(QRect(10, 30, 381, 101));
        SSLclientFrame->setFrameShape(QFrame::StyledPanel);
        SSLclientFrame->setFrameShadow(QFrame::Sunken);
        certificateLbl = new QLabel(SSLclientFrame);
        certificateLbl->setObjectName(QString::fromUtf8("certificateLbl"));
        certificateLbl->setGeometry(QRect(0, 30, 121, 21));
        certificateLbl->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        certEdit = new QLineEdit(SSLclientFrame);
        certEdit->setObjectName(QString::fromUtf8("certEdit"));
        certEdit->setGeometry(QRect(130, 30, 211, 27));
        keyLbl = new QLabel(SSLclientFrame);
        keyLbl->setObjectName(QString::fromUtf8("keyLbl"));
        keyLbl->setGeometry(QRect(0, 60, 121, 21));
        keyLbl->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        keyEdit = new QLineEdit(SSLclientFrame);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));
        keyEdit->setGeometry(QRect(130, 60, 211, 27));
        certFileBttn = new QToolButton(SSLclientFrame);
        certFileBttn->setObjectName(QString::fromUtf8("certFileBttn"));
        certFileBttn->setGeometry(QRect(342, 30, 31, 25));
        keyFileBttn = new QToolButton(SSLclientFrame);
        keyFileBttn->setObjectName(QString::fromUtf8("keyFileBttn"));
        keyFileBttn->setGeometry(QRect(342, 60, 31, 25));
        clientCertCheck = new QCheckBox(SSLclientFrame);
        clientCertCheck->setObjectName(QString::fromUtf8("clientCertCheck"));
        clientCertCheck->setGeometry(QRect(10, 10, 211, 22));
        SSLverifyFrame = new QFrame(SSLframe);
        SSLverifyFrame->setObjectName(QString::fromUtf8("SSLverifyFrame"));
        SSLverifyFrame->setGeometry(QRect(10, 140, 381, 71));
        SSLverifyFrame->setFrameShape(QFrame::StyledPanel);
        SSLverifyFrame->setFrameShadow(QFrame::Sunken);
        SSLverifyCheck = new QCheckBox(SSLverifyFrame);
        SSLverifyCheck->setObjectName(QString::fromUtf8("SSLverifyCheck"));
        SSLverifyCheck->setGeometry(QRect(10, 10, 201, 22));
        CAbundleLbl = new QLabel(SSLverifyFrame);
        CAbundleLbl->setObjectName(QString::fromUtf8("CAbundleLbl"));
        CAbundleLbl->setGeometry(QRect(10, 30, 111, 21));
        CAbundleLbl->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        CAbundleEdit = new QLineEdit(SSLverifyFrame);
        CAbundleEdit->setObjectName(QString::fromUtf8("CAbundleEdit"));
        CAbundleEdit->setGeometry(QRect(130, 30, 211, 27));
        CAbundleFileBttn = new QToolButton(SSLverifyFrame);
        CAbundleFileBttn->setObjectName(QString::fromUtf8("CAbundleFileBttn"));
        CAbundleFileBttn->setGeometry(QRect(342, 30, 31, 25));
        timeoutSpinBox = new QSpinBox(ServerDefinitionDialog);
        timeoutSpinBox->setObjectName(QString::fromUtf8("timeoutSpinBox"));
        timeoutSpinBox->setGeometry(QRect(150, 110, 81, 27));
        timeoutSpinBox->setValue(15);
        timeoutLbl = new QLabel(ServerDefinitionDialog);
        timeoutLbl->setObjectName(QString::fromUtf8("timeoutLbl"));
        timeoutLbl->setGeometry(QRect(10, 110, 131, 21));
        timeoutLbl->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        SSLframe->raise();
        buttonBox->raise();
        nameLbl->raise();
        hostLbl->raise();
        portLbl->raise();
        portSpinBox->raise();
        nameEdit->raise();
        hostEdit->raise();
        testBttn->raise();
        timeoutSpinBox->raise();
        timeoutLbl->raise();
        QWidget::setTabOrder(nameEdit, hostEdit);
        QWidget::setTabOrder(hostEdit, portSpinBox);
        QWidget::setTabOrder(portSpinBox, timeoutSpinBox);
        QWidget::setTabOrder(timeoutSpinBox, SSLcheck);
        QWidget::setTabOrder(SSLcheck, clientCertCheck);
        QWidget::setTabOrder(clientCertCheck, certEdit);
        QWidget::setTabOrder(certEdit, certFileBttn);
        QWidget::setTabOrder(certFileBttn, keyEdit);
        QWidget::setTabOrder(keyEdit, keyFileBttn);
        QWidget::setTabOrder(keyFileBttn, SSLverifyCheck);
        QWidget::setTabOrder(SSLverifyCheck, CAbundleEdit);
        QWidget::setTabOrder(CAbundleEdit, CAbundleFileBttn);
        QWidget::setTabOrder(CAbundleFileBttn, buttonBox);
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
        SSLcheck->setText(QApplication::translate("ServerDefinitionDialog", "SSL connection", 0, QApplication::UnicodeUTF8));
        certificateLbl->setText(QApplication::translate("ServerDefinitionDialog", "Certificate file :", 0, QApplication::UnicodeUTF8));
        keyLbl->setText(QApplication::translate("ServerDefinitionDialog", "Key file :", 0, QApplication::UnicodeUTF8));
        certFileBttn->setText(QApplication::translate("ServerDefinitionDialog", "...", 0, QApplication::UnicodeUTF8));
        keyFileBttn->setText(QApplication::translate("ServerDefinitionDialog", "...", 0, QApplication::UnicodeUTF8));
        clientCertCheck->setText(QApplication::translate("ServerDefinitionDialog", "Send client certificate", 0, QApplication::UnicodeUTF8));
        SSLverifyCheck->setText(QApplication::translate("ServerDefinitionDialog", "Verify Server Certificate", 0, QApplication::UnicodeUTF8));
        CAbundleLbl->setText(QApplication::translate("ServerDefinitionDialog", "CA bundle file :", 0, QApplication::UnicodeUTF8));
        CAbundleFileBttn->setText(QApplication::translate("ServerDefinitionDialog", "...", 0, QApplication::UnicodeUTF8));
        timeoutSpinBox->setSuffix(QApplication::translate("ServerDefinitionDialog", " sec.", 0, QApplication::UnicodeUTF8));
        timeoutLbl->setText(QApplication::translate("ServerDefinitionDialog", "Message timeout :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ServerDefinitionDialog: public Ui_ServerDefinitionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERDEFINITIONDIALOG_H
