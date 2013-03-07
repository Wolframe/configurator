/********************************************************************************
** Form generated from reading UI file 'recipe_edit.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_EDIT_H
#define UI_RECIPE_EDIT_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recipe_edit_form
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
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *search;
    QPushButton *searchButton;
    QTableWidget *picture;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QPushButton *reset;
    QPushButton *cancel;

    void setupUi(QWidget *recipe_edit_form)
    {
        if (recipe_edit_form->objectName().isEmpty())
            recipe_edit_form->setObjectName(QString::fromUtf8("recipe_edit_form"));
        recipe_edit_form->resize(460, 1004);
        recipe_edit_form->setProperty("initAction", QVariant(QString::fromUtf8("read")));
        recipe_edit_form->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));
        recipe_edit_form->setProperty("doctype", QVariant(QString::fromUtf8("RecipeRequest.simpleForm")));
        recipe_edit_form->setProperty("rootelement", QVariant(QString::fromUtf8("recipe")));
        formLayout = new QFormLayout(recipe_edit_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(recipe_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(recipe_edit_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

        label_name = new QLabel(recipe_edit_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(recipe_edit_form);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_description_2 = new QLabel(recipe_edit_form);
        label_description_2->setObjectName(QString::fromUtf8("label_description_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_description_2);

        description = new QPlainTextEdit(recipe_edit_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        label_category = new QLabel(recipe_edit_form);
        label_category->setObjectName(QString::fromUtf8("label_category"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_category);

        category = new QTreeWidget(recipe_edit_form);
        category->setObjectName(QString::fromUtf8("category"));
        category->setSelectionMode(QAbstractItemView::SingleSelection);
        category->setHeaderHidden(false);
        category->setExpandsOnDoubleClick(false);
        category->setProperty("action", QVariant(QString::fromUtf8("read")));
        category->header()->setDefaultSectionSize(200);

        formLayout->setWidget(3, QFormLayout::FieldRole, category);

        label_description = new QLabel(recipe_edit_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_description);

        comment = new QPlainTextEdit(recipe_edit_form);
        comment->setObjectName(QString::fromUtf8("comment"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comment);

        label = new QLabel(recipe_edit_form);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(recipe_edit_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        search = new QLineEdit(recipe_edit_form);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_2->addWidget(search);

        searchButton = new QPushButton(recipe_edit_form);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setProperty("global.searchState", QVariant(QString::fromUtf8("{search.state}")));
        searchButton->setProperty("action", QVariant(QString::fromUtf8("picture.reload")));

        horizontalLayout_2->addWidget(searchButton);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout_2);

        picture = new QTableWidget(recipe_edit_form);
        if (picture->columnCount() < 4)
            picture->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        picture->setAlternatingRowColors(true);
        picture->setSelectionMode(QAbstractItemView::MultiSelection);
        picture->setSelectionBehavior(QAbstractItemView::SelectRows);
        picture->setShowGrid(true);
        picture->setGridStyle(Qt::DotLine);
        picture->setSortingEnabled(true);
        picture->setProperty("doctype", QVariant(QString::fromUtf8("PictureListRequest.simpleform")));
        picture->setProperty("rootelement", QVariant(QString::fromUtf8("picture")));
        picture->setProperty("search", QVariant(QString::fromUtf8("{search.text}")));
        picture->setProperty("action", QVariant(QString::fromUtf8("read")));
        picture->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        picture->verticalHeader()->setStretchLastSection(false);

        formLayout->setWidget(9, QFormLayout::FieldRole, picture);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save = new QPushButton(recipe_edit_form);
        save->setObjectName(QString::fromUtf8("save"));
        save->setProperty("rootelement", QVariant(QString::fromUtf8("recipe")));
        save->setProperty("doctype", QVariant(QString::fromUtf8("Recipe.simpleform")));
        save->setProperty("action", QVariant(QString::fromUtf8("update")));
        save->setProperty("form", QVariant(QString::fromUtf8("recipes")));
        save->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout->addWidget(save);

        reset = new QPushButton(recipe_edit_form);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setProperty("doctype", QVariant(QString::fromUtf8("RecipeRequest.simpleform")));
        reset->setProperty("rootelement", QVariant(QString::fromUtf8("recipe")));
        reset->setProperty("action", QVariant(QString::fromUtf8("read")));
        reset->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout->addWidget(reset);

        cancel = new QPushButton(recipe_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("recipes")));

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(10, QFormLayout::FieldRole, horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(name);
        label_description_2->setBuddy(description);
        label_category->setBuddy(category);
        label_description->setBuddy(comment);
        label->setBuddy(picture);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, description);
        QWidget::setTabOrder(description, category);
        QWidget::setTabOrder(category, comment);
        QWidget::setTabOrder(comment, search);
        QWidget::setTabOrder(search, searchButton);
        QWidget::setTabOrder(searchButton, picture);
        QWidget::setTabOrder(picture, save);
        QWidget::setTabOrder(save, reset);
        QWidget::setTabOrder(reset, cancel);

        retranslateUi(recipe_edit_form);
        QObject::connect(search, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        QMetaObject::connectSlotsByName(recipe_edit_form);
    } // setupUi

    void retranslateUi(QWidget *recipe_edit_form)
    {
        recipe_edit_form->setWindowTitle(QApplication::translate("recipe_edit_form", "Edit recipe", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("recipe_edit_form", "Edit recipe..", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("recipe_edit_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_description_2->setText(QApplication::translate("recipe_edit_form", "Description:", 0, QApplication::UnicodeUTF8));
        label_category->setText(QApplication::translate("recipe_edit_form", "Category:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = category->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("recipe_edit_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("recipe_edit_form", "category", 0, QApplication::UnicodeUTF8));
        category->setProperty("doctype", QVariant(QApplication::translate("recipe_edit_form", "CategoryHierarchyRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        category->setProperty("rootelement", QVariant(QApplication::translate("recipe_edit_form", "category", 0, QApplication::UnicodeUTF8)));
        label_description->setText(QApplication::translate("recipe_edit_form", "Comment:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("recipe_edit_form", "Pictures:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("recipe_edit_form", "Filter pictures by:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("recipe_edit_form", "Search..", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = picture->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("recipe_edit_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = picture->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("recipe_edit_form", "caption", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = picture->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("recipe_edit_form", "info", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = picture->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("recipe_edit_form", "tags", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("recipe_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("recipe_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("recipe_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class recipe_edit_form: public Ui_recipe_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_EDIT_H
