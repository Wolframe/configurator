/********************************************************************************
** Form generated from reading UI file 'categories_features_edit.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIES_FEATURES_EDIT_H
#define UI_CATEGORIES_FEATURES_EDIT_H

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
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_categories_features_edit_form
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
    QTreeWidget *feature;
    QTreeWidget *category;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *ignore_expand_category;
    QRadioButton *ignore_collapse_cats;
    QFormLayout *formLayout;
    QLabel *label_requires;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_min_requires;
    QSpinBox *min_requires;
    QLabel *label_max_requires;
    QSpinBox *max_requires;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_min_provides;
    QSpinBox *min_provides;
    QLabel *label_max_provides;
    QSpinBox *max_provides;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *categories_features_edit_form)
    {
        if (categories_features_edit_form->objectName().isEmpty())
            categories_features_edit_form->setObjectName(QString::fromUtf8("categories_features_edit_form"));
        categories_features_edit_form->resize(538, 387);
        categories_features_edit_form->setProperty("rootelement", QVariant(QString::fromUtf8("CategoryFeature")));
        categories_features_edit_form->setProperty("category_id", QVariant(QString::fromUtf8("{global.category_id}")));
        categories_features_edit_form->setProperty("feature_id", QVariant(QString::fromUtf8("{global.feature_id}")));
        gridLayout = new QGridLayout(categories_features_edit_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        link = new QPushButton(categories_features_edit_form);
        link->setObjectName(QString::fromUtf8("link"));
        link->setProperty("form", QVariant(QString::fromUtf8("categories_features")));
        link->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));
        link->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));
        link->setProperty("global.category_id", QVariant(QString::fromUtf8("{category.id}")));
        link->setProperty("global.feature_id", QVariant(QString::fromUtf8("{feature.id}")));
        link->setProperty("doctype", QVariant(QString::fromUtf8("CategoryFeature.simpleform")));
        link->setProperty("rootelement", QVariant(QString::fromUtf8("CategoryFeature")));

        horizontalLayout->addWidget(link);

        pushButton = new QPushButton(categories_features_edit_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        cancel = new QPushButton(categories_features_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("categories_features")));
        cancel->setProperty("global.categoryState", QVariant(QString::fromUtf8("{category.state}")));
        cancel->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));

        horizontalLayout->addWidget(cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(categories_features_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/folders.png")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(categories_features_edit_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link_edit.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(categories_features_edit_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/chart_organisation.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(categories_features_edit_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ignore_expand_feats = new QRadioButton(categories_features_edit_form);
        ignore_expand_feats->setObjectName(QString::fromUtf8("ignore_expand_feats"));

        horizontalLayout_4->addWidget(ignore_expand_feats);

        ignore_collapse_feats = new QRadioButton(categories_features_edit_form);
        ignore_collapse_feats->setObjectName(QString::fromUtf8("ignore_collapse_feats"));

        horizontalLayout_4->addWidget(ignore_collapse_feats);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        feature = new QTreeWidget(categories_features_edit_form);
        feature->setObjectName(QString::fromUtf8("feature"));
        feature->setEnabled(true);
        feature->setEditTriggers(QAbstractItemView::NoEditTriggers);
        feature->setSelectionMode(QAbstractItemView::SingleSelection);
        feature->setItemsExpandable(true);
        feature->setProperty("doctype", QVariant(QString::fromUtf8("FeatureHierarchyRequest.simpleform")));
        feature->setProperty("rootelement", QVariant(QString::fromUtf8("feature")));
        feature->setProperty("action", QVariant(QString::fromUtf8("read")));
        feature->header()->setDefaultSectionSize(200);

        gridLayout_2->addWidget(feature, 0, 1, 1, 1);

        category = new QTreeWidget(categories_features_edit_form);
        category->setObjectName(QString::fromUtf8("category"));
        category->setItemsExpandable(true);
        category->setProperty("doctype", QVariant(QString::fromUtf8("CategoryHierarchyRequest.simpleform")));
        category->setProperty("action", QVariant(QString::fromUtf8("read")));
        category->header()->setDefaultSectionSize(200);

        gridLayout_2->addWidget(category, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ignore_expand_category = new QRadioButton(categories_features_edit_form);
        ignore_expand_category->setObjectName(QString::fromUtf8("ignore_expand_category"));

        horizontalLayout_3->addWidget(ignore_expand_category);

        ignore_collapse_cats = new QRadioButton(categories_features_edit_form);
        ignore_collapse_cats->setObjectName(QString::fromUtf8("ignore_collapse_cats"));

        horizontalLayout_3->addWidget(ignore_collapse_cats);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_requires = new QLabel(categories_features_edit_form);
        label_requires->setObjectName(QString::fromUtf8("label_requires"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_requires);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_min_requires = new QLabel(categories_features_edit_form);
        label_min_requires->setObjectName(QString::fromUtf8("label_min_requires"));

        horizontalLayout_5->addWidget(label_min_requires);

        min_requires = new QSpinBox(categories_features_edit_form);
        min_requires->setObjectName(QString::fromUtf8("min_requires"));

        horizontalLayout_5->addWidget(min_requires);

        label_max_requires = new QLabel(categories_features_edit_form);
        label_max_requires->setObjectName(QString::fromUtf8("label_max_requires"));

        horizontalLayout_5->addWidget(label_max_requires);

        max_requires = new QSpinBox(categories_features_edit_form);
        max_requires->setObjectName(QString::fromUtf8("max_requires"));

        horizontalLayout_5->addWidget(max_requires);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);

        label_7 = new QLabel(categories_features_edit_form);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_min_provides = new QLabel(categories_features_edit_form);
        label_min_provides->setObjectName(QString::fromUtf8("label_min_provides"));

        horizontalLayout_6->addWidget(label_min_provides);

        min_provides = new QSpinBox(categories_features_edit_form);
        min_provides->setObjectName(QString::fromUtf8("min_provides"));

        horizontalLayout_6->addWidget(min_provides);

        label_max_provides = new QLabel(categories_features_edit_form);
        label_max_provides->setObjectName(QString::fromUtf8("label_max_provides"));

        horizontalLayout_6->addWidget(label_max_provides);

        max_provides = new QSpinBox(categories_features_edit_form);
        max_provides->setObjectName(QString::fromUtf8("max_provides"));

        horizontalLayout_6->addWidget(max_provides);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_6);


        gridLayout->addLayout(formLayout, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_min_requires->setBuddy(min_requires);
        label_max_requires->setBuddy(max_requires);
        label_min_provides->setBuddy(min_provides);
        label_max_provides->setBuddy(max_provides);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(category, ignore_expand_category);
        QWidget::setTabOrder(ignore_expand_category, ignore_collapse_cats);
        QWidget::setTabOrder(ignore_collapse_cats, feature);
        QWidget::setTabOrder(feature, ignore_expand_feats);
        QWidget::setTabOrder(ignore_expand_feats, ignore_collapse_feats);
        QWidget::setTabOrder(ignore_collapse_feats, min_requires);
        QWidget::setTabOrder(min_requires, max_requires);
        QWidget::setTabOrder(max_requires, min_provides);
        QWidget::setTabOrder(min_provides, max_provides);
        QWidget::setTabOrder(max_provides, link);
        QWidget::setTabOrder(link, cancel);

        retranslateUi(categories_features_edit_form);
        QObject::connect(ignore_expand_category, SIGNAL(clicked()), category, SLOT(expandAll()));
        QObject::connect(ignore_collapse_cats, SIGNAL(clicked()), category, SLOT(collapseAll()));
        QObject::connect(ignore_expand_feats, SIGNAL(clicked()), feature, SLOT(expandAll()));
        QObject::connect(ignore_collapse_feats, SIGNAL(clicked()), feature, SLOT(collapseAll()));

        QMetaObject::connectSlotsByName(categories_features_edit_form);
    } // setupUi

    void retranslateUi(QWidget *categories_features_edit_form)
    {
        categories_features_edit_form->setWindowTitle(QApplication::translate("categories_features_edit_form", "Edit a category/feature link", 0, QApplication::UnicodeUTF8));
        categories_features_edit_form->setProperty("initAction", QVariant(QApplication::translate("categories_features_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        categories_features_edit_form->setProperty("doctype", QVariant(QApplication::translate("categories_features_edit_form", "CategoryFeatureRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        link->setText(QApplication::translate("categories_features_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        link->setProperty("action", QVariant(QApplication::translate("categories_features_edit_form", "create", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("categories_features_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        pushButton->setProperty("action", QVariant(QApplication::translate("categories_features_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("doctype", QVariant(QApplication::translate("categories_features_edit_form", "CategoryFeatureRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("rootelement", QVariant(QApplication::translate("categories_features_edit_form", "CategoryFeature", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("category_id", QVariant(QApplication::translate("categories_features_edit_form", "{global.category_id}", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("feature_id", QVariant(QApplication::translate("categories_features_edit_form", "{global.feature_id}", 0, QApplication::UnicodeUTF8)));
        cancel->setText(QApplication::translate("categories_features_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("categories_features_edit_form", "New link of category and feature..", 0, QApplication::UnicodeUTF8));
        ignore_expand_feats->setText(QApplication::translate("categories_features_edit_form", "expand all", 0, QApplication::UnicodeUTF8));
        ignore_collapse_feats->setText(QApplication::translate("categories_features_edit_form", "collapse all", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = feature->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("categories_features_edit_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("categories_features_edit_form", "feature", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = category->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("categories_features_edit_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("categories_features_edit_form", "category", 0, QApplication::UnicodeUTF8));
        category->setProperty("rootelement", QVariant(QApplication::translate("categories_features_edit_form", "category", 0, QApplication::UnicodeUTF8)));
        ignore_expand_category->setText(QApplication::translate("categories_features_edit_form", "expand all", 0, QApplication::UnicodeUTF8));
        ignore_collapse_cats->setText(QApplication::translate("categories_features_edit_form", "collapse all", 0, QApplication::UnicodeUTF8));
        label_requires->setText(QApplication::translate("categories_features_edit_form", "Requires:", 0, QApplication::UnicodeUTF8));
        label_min_requires->setText(QApplication::translate("categories_features_edit_form", "min.", 0, QApplication::UnicodeUTF8));
        label_max_requires->setText(QApplication::translate("categories_features_edit_form", "max.", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("categories_features_edit_form", "Provides:", 0, QApplication::UnicodeUTF8));
        label_min_provides->setText(QApplication::translate("categories_features_edit_form", "min.", 0, QApplication::UnicodeUTF8));
        label_max_provides->setText(QApplication::translate("categories_features_edit_form", "max.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class categories_features_edit_form: public Ui_categories_features_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_FEATURES_EDIT_H
