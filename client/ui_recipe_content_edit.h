/********************************************************************************
** Form generated from reading UI file 'recipe_content_edit.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_CONTENT_EDIT_H
#define UI_RECIPE_CONTENT_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recipe_content_edit_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *link;
    QPushButton *pushButton;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *ignore_expand_feats;
    QRadioButton *ignore_collapse_feats;
    QTreeWidget *category;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *recipe;
    QFormLayout *formLayout;
    QLabel *label_requires;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_min_requires;
    QSpinBox *min_requires;
    QLabel *label_max_requires;
    QSpinBox *max_requires;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *recipe_content_edit_form)
    {
        if (recipe_content_edit_form->objectName().isEmpty())
            recipe_content_edit_form->setObjectName(QString::fromUtf8("recipe_content_edit_form"));
        recipe_content_edit_form->resize(538, 347);
        recipe_content_edit_form->setProperty("rootelement", QVariant(QString::fromUtf8("RecipeContent")));
        recipe_content_edit_form->setProperty("recipe_id", QVariant(QString::fromUtf8("{global.recipe_id}")));
        recipe_content_edit_form->setProperty("category_id", QVariant(QString::fromUtf8("{global.category_id}")));
        gridLayout = new QGridLayout(recipe_content_edit_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        link = new QPushButton(recipe_content_edit_form);
        link->setObjectName(QString::fromUtf8("link"));
        link->setProperty("form", QVariant(QString::fromUtf8("recipe_content")));
        link->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));
        link->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));
        link->setProperty("global.recipe_id", QVariant(QString::fromUtf8("{recipe.id}")));
        link->setProperty("global.category_id", QVariant(QString::fromUtf8("{category.id}")));
        link->setProperty("doctype", QVariant(QString::fromUtf8("RecipeContent.simpleform")));
        link->setProperty("rootelement", QVariant(QString::fromUtf8("RecipeContent")));

        horizontalLayout->addWidget(link);

        pushButton = new QPushButton(recipe_content_edit_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        cancel = new QPushButton(recipe_content_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("recipe_content")));
        cancel->setProperty("global.recipeState", QVariant(QString::fromUtf8("{recipe.state}")));
        cancel->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(recipe_content_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(recipe_content_edit_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link_edit.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(recipe_content_edit_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/folders.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(recipe_content_edit_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ignore_expand_feats = new QRadioButton(recipe_content_edit_form);
        ignore_expand_feats->setObjectName(QString::fromUtf8("ignore_expand_feats"));

        horizontalLayout_4->addWidget(ignore_expand_feats);

        ignore_collapse_feats = new QRadioButton(recipe_content_edit_form);
        ignore_collapse_feats->setObjectName(QString::fromUtf8("ignore_collapse_feats"));

        horizontalLayout_4->addWidget(ignore_collapse_feats);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        category = new QTreeWidget(recipe_content_edit_form);
        category->setObjectName(QString::fromUtf8("category"));
        category->setEnabled(true);
        category->setEditTriggers(QAbstractItemView::NoEditTriggers);
        category->setSelectionMode(QAbstractItemView::SingleSelection);
        category->setItemsExpandable(true);
        category->setProperty("doctype", QVariant(QString::fromUtf8("CategoryHierarchyRequest.simpleform")));
        category->setProperty("rootelement", QVariant(QString::fromUtf8("category")));
        category->setProperty("action", QVariant(QString::fromUtf8("read")));
        category->header()->setDefaultSectionSize(200);

        gridLayout_2->addWidget(category, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        recipe = new QTableWidget(recipe_content_edit_form);
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

        gridLayout_2->addWidget(recipe, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_requires = new QLabel(recipe_content_edit_form);
        label_requires->setObjectName(QString::fromUtf8("label_requires"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_requires);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_min_requires = new QLabel(recipe_content_edit_form);
        label_min_requires->setObjectName(QString::fromUtf8("label_min_requires"));

        horizontalLayout_5->addWidget(label_min_requires);

        min_requires = new QSpinBox(recipe_content_edit_form);
        min_requires->setObjectName(QString::fromUtf8("min_requires"));

        horizontalLayout_5->addWidget(min_requires);

        label_max_requires = new QLabel(recipe_content_edit_form);
        label_max_requires->setObjectName(QString::fromUtf8("label_max_requires"));

        horizontalLayout_5->addWidget(label_max_requires);

        max_requires = new QSpinBox(recipe_content_edit_form);
        max_requires->setObjectName(QString::fromUtf8("max_requires"));

        horizontalLayout_5->addWidget(max_requires);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);


        gridLayout->addLayout(formLayout, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_min_requires->setBuddy(min_requires);
        label_max_requires->setBuddy(max_requires);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(recipe, category);
        QWidget::setTabOrder(category, ignore_expand_feats);
        QWidget::setTabOrder(ignore_expand_feats, ignore_collapse_feats);
        QWidget::setTabOrder(ignore_collapse_feats, min_requires);
        QWidget::setTabOrder(min_requires, max_requires);
        QWidget::setTabOrder(max_requires, link);
        QWidget::setTabOrder(link, pushButton);
        QWidget::setTabOrder(pushButton, cancel);

        retranslateUi(recipe_content_edit_form);
        QObject::connect(ignore_expand_feats, SIGNAL(clicked()), category, SLOT(expandAll()));
        QObject::connect(ignore_collapse_feats, SIGNAL(clicked()), category, SLOT(collapseAll()));

        QMetaObject::connectSlotsByName(recipe_content_edit_form);
    } // setupUi

    void retranslateUi(QWidget *recipe_content_edit_form)
    {
        recipe_content_edit_form->setWindowTitle(QApplication::translate("recipe_content_edit_form", "Edit recipe content", 0, QApplication::UnicodeUTF8));
        recipe_content_edit_form->setProperty("initAction", QVariant(QApplication::translate("recipe_content_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        recipe_content_edit_form->setProperty("doctype", QVariant(QApplication::translate("recipe_content_edit_form", "RecipeContentRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        link->setText(QApplication::translate("recipe_content_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        link->setProperty("action", QVariant(QApplication::translate("recipe_content_edit_form", "create", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("recipe_content_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        pushButton->setProperty("action", QVariant(QApplication::translate("recipe_content_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("doctype", QVariant(QApplication::translate("recipe_content_edit_form", "RecipeContentRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("rootelement", QVariant(QApplication::translate("recipe_content_edit_form", "RecipeContent", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("recipe_id", QVariant(QApplication::translate("recipe_content_edit_form", "{global.recipe_id}", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("category_id", QVariant(QApplication::translate("recipe_content_edit_form", "{global.category_id}", 0, QApplication::UnicodeUTF8)));
        cancel->setText(QApplication::translate("recipe_content_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("recipe_content_edit_form", "Edit recipe content..", 0, QApplication::UnicodeUTF8));
        ignore_expand_feats->setText(QApplication::translate("recipe_content_edit_form", "expand all", 0, QApplication::UnicodeUTF8));
        ignore_collapse_feats->setText(QApplication::translate("recipe_content_edit_form", "collapse all", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = category->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("recipe_content_edit_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("recipe_content_edit_form", "category", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = recipe->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("recipe_content_edit_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = recipe->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("recipe_content_edit_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = recipe->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("recipe_content_edit_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = recipe->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("recipe_content_edit_form", "creationDate", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = recipe->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("recipe_content_edit_form", "comment", 0, QApplication::UnicodeUTF8));
        label_requires->setText(QApplication::translate("recipe_content_edit_form", "Requires:", 0, QApplication::UnicodeUTF8));
        label_min_requires->setText(QApplication::translate("recipe_content_edit_form", "min.", 0, QApplication::UnicodeUTF8));
        label_max_requires->setText(QApplication::translate("recipe_content_edit_form", "max.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class recipe_content_edit_form: public Ui_recipe_content_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_CONTENT_EDIT_H
