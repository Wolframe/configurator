/********************************************************************************
** Form generated from reading UI file 'recipe_content.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_CONTENT_H
#define UI_RECIPE_CONTENT_H

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

class Ui_recipe_content_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *add_3;
    QPushButton *add_2;
    QPushButton *reload_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *RecipeContent;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QTableWidget *recipe;

    void setupUi(QWidget *recipe_content_form)
    {
        if (recipe_content_form->objectName().isEmpty())
            recipe_content_form->setObjectName(QString::fromUtf8("recipe_content_form"));
        recipe_content_form->resize(621, 411);
        gridLayout = new QGridLayout(recipe_content_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(recipe_content_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("recipe_content_add")));
        add->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));

        horizontalLayout->addWidget(add);

        add_3 = new QPushButton(recipe_content_form);
        add_3->setObjectName(QString::fromUtf8("add_3"));
        add_3->setProperty("form", QVariant(QString::fromUtf8("recipe_content_edit")));
        add_3->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));

        horizontalLayout->addWidget(add_3);

        add_2 = new QPushButton(recipe_content_form);
        add_2->setObjectName(QString::fromUtf8("add_2"));
        add_2->setProperty("form", QVariant(QString::fromUtf8("recipe_content")));
        add_2->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));
        add_2->setProperty("doctype", QVariant(QString::fromUtf8("RecipeContent.simpleform")));
        add_2->setProperty("rootelement", QVariant(QString::fromUtf8("RecipeContent")));
        add_2->setProperty("action", QVariant(QString::fromUtf8("delete")));

        horizontalLayout->addWidget(add_2);

        reload_2 = new QPushButton(recipe_content_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        reload_2->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));

        horizontalLayout->addWidget(reload_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(recipe_content_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(recipe_content_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(recipe_content_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/folders.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(recipe_content_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        RecipeContent = new QTableWidget(recipe_content_form);
        if (RecipeContent->columnCount() < 3)
            RecipeContent->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        RecipeContent->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        RecipeContent->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        RecipeContent->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        RecipeContent->setObjectName(QString::fromUtf8("RecipeContent"));
        RecipeContent->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RecipeContent->setSelectionMode(QAbstractItemView::SingleSelection);
        RecipeContent->setSelectionBehavior(QAbstractItemView::SelectRows);
        RecipeContent->setProperty("action", QVariant(QString::fromUtf8("read")));

        gridLayout_2->addWidget(RecipeContent, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(recipe_content_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);

        horizontalLayout_4->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        recipe = new QTableWidget(recipe_content_form);
        if (recipe->columnCount() < 5)
            recipe->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        recipe->setHorizontalHeaderItem(4, __qtablewidgetitem7);
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

        gridLayout_2->addWidget(recipe, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        QWidget::setTabOrder(RecipeContent, pushButton);
        QWidget::setTabOrder(pushButton, add);
        QWidget::setTabOrder(add, add_3);
        QWidget::setTabOrder(add_3, add_2);
        QWidget::setTabOrder(add_2, reload_2);

        retranslateUi(recipe_content_form);
        QObject::connect(RecipeContent, SIGNAL(doubleClicked(QModelIndex)), add_3, SLOT(click()));
        QObject::connect(recipe, SIGNAL(itemSelectionChanged()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(recipe_content_form);
    } // setupUi

    void retranslateUi(QWidget *recipe_content_form)
    {
        recipe_content_form->setWindowTitle(QApplication::translate("recipe_content_form", "Recipe content", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("recipe_content_form", "Add", 0, QApplication::UnicodeUTF8));
        add->setProperty("global.recipe_id", QVariant(QApplication::translate("recipe_content_form", "{recipe.id}", 0, QApplication::UnicodeUTF8)));
        add->setProperty("global.RecipeContentState", QVariant(QApplication::translate("recipe_content_form", "{RecipeContent.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setText(QApplication::translate("recipe_content_form", "Edit", 0, QApplication::UnicodeUTF8));
        add_3->setProperty("global.recipe_id", QVariant(QApplication::translate("recipe_content_form", "{recipe.id}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.RecipeContentState", QVariant(QApplication::translate("recipe_content_form", "{RecipeContent.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.category_id", QVariant(QApplication::translate("recipe_content_form", "{RecipeContent.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setText(QApplication::translate("recipe_content_form", "Delete", 0, QApplication::UnicodeUTF8));
        add_2->setProperty("global.RecipeContentState", QVariant(QApplication::translate("recipe_content_form", "{RecipeContent.state}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("recipe_id", QVariant(QApplication::translate("recipe_content_form", "{recipe.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("category_id", QVariant(QApplication::translate("recipe_content_form", "{RecipeContent.id}", 0, QApplication::UnicodeUTF8)));
        reload_2->setText(QApplication::translate("recipe_content_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        reload_2->setProperty("global.RecipeContentState", QVariant(QApplication::translate("recipe_content_form", "{RecipeContent.state}", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("recipe_content_form", "Recipe content", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = RecipeContent->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("recipe_content_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = RecipeContent->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("recipe_content_form", "min_requires", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = RecipeContent->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("recipe_content_form", "max_requires", 0, QApplication::UnicodeUTF8));
        RecipeContent->setProperty("doctype", QVariant(QApplication::translate("recipe_content_form", "RecipeContentListRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        RecipeContent->setProperty("rootelement", QVariant(QApplication::translate("recipe_content_form", "RecipeContent", 0, QApplication::UnicodeUTF8)));
        RecipeContent->setProperty("state", QVariant(QApplication::translate("recipe_content_form", "{global.RecipeContentState}", 0, QApplication::UnicodeUTF8)));
        RecipeContent->setProperty("recipe_id", QVariant(QApplication::translate("recipe_content_form", "{recipe.id}", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("recipe_content_form", "Show", 0, QApplication::UnicodeUTF8));
        pushButton->setProperty("action", QVariant(QApplication::translate("recipe_content_form", "RecipeContent.reload", 0, QApplication::UnicodeUTF8)));
        QTableWidgetItem *___qtablewidgetitem3 = recipe->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("recipe_content_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = recipe->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("recipe_content_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = recipe->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("recipe_content_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = recipe->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("recipe_content_form", "creationDate", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = recipe->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("recipe_content_form", "comment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class recipe_content_form: public Ui_recipe_content_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_CONTENT_H
