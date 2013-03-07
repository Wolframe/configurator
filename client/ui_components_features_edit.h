/********************************************************************************
** Form generated from reading UI file 'components_features_edit.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTS_FEATURES_EDIT_H
#define UI_COMPONENTS_FEATURES_EDIT_H

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

class Ui_components_features_edit_form
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
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *component;
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

    void setupUi(QWidget *components_features_edit_form)
    {
        if (components_features_edit_form->objectName().isEmpty())
            components_features_edit_form->setObjectName(QString::fromUtf8("components_features_edit_form"));
        components_features_edit_form->resize(538, 387);
        components_features_edit_form->setProperty("rootelement", QVariant(QString::fromUtf8("ComponentFeature")));
        components_features_edit_form->setProperty("component_id", QVariant(QString::fromUtf8("{global.component_id}")));
        components_features_edit_form->setProperty("feature_id", QVariant(QString::fromUtf8("{global.feature_id}")));
        gridLayout = new QGridLayout(components_features_edit_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        link = new QPushButton(components_features_edit_form);
        link->setObjectName(QString::fromUtf8("link"));
        link->setProperty("form", QVariant(QString::fromUtf8("components_features")));
        link->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));
        link->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));
        link->setProperty("global.component_id", QVariant(QString::fromUtf8("{component.id}")));
        link->setProperty("global.feature_id", QVariant(QString::fromUtf8("{feature.id}")));
        link->setProperty("doctype", QVariant(QString::fromUtf8("ComponentFeature.simpleform")));
        link->setProperty("rootelement", QVariant(QString::fromUtf8("ComponentFeature")));

        horizontalLayout->addWidget(link);

        pushButton = new QPushButton(components_features_edit_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        cancel = new QPushButton(components_features_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("components_features")));
        cancel->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));
        cancel->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));

        horizontalLayout->addWidget(cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(components_features_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/bricks.png")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(components_features_edit_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link_edit.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(components_features_edit_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/chart_organisation.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(components_features_edit_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ignore_expand_feats = new QRadioButton(components_features_edit_form);
        ignore_expand_feats->setObjectName(QString::fromUtf8("ignore_expand_feats"));

        horizontalLayout_4->addWidget(ignore_expand_feats);

        ignore_collapse_feats = new QRadioButton(components_features_edit_form);
        ignore_collapse_feats->setObjectName(QString::fromUtf8("ignore_collapse_feats"));

        horizontalLayout_4->addWidget(ignore_collapse_feats);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        feature = new QTreeWidget(components_features_edit_form);
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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        component = new QTableWidget(components_features_edit_form);
        if (component->columnCount() < 8)
            component->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        component->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        component->setObjectName(QString::fromUtf8("component"));
        component->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        component->setAlternatingRowColors(true);
        component->setSelectionMode(QAbstractItemView::SingleSelection);
        component->setSelectionBehavior(QAbstractItemView::SelectRows);
        component->setShowGrid(true);
        component->setGridStyle(Qt::DotLine);
        component->setSortingEnabled(true);
        component->setProperty("doctype", QVariant(QString::fromUtf8("ComponentListRequest.simpleform")));
        component->setProperty("rootelement", QVariant(QString::fromUtf8("component")));
        component->setProperty("state", QVariant(QString::fromUtf8("{global.componentState}")));
        component->setProperty("action", QVariant(QString::fromUtf8("read")));
        component->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        component->verticalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(component, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_requires = new QLabel(components_features_edit_form);
        label_requires->setObjectName(QString::fromUtf8("label_requires"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_requires);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_min_requires = new QLabel(components_features_edit_form);
        label_min_requires->setObjectName(QString::fromUtf8("label_min_requires"));

        horizontalLayout_5->addWidget(label_min_requires);

        min_requires = new QSpinBox(components_features_edit_form);
        min_requires->setObjectName(QString::fromUtf8("min_requires"));

        horizontalLayout_5->addWidget(min_requires);

        label_max_requires = new QLabel(components_features_edit_form);
        label_max_requires->setObjectName(QString::fromUtf8("label_max_requires"));

        horizontalLayout_5->addWidget(label_max_requires);

        max_requires = new QSpinBox(components_features_edit_form);
        max_requires->setObjectName(QString::fromUtf8("max_requires"));

        horizontalLayout_5->addWidget(max_requires);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);

        label_7 = new QLabel(components_features_edit_form);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_min_provides = new QLabel(components_features_edit_form);
        label_min_provides->setObjectName(QString::fromUtf8("label_min_provides"));

        horizontalLayout_6->addWidget(label_min_provides);

        min_provides = new QSpinBox(components_features_edit_form);
        min_provides->setObjectName(QString::fromUtf8("min_provides"));

        horizontalLayout_6->addWidget(min_provides);

        label_max_provides = new QLabel(components_features_edit_form);
        label_max_provides->setObjectName(QString::fromUtf8("label_max_provides"));

        horizontalLayout_6->addWidget(label_max_provides);

        max_provides = new QSpinBox(components_features_edit_form);
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
        QWidget::setTabOrder(feature, ignore_expand_feats);
        QWidget::setTabOrder(ignore_expand_feats, ignore_collapse_feats);
        QWidget::setTabOrder(ignore_collapse_feats, min_requires);
        QWidget::setTabOrder(min_requires, max_requires);
        QWidget::setTabOrder(max_requires, min_provides);
        QWidget::setTabOrder(min_provides, max_provides);
        QWidget::setTabOrder(max_provides, link);
        QWidget::setTabOrder(link, cancel);

        retranslateUi(components_features_edit_form);
        QObject::connect(ignore_expand_feats, SIGNAL(clicked()), feature, SLOT(expandAll()));
        QObject::connect(ignore_collapse_feats, SIGNAL(clicked()), feature, SLOT(collapseAll()));

        QMetaObject::connectSlotsByName(components_features_edit_form);
    } // setupUi

    void retranslateUi(QWidget *components_features_edit_form)
    {
        components_features_edit_form->setWindowTitle(QApplication::translate("components_features_edit_form", "Edit a component/feature link", 0, QApplication::UnicodeUTF8));
        components_features_edit_form->setProperty("initAction", QVariant(QApplication::translate("components_features_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        components_features_edit_form->setProperty("doctype", QVariant(QApplication::translate("components_features_edit_form", "ComponentFeatureRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        link->setText(QApplication::translate("components_features_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        link->setProperty("action", QVariant(QApplication::translate("components_features_edit_form", "create", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("components_features_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        pushButton->setProperty("action", QVariant(QApplication::translate("components_features_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("doctype", QVariant(QApplication::translate("components_features_edit_form", "ComponentFeatureRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("rootelement", QVariant(QApplication::translate("components_features_edit_form", "ComponentFeature", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("component_id", QVariant(QApplication::translate("components_features_edit_form", "{global.component_id}", 0, QApplication::UnicodeUTF8)));
        pushButton->setProperty("feature_id", QVariant(QApplication::translate("components_features_edit_form", "{global.feature_id}", 0, QApplication::UnicodeUTF8)));
        cancel->setText(QApplication::translate("components_features_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("components_features_edit_form", "Edit a link of component and feature..", 0, QApplication::UnicodeUTF8));
        ignore_expand_feats->setText(QApplication::translate("components_features_edit_form", "expand all", 0, QApplication::UnicodeUTF8));
        ignore_collapse_feats->setText(QApplication::translate("components_features_edit_form", "collapse all", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = feature->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("components_features_edit_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("components_features_edit_form", "feature", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = component->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("components_features_edit_form", "code", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = component->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("components_features_edit_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = component->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("components_features_edit_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = component->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("components_features_edit_form", "manufacturerName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = component->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("components_features_edit_form", "mfgCode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = component->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("components_features_edit_form", "webPage", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = component->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("components_features_edit_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = component->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("components_features_edit_form", "price", 0, QApplication::UnicodeUTF8));
        label_requires->setText(QApplication::translate("components_features_edit_form", "Requires:", 0, QApplication::UnicodeUTF8));
        label_min_requires->setText(QApplication::translate("components_features_edit_form", "min.", 0, QApplication::UnicodeUTF8));
        label_max_requires->setText(QApplication::translate("components_features_edit_form", "max.", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("components_features_edit_form", "Provides:", 0, QApplication::UnicodeUTF8));
        label_min_provides->setText(QApplication::translate("components_features_edit_form", "min.", 0, QApplication::UnicodeUTF8));
        label_max_provides->setText(QApplication::translate("components_features_edit_form", "max.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class components_features_edit_form: public Ui_components_features_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTS_FEATURES_EDIT_H
