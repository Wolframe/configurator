/********************************************************************************
** Form generated from reading UI file 'configuration_component_add.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATION_COMPONENT_ADD_H
#define UI_CONFIGURATION_COMPONENT_ADD_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_configuration_component_add_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *link;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QTableWidget *component;
    QTableWidget *configuration;
    QFormLayout *formLayout;
    QLabel *label_requires;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *quantity;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *configuration_component_add_form)
    {
        if (configuration_component_add_form->objectName().isEmpty())
            configuration_component_add_form->setObjectName(QString::fromUtf8("configuration_component_add_form"));
        configuration_component_add_form->resize(538, 320);
        gridLayout = new QGridLayout(configuration_component_add_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        link = new QPushButton(configuration_component_add_form);
        link->setObjectName(QString::fromUtf8("link"));
        link->setProperty("form", QVariant(QString::fromUtf8("configuration_components")));
        link->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));
        link->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));
        link->setProperty("global.config_id", QVariant(QString::fromUtf8("{configuration.id}")));
        link->setProperty("global.component_id", QVariant(QString::fromUtf8("{component.id}")));
        link->setProperty("doctype", QVariant(QString::fromUtf8("ConfigurationComponent.simpleform")));
        link->setProperty("rootelement", QVariant(QString::fromUtf8("ConfigurationComponent")));

        horizontalLayout->addWidget(link);

        cancel = new QPushButton(configuration_component_add_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("configuration_components")));
        cancel->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));
        cancel->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        horizontalLayout->addWidget(cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(configuration_component_add_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(configuration_component_add_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link_add.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(configuration_component_add_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/bricks.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(configuration_component_add_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        component = new QTableWidget(configuration_component_add_form);
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

        gridLayout_2->addWidget(component, 0, 1, 1, 1);

        configuration = new QTableWidget(configuration_component_add_form);
        if (configuration->columnCount() < 4)
            configuration->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        configuration->setObjectName(QString::fromUtf8("configuration"));
        configuration->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        configuration->setAlternatingRowColors(true);
        configuration->setSelectionMode(QAbstractItemView::SingleSelection);
        configuration->setSelectionBehavior(QAbstractItemView::SelectRows);
        configuration->setShowGrid(true);
        configuration->setGridStyle(Qt::DotLine);
        configuration->setSortingEnabled(true);
        configuration->setProperty("doctype", QVariant(QString::fromUtf8("ConfigurationListRequest.simpleform")));
        configuration->setProperty("rootelement", QVariant(QString::fromUtf8("configuration")));
        configuration->setProperty("state", QVariant(QString::fromUtf8("{global.configurationState}")));
        configuration->setProperty("action", QVariant(QString::fromUtf8("read")));
        configuration->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        configuration->verticalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(configuration, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_requires = new QLabel(configuration_component_add_form);
        label_requires->setObjectName(QString::fromUtf8("label_requires"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_requires);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        quantity = new QSpinBox(configuration_component_add_form);
        quantity->setObjectName(QString::fromUtf8("quantity"));

        horizontalLayout_5->addWidget(quantity);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);


        gridLayout->addLayout(formLayout, 3, 0, 1, 1);

        QWidget::setTabOrder(configuration, quantity);
        QWidget::setTabOrder(quantity, link);
        QWidget::setTabOrder(link, cancel);

        retranslateUi(configuration_component_add_form);

        QMetaObject::connectSlotsByName(configuration_component_add_form);
    } // setupUi

    void retranslateUi(QWidget *configuration_component_add_form)
    {
        configuration_component_add_form->setWindowTitle(QApplication::translate("configuration_component_add_form", "Add components of configuration", 0, QApplication::UnicodeUTF8));
        link->setText(QApplication::translate("configuration_component_add_form", "Add", 0, QApplication::UnicodeUTF8));
        link->setProperty("action", QVariant(QApplication::translate("configuration_component_add_form", "create", 0, QApplication::UnicodeUTF8)));
        cancel->setText(QApplication::translate("configuration_component_add_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("configuration_component_add_form", "Add components of configuration..", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = component->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("configuration_component_add_form", "code", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = component->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("configuration_component_add_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = component->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("configuration_component_add_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = component->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("configuration_component_add_form", "manufacturerName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = component->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("configuration_component_add_form", "mfgCode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = component->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("configuration_component_add_form", "webPage", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = component->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("configuration_component_add_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = component->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("configuration_component_add_form", "price", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = configuration->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("configuration_component_add_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = configuration->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("configuration_component_add_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = configuration->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("configuration_component_add_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = configuration->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("configuration_component_add_form", "comment", 0, QApplication::UnicodeUTF8));
        label_requires->setText(QApplication::translate("configuration_component_add_form", "Quantity:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class configuration_component_add_form: public Ui_configuration_component_add_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATION_COMPONENT_ADD_H
