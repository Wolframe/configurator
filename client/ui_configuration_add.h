/********************************************************************************
** Form generated from reading UI file 'configuration_add.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATION_ADD_H
#define UI_CONFIGURATION_ADD_H

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
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_configuration_add_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_description_2;
    QPlainTextEdit *description;
    QLabel *label_category;
    QTreeWidget *category;
    QLabel *label_description;
    QPlainTextEdit *comment;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QPushButton *cancel;

    void setupUi(QWidget *configuration_add_form)
    {
        if (configuration_add_form->objectName().isEmpty())
            configuration_add_form->setObjectName(QString::fromUtf8("configuration_add_form"));
        configuration_add_form->resize(355, 696);
        formLayout = new QFormLayout(configuration_add_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(configuration_add_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(configuration_add_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

        label_name = new QLabel(configuration_add_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(configuration_add_form);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_description_2 = new QLabel(configuration_add_form);
        label_description_2->setObjectName(QString::fromUtf8("label_description_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_description_2);

        description = new QPlainTextEdit(configuration_add_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        label_category = new QLabel(configuration_add_form);
        label_category->setObjectName(QString::fromUtf8("label_category"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_category);

        category = new QTreeWidget(configuration_add_form);
        category->setObjectName(QString::fromUtf8("category"));
        category->setSelectionMode(QAbstractItemView::SingleSelection);
        category->setHeaderHidden(false);
        category->setExpandsOnDoubleClick(false);
        category->setProperty("action", QVariant(QString::fromUtf8("read")));
        category->header()->setDefaultSectionSize(200);

        formLayout->setWidget(3, QFormLayout::FieldRole, category);

        label_description = new QLabel(configuration_add_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_description);

        comment = new QPlainTextEdit(configuration_add_form);
        comment->setObjectName(QString::fromUtf8("comment"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comment);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(configuration_add_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("rootelement", QVariant(QString::fromUtf8("configuration")));
        add->setProperty("doctype", QVariant(QString::fromUtf8("Configuration.simpleform")));
        add->setProperty("action", QVariant(QString::fromUtf8("create")));
        add->setProperty("form", QVariant(QString::fromUtf8("configurations")));

        horizontalLayout->addWidget(add);

        cancel = new QPushButton(configuration_add_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("configurations")));

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(name);
        label_category->setBuddy(category);
        label_description->setBuddy(comment);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, description);
        QWidget::setTabOrder(description, category);
        QWidget::setTabOrder(category, comment);
        QWidget::setTabOrder(comment, add);
        QWidget::setTabOrder(add, cancel);

        retranslateUi(configuration_add_form);

        QMetaObject::connectSlotsByName(configuration_add_form);
    } // setupUi

    void retranslateUi(QWidget *configuration_add_form)
    {
        configuration_add_form->setWindowTitle(QApplication::translate("configuration_add_form", "Add configuration", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("configuration_add_form", "Add configuration..", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("configuration_add_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_description_2->setText(QApplication::translate("configuration_add_form", "Description:", 0, QApplication::UnicodeUTF8));
        label_category->setText(QApplication::translate("configuration_add_form", "Category:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = category->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("configuration_add_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("configuration_add_form", "category", 0, QApplication::UnicodeUTF8));
        category->setProperty("doctype", QVariant(QApplication::translate("configuration_add_form", "CategoryHierarchyRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        category->setProperty("rootelement", QVariant(QApplication::translate("configuration_add_form", "category", 0, QApplication::UnicodeUTF8)));
        label_description->setText(QApplication::translate("configuration_add_form", "Comment:", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("configuration_add_form", "Add", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("configuration_add_form", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class configuration_add_form: public Ui_configuration_add_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATION_ADD_H
