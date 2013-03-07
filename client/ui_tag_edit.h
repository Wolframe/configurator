/********************************************************************************
** Form generated from reading UI file 'tag_edit.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAG_EDIT_H
#define UI_TAG_EDIT_H

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

QT_BEGIN_NAMESPACE

class Ui_tag_edit_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_description;
    QPlainTextEdit *description;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QPushButton *reset;
    QPushButton *cancel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *tag_edit_form)
    {
        if (tag_edit_form->objectName().isEmpty())
            tag_edit_form->setObjectName(QString::fromUtf8("tag_edit_form"));
        tag_edit_form->resize(407, 263);
        tag_edit_form->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));
        tag_edit_form->setProperty("doctype", QVariant(QString::fromUtf8("TagRequest.simpleForm")));
        formLayout = new QFormLayout(tag_edit_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_name = new QLabel(tag_edit_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(tag_edit_form);
        name->setObjectName(QString::fromUtf8("name"));
        name->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_description = new QLabel(tag_edit_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_description);

        description = new QPlainTextEdit(tag_edit_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        save = new QPushButton(tag_edit_form);
        save->setObjectName(QString::fromUtf8("save"));
        save->setProperty("rootelement", QVariant(QString::fromUtf8("tag")));
        save->setProperty("doctype", QVariant(QString::fromUtf8("Tag.simpleform")));
        save->setProperty("action", QVariant(QString::fromUtf8("update")));
        save->setProperty("form", QVariant(QString::fromUtf8("tags")));
        save->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout_2->addWidget(save);

        reset = new QPushButton(tag_edit_form);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setProperty("doctype", QVariant(QString::fromUtf8("TagRequest.simpleform")));
        reset->setProperty("rootelement", QVariant(QString::fromUtf8("tag")));
        reset->setProperty("action", QVariant(QString::fromUtf8("read")));
        reset->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout_2->addWidget(reset);

        cancel = new QPushButton(tag_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("tags")));

        horizontalLayout_2->addWidget(cancel);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_2);

        label = new QLabel(tag_edit_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/tag_blue_edit.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(tag_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(name);
        label_description->setBuddy(description);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, description);
        QWidget::setTabOrder(description, save);
        QWidget::setTabOrder(save, reset);
        QWidget::setTabOrder(reset, cancel);

        retranslateUi(tag_edit_form);

        QMetaObject::connectSlotsByName(tag_edit_form);
    } // setupUi

    void retranslateUi(QWidget *tag_edit_form)
    {
        tag_edit_form->setWindowTitle(QApplication::translate("tag_edit_form", "Edit tag", 0, QApplication::UnicodeUTF8));
        tag_edit_form->setProperty("initAction", QVariant(QApplication::translate("tag_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        tag_edit_form->setProperty("rootelement", QVariant(QApplication::translate("tag_edit_form", "tag", 0, QApplication::UnicodeUTF8)));
        label_name->setText(QApplication::translate("tag_edit_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_description->setText(QApplication::translate("tag_edit_form", "Description:", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("tag_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("tag_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("tag_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("tag_edit_form", "Edit tag..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tag_edit_form: public Ui_tag_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAG_EDIT_H
