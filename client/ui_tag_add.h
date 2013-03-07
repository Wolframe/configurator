/********************************************************************************
** Form generated from reading UI file 'tag_add.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAG_ADD_H
#define UI_TAG_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include <QCheckBox>

QT_BEGIN_NAMESPACE

class Ui_tag_add_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_root;
    QCheckBox *root;
    QLabel *label_description;
    QPlainTextEdit *description;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QPushButton *cancel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *tag_add_form)
    {
        if (tag_add_form->objectName().isEmpty())
            tag_add_form->setObjectName(QString::fromUtf8("tag_add_form"));
        tag_add_form->resize(393, 194);
        formLayout = new QFormLayout(tag_add_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_name = new QLabel(tag_add_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(tag_add_form);
        name->setObjectName(QString::fromUtf8("name"));
        name->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

	label_root = new QLabel(tag_add_form);
	label_root->setObjectName(QString::fromUtf8("label_root"));
	formLayout->setWidget(2, QFormLayout::LabelRole, label_root);
        root = new QCheckBox(tag_add_form);
        root->setObjectName(QString::fromUtf8("root"));
        formLayout->setWidget(2, QFormLayout::FieldRole, root);

        label_description = new QLabel(tag_add_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_description);

        description = new QPlainTextEdit(tag_add_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(3, QFormLayout::FieldRole, description);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(tag_add_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("rootelement", QVariant(QString::fromUtf8("tag")));
        add->setProperty("doctype", QVariant(QString::fromUtf8("Tag.simpleform")));
        add->setProperty("action", QVariant(QString::fromUtf8("create")));
        add->setProperty("form", QVariant(QString::fromUtf8("tags")));
        add->setProperty("parentID", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout->addWidget(add);

        cancel = new QPushButton(tag_add_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("tags")));

        horizontalLayout->addWidget(cancel);


        horizontalLayout_2->addLayout(horizontalLayout);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        label = new QLabel(tag_add_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/tag_blue_add.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(tag_add_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(name);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, root);
        QWidget::setTabOrder(root, description);
        QWidget::setTabOrder(description, add);
        QWidget::setTabOrder(add, cancel);

        retranslateUi(tag_add_form);

        QMetaObject::connectSlotsByName(tag_add_form);
    } // setupUi

    void retranslateUi(QWidget *tag_add_form)
    {
        tag_add_form->setWindowTitle(QApplication::translate("tag_add_form", "Add tag", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("tag_add_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_root->setText(QApplication::translate("tag_add_form", "Add to root:", 0, QApplication::UnicodeUTF8));
        label_description->setText(QApplication::translate("tag_add_form", "Description:", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("tag_add_form", "Add", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("tag_add_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("tag_add_form", "Add new tag..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tag_add_form: public Ui_tag_add_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAG_ADD_H
