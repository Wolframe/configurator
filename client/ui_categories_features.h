/********************************************************************************
** Form generated from reading UI file 'categories_features.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIES_FEATURES_H
#define UI_CATEGORIES_FEATURES_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_categories_features_form
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
    QRadioButton *ignore_expand_cats;
    QRadioButton *ignore_collapse_cats;
    QTableWidget *CategoryFeature;
    QTreeWidget *category;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *categories_features_form)
    {
        if (categories_features_form->objectName().isEmpty())
            categories_features_form->setObjectName(QString::fromUtf8("categories_features_form"));
        categories_features_form->resize(621, 411);
        gridLayout = new QGridLayout(categories_features_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(categories_features_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("categories_features_add")));
        add->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(add);

        add_3 = new QPushButton(categories_features_form);
        add_3->setObjectName(QString::fromUtf8("add_3"));
        add_3->setProperty("form", QVariant(QString::fromUtf8("categories_features_edit")));
        add_3->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(add_3);

        add_2 = new QPushButton(categories_features_form);
        add_2->setObjectName(QString::fromUtf8("add_2"));
        add_2->setProperty("form", QVariant(QString::fromUtf8("categories_features")));
        add_2->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));
        add_2->setProperty("doctype", QVariant(QString::fromUtf8("CategoryFeature.simpleform")));
        add_2->setProperty("rootelement", QVariant(QString::fromUtf8("CategoryFeature")));
        add_2->setProperty("action", QVariant(QString::fromUtf8("delete")));

        horizontalLayout->addWidget(add_2);

        reload_2 = new QPushButton(categories_features_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        reload_2->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));

        horizontalLayout->addWidget(reload_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(categories_features_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/folders.png")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(categories_features_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(categories_features_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/chart_organisation.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(categories_features_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ignore_expand_cats = new QRadioButton(categories_features_form);
        ignore_expand_cats->setObjectName(QString::fromUtf8("ignore_expand_cats"));

        horizontalLayout_3->addWidget(ignore_expand_cats);

        ignore_collapse_cats = new QRadioButton(categories_features_form);
        ignore_collapse_cats->setObjectName(QString::fromUtf8("ignore_collapse_cats"));

        horizontalLayout_3->addWidget(ignore_collapse_cats);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        CategoryFeature = new QTableWidget(categories_features_form);
        if (CategoryFeature->columnCount() < 5)
            CategoryFeature->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        CategoryFeature->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        CategoryFeature->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        CategoryFeature->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        CategoryFeature->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        CategoryFeature->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        CategoryFeature->setObjectName(QString::fromUtf8("CategoryFeature"));
        CategoryFeature->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CategoryFeature->setSelectionMode(QAbstractItemView::SingleSelection);
        CategoryFeature->setSelectionBehavior(QAbstractItemView::SelectRows);
        CategoryFeature->setProperty("action", QVariant(QString::fromUtf8("read")));

        gridLayout_2->addWidget(CategoryFeature, 0, 2, 1, 1);

        category = new QTreeWidget(categories_features_form);
        category->setObjectName(QString::fromUtf8("category"));
        category->setItemsExpandable(true);
        category->setProperty("doctype", QVariant(QString::fromUtf8("CategoryHierarchyRequest.simpleform")));
        category->setProperty("state", QVariant(QString::fromUtf8("{global.categoryState}")));
        category->setProperty("action", QVariant(QString::fromUtf8("read")));
        category->header()->setDefaultSectionSize(200);

        gridLayout_2->addWidget(category, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(categories_features_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);

        horizontalLayout_4->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        QWidget::setTabOrder(category, ignore_expand_cats);
        QWidget::setTabOrder(ignore_expand_cats, ignore_collapse_cats);
        QWidget::setTabOrder(ignore_collapse_cats, CategoryFeature);
        QWidget::setTabOrder(CategoryFeature, pushButton);
        QWidget::setTabOrder(pushButton, add);
        QWidget::setTabOrder(add, add_3);
        QWidget::setTabOrder(add_3, add_2);
        QWidget::setTabOrder(add_2, reload_2);

        retranslateUi(categories_features_form);
        QObject::connect(ignore_expand_cats, SIGNAL(clicked()), category, SLOT(expandAll()));
        QObject::connect(ignore_collapse_cats, SIGNAL(clicked()), category, SLOT(collapseAll()));
        QObject::connect(category, SIGNAL(itemSelectionChanged()), pushButton, SLOT(click()));
        QObject::connect(CategoryFeature, SIGNAL(doubleClicked(QModelIndex)), add_3, SLOT(click()));

        QMetaObject::connectSlotsByName(categories_features_form);
    } // setupUi

    void retranslateUi(QWidget *categories_features_form)
    {
        categories_features_form->setWindowTitle(QApplication::translate("categories_features_form", "Link categories and features", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("categories_features_form", "Add", 0, QApplication::UnicodeUTF8));
        add->setProperty("global.category_id", QVariant(QApplication::translate("categories_features_form", "{category.id}", 0, QApplication::UnicodeUTF8)));
        add->setProperty("global.CategoryFeatureState", QVariant(QApplication::translate("categories_features_form", "{CategoryFeature.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setText(QApplication::translate("categories_features_form", "Edit", 0, QApplication::UnicodeUTF8));
        add_3->setProperty("global.category_id", QVariant(QApplication::translate("categories_features_form", "{category.id}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.CategoryFeatureState", QVariant(QApplication::translate("categories_features_form", "{CategoryFeature.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.feature_id", QVariant(QApplication::translate("categories_features_form", "{CategoryFeature.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setText(QApplication::translate("categories_features_form", "Delete", 0, QApplication::UnicodeUTF8));
        add_2->setProperty("global.CategoryFeatureState", QVariant(QApplication::translate("categories_features_form", "{CategoryFeature.state}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("category_id", QVariant(QApplication::translate("categories_features_form", "{category.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("feature_id", QVariant(QApplication::translate("categories_features_form", "{CategoryFeature.id}", 0, QApplication::UnicodeUTF8)));
        reload_2->setText(QApplication::translate("categories_features_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        reload_2->setProperty("global.CategoryFeatureState", QVariant(QApplication::translate("categories_features_form", "{CategoryFeature.state}", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("categories_features_form", "Link categories and features", 0, QApplication::UnicodeUTF8));
        ignore_expand_cats->setText(QApplication::translate("categories_features_form", "expand all", 0, QApplication::UnicodeUTF8));
        ignore_collapse_cats->setText(QApplication::translate("categories_features_form", "collapse all", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = CategoryFeature->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("categories_features_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = CategoryFeature->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("categories_features_form", "min_requires", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = CategoryFeature->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("categories_features_form", "max_requires", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = CategoryFeature->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("categories_features_form", "min_provides", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = CategoryFeature->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("categories_features_form", "max_provides", 0, QApplication::UnicodeUTF8));
        CategoryFeature->setProperty("doctype", QVariant(QApplication::translate("categories_features_form", "CategoryFeatureListRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        CategoryFeature->setProperty("rootelement", QVariant(QApplication::translate("categories_features_form", "CategoryFeature", 0, QApplication::UnicodeUTF8)));
        CategoryFeature->setProperty("state", QVariant(QApplication::translate("categories_features_form", "{global.CategoryFeatureState}", 0, QApplication::UnicodeUTF8)));
        CategoryFeature->setProperty("category_id", QVariant(QApplication::translate("categories_features_form", "{category.id}", 0, QApplication::UnicodeUTF8)));
        QTreeWidgetItem *___qtreewidgetitem = category->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("categories_features_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("categories_features_form", "category", 0, QApplication::UnicodeUTF8));
        category->setProperty("rootelement", QVariant(QApplication::translate("categories_features_form", "category", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("categories_features_form", "Show", 0, QApplication::UnicodeUTF8));
        pushButton->setProperty("action", QVariant(QApplication::translate("categories_features_form", "CategoryFeature.reload", 0, QApplication::UnicodeUTF8)));
    } // retranslateUi

};

namespace Ui {
    class categories_features_form: public Ui_categories_features_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_FEATURES_H
