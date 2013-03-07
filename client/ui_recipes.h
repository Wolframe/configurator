/********************************************************************************
** Form generated from reading UI file 'recipes.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPES_H
#define UI_RECIPES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recipes_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *reload_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QTableWidget *recipe;

    void setupUi(QWidget *recipes_form)
    {
        if (recipes_form->objectName().isEmpty())
            recipes_form->setObjectName(QString::fromUtf8("recipes_form"));
        recipes_form->resize(556, 318);
        gridLayout = new QGridLayout(recipes_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(recipes_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("recipe_add")));
        add->setProperty("global.id", QVariant(QString::fromUtf8("{recipe.id}")));
        add->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));

        horizontalLayout->addWidget(add);

        delete_2 = new QPushButton(recipes_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Recipe.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("recipe")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("recipes")));
        delete_2->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(recipes_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setProperty("form", QVariant(QString::fromUtf8("recipe_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{recipe.id}")));
        edit->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));

        horizontalLayout->addWidget(edit);

        reload_2 = new QPushButton(recipes_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        reload_2->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));

        horizontalLayout->addWidget(reload_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(recipes_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(recipes_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        recipe = new QTableWidget(recipes_form);
        if (recipe->columnCount() < 5)
            recipe->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        recipe->setObjectName(QString::fromUtf8("recipe"));
        recipe->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        recipe->setAlternatingRowColors(true);
        recipe->setSelectionMode(QAbstractItemView::SingleSelection);
        recipe->setSelectionBehavior(QAbstractItemView::SelectRows);
        recipe->setShowGrid(true);
        recipe->setGridStyle(Qt::DotLine);
        recipe->setSortingEnabled(true);
        recipe->setProperty("doctype", QVariant(QString::fromUtf8("RecipeListRequest.simpleform")));
        recipe->setProperty("rootelement", QVariant(QString::fromUtf8("recipe")));
        recipe->setProperty("state", QVariant(QString::fromUtf8("{global.recipeState}")));
        recipe->setProperty("action", QVariant(QString::fromUtf8("read")));
        recipe->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        recipe->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(recipe, 1, 0, 1, 1);

        QWidget::setTabOrder(add, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        QWidget::setTabOrder(edit, reload_2);

        retranslateUi(recipes_form);
        QObject::connect(recipe, SIGNAL(doubleClicked(QModelIndex)), edit, SLOT(click()));

        QMetaObject::connectSlotsByName(recipes_form);
    } // setupUi

    void retranslateUi(QWidget *recipes_form)
    {
        recipes_form->setWindowTitle(QApplication::translate("recipes_form", "Recipes", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("recipes_form", "Add", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("recipes_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("recipes_form", "{recipe.id}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("recipes_form", "Edit", 0, QApplication::UnicodeUTF8));
        reload_2->setText(QApplication::translate("recipes_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("recipes_form", "Manage recipes", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = recipe->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("recipes_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = recipe->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("recipes_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = recipe->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("recipes_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = recipe->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("recipes_form", "creationDate", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = recipe->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("recipes_form", "comment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class recipes_form: public Ui_recipes_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPES_H
