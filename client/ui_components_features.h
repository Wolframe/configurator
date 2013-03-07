/********************************************************************************
** Form generated from reading UI file 'components_features.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTS_FEATURES_H
#define UI_COMPONENTS_FEATURES_H

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

class Ui_components_features_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *add_3;
    QPushButton *add_2;
    //~ QPushButton *reload_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *ComponentFeature;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QTableWidget *component;

    void setupUi(QWidget *components_features_form)
    {
        if (components_features_form->objectName().isEmpty())
            components_features_form->setObjectName(QString::fromUtf8("components_features_form"));
        components_features_form->resize(621, 411);
        gridLayout = new QGridLayout(components_features_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(components_features_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("components_features_add")));
        add->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        horizontalLayout->addWidget(add);

        add_3 = new QPushButton(components_features_form);
        add_3->setObjectName(QString::fromUtf8("add_3"));
        add_3->setProperty("form", QVariant(QString::fromUtf8("components_features_edit")));
        add_3->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        horizontalLayout->addWidget(add_3);

        add_2 = new QPushButton(components_features_form);
        add_2->setObjectName(QString::fromUtf8("add_2"));
        add_2->setProperty("form", QVariant(QString::fromUtf8("components_features")));
        add_2->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));
        add_2->setProperty("doctype", QVariant(QString::fromUtf8("ComponentFeature.simpleform")));
        add_2->setProperty("rootelement", QVariant(QString::fromUtf8("ComponentFeature")));
        add_2->setProperty("action", QVariant(QString::fromUtf8("delete")));

        horizontalLayout->addWidget(add_2);

        //~ reload_2 = new QPushButton(components_features_form);
        //~ reload_2->setObjectName(QString::fromUtf8("reload_2"));
        //~ reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        //~ reload_2->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        //~ horizontalLayout->addWidget(reload_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(components_features_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/bricks.png")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(components_features_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(components_features_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/chart_organisation.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(components_features_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        ComponentFeature = new QTableWidget(components_features_form);
        if (ComponentFeature->columnCount() < 5)
            ComponentFeature->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ComponentFeature->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ComponentFeature->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ComponentFeature->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ComponentFeature->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ComponentFeature->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        ComponentFeature->setObjectName(QString::fromUtf8("ComponentFeature"));
        ComponentFeature->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ComponentFeature->setSelectionMode(QAbstractItemView::SingleSelection);
        ComponentFeature->setSelectionBehavior(QAbstractItemView::SelectRows);
        ComponentFeature->setProperty("action", QVariant(QString::fromUtf8("read")));

        gridLayout_2->addWidget(ComponentFeature, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(components_features_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);

        horizontalLayout_4->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        component = new QTableWidget(components_features_form);
        if (component->columnCount() < 8)
            component->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        component->setHorizontalHeaderItem(7, __qtablewidgetitem12);
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

        QWidget::setTabOrder(ComponentFeature, pushButton);
        QWidget::setTabOrder(pushButton, add);
        QWidget::setTabOrder(add, add_3);
        QWidget::setTabOrder(add_3, add_2);
        //~ QWidget::setTabOrder(add_2, reload_2);

        retranslateUi(components_features_form);
        QObject::connect(ComponentFeature, SIGNAL(doubleClicked(QModelIndex)), add_3, SLOT(click()));
        QObject::connect(component, SIGNAL(itemSelectionChanged()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(components_features_form);
    } // setupUi

    void retranslateUi(QWidget *components_features_form)
    {
        components_features_form->setWindowTitle(QApplication::translate("components_features_form", "Link components and features", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("components_features_form", "Add", 0, QApplication::UnicodeUTF8));
        add->setProperty("global.component_id", QVariant(QApplication::translate("components_features_form", "{component.id}", 0, QApplication::UnicodeUTF8)));
        add->setProperty("global.ComponentFeatureState", QVariant(QApplication::translate("components_features_form", "{ComponentFeature.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setText(QApplication::translate("components_features_form", "Edit", 0, QApplication::UnicodeUTF8));
        add_3->setProperty("global.component_id", QVariant(QApplication::translate("components_features_form", "{component.id}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.ComponentFeatureState", QVariant(QApplication::translate("components_features_form", "{ComponentFeature.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.feature_id", QVariant(QApplication::translate("components_features_form", "{ComponentFeature.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setText(QApplication::translate("components_features_form", "Delete", 0, QApplication::UnicodeUTF8));
        add_2->setProperty("global.ComponentFeatureState", QVariant(QApplication::translate("components_features_form", "{ComponentFeature.state}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("component_id", QVariant(QApplication::translate("components_features_form", "{component.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("feature_id", QVariant(QApplication::translate("components_features_form", "{ComponentFeature.id}", 0, QApplication::UnicodeUTF8)));
        //~ reload_2->setText(QApplication::translate("components_features_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        //~ reload_2->setProperty("global.ComponentFeatureState", QVariant(QApplication::translate("components_features_form", "{ComponentFeature.state}", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("components_features_form", "Link components and features", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = ComponentFeature->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("components_features_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = ComponentFeature->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("components_features_form", "min_requires", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = ComponentFeature->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("components_features_form", "max_requires", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = ComponentFeature->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("components_features_form", "min_provides", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = ComponentFeature->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("components_features_form", "max_provides", 0, QApplication::UnicodeUTF8));
        ComponentFeature->setProperty("doctype", QVariant(QApplication::translate("components_features_form", "ComponentFeatureListRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        ComponentFeature->setProperty("rootelement", QVariant(QApplication::translate("components_features_form", "ComponentFeature", 0, QApplication::UnicodeUTF8)));
        ComponentFeature->setProperty("state", QVariant(QApplication::translate("components_features_form", "{global.ComponentFeatureState}", 0, QApplication::UnicodeUTF8)));
        ComponentFeature->setProperty("component_id", QVariant(QApplication::translate("components_features_form", "{component.id}", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("components_features_form", "Show", 0, QApplication::UnicodeUTF8));
        pushButton->setProperty("action", QVariant(QApplication::translate("components_features_form", "ComponentFeature.reload", 0, QApplication::UnicodeUTF8)));
        QTableWidgetItem *___qtablewidgetitem5 = component->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("components_features_form", "code", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = component->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("components_features_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = component->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("components_features_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = component->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("components_features_form", "manufacturerName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = component->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("components_features_form", "mfgCode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = component->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("components_features_form", "webPage", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = component->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("components_features_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = component->horizontalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("components_features_form", "price", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class components_features_form: public Ui_components_features_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTS_FEATURES_H
