/********************************************************************************
** Form generated from reading UI file 'categories.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIES_H
#define UI_CATEGORIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_categories_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *addParent;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *reload_2;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *category;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *categories_form)
    {
        if (categories_form->objectName().isEmpty())
            categories_form->setObjectName(QString::fromUtf8("categories_form"));
        categories_form->resize(556, 318);
        gridLayout = new QGridLayout(categories_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton = new QRadioButton(categories_form);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(categories_form);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(categories_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("category_add")));
        add->setProperty("global.id", QVariant(QString::fromUtf8("{category.id}")));
        add->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(add);

        addParent = new QPushButton(categories_form);
        addParent->setObjectName(QString::fromUtf8("addParent"));
        addParent->setProperty("form", QVariant(QString::fromUtf8("category_add")));
        addParent->setProperty("global.id", QVariant(QString::fromUtf8("1")));
        addParent->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(addParent);

        delete_2 = new QPushButton(categories_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Category.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("category")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("categories")));
        delete_2->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(categories_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setProperty("form", QVariant(QString::fromUtf8("category_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{category.id}")));
        edit->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(edit);

        reload_2 = new QPushButton(categories_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        reload_2->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(reload_2);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        category = new QTreeWidget(categories_form);
        category->setObjectName(QString::fromUtf8("category"));
        category->setItemsExpandable(true);
        category->setProperty("doctype", QVariant(QString::fromUtf8("CategoryHierarchyRequest.simpleform")));
        category->setProperty("state", QVariant(QString::fromUtf8("{global.categoryState}")));
        category->setProperty("action", QVariant(QString::fromUtf8("read")));
        category->header()->setDefaultSectionSize(250);

        gridLayout->addWidget(category, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(categories_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/folders.png")));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(categories_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(category, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, add);
        QWidget::setTabOrder(add, addParent);
        QWidget::setTabOrder(addParent, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        QWidget::setTabOrder(edit, reload_2);

        retranslateUi(categories_form);
        QObject::connect(radioButton, SIGNAL(toggled(bool)), category, SLOT(expandAll()));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), category, SLOT(collapseAll()));
        QObject::connect(category, SIGNAL(doubleClicked(QModelIndex)), edit, SLOT(click()));

        QMetaObject::connectSlotsByName(categories_form);
    } // setupUi

    void retranslateUi(QWidget *categories_form)
    {
        categories_form->setWindowTitle(QApplication::translate("categories_form", "Categories", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("categories_form", "expand all", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("categories_form", "collapse all", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("categories_form", "Add", 0, QApplication::UnicodeUTF8));
        addParent->setText(QApplication::translate("categories_form", "Add Root", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("categories_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("categories_form", "{category.id}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("categories_form", "Edit", 0, QApplication::UnicodeUTF8));
        reload_2->setText(QApplication::translate("categories_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = category->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("categories_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("categories_form", "category", 0, QApplication::UnicodeUTF8));
        category->setProperty("rootelement", QVariant(QApplication::translate("categories_form", "category", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QString());
        label->setText(QApplication::translate("categories_form", "Manage categories", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class categories_form: public Ui_categories_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_H
