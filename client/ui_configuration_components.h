/********************************************************************************
** Form generated from reading UI file 'configuration_components.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATION_COMPONENTS_H
#define UI_CONFIGURATION_COMPONENTS_H

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

class Ui_configuration_components_form
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
    QTableWidget *ConfigurationComponent;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QTableWidget *configuration;

    void setupUi(QWidget *configuration_components_form)
    {
        if (configuration_components_form->objectName().isEmpty())
            configuration_components_form->setObjectName(QString::fromUtf8("configuration_components_form"));
        configuration_components_form->resize(621, 411);
        gridLayout = new QGridLayout(configuration_components_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(configuration_components_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("configuration_component_add")));
        add->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(add);

        add_3 = new QPushButton(configuration_components_form);
        add_3->setObjectName(QString::fromUtf8("add_3"));
        add_3->setProperty("form", QVariant(QString::fromUtf8("configuration_component_edit")));
        add_3->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(add_3);

        add_2 = new QPushButton(configuration_components_form);
        add_2->setObjectName(QString::fromUtf8("add_2"));
        add_2->setProperty("form", QVariant(QString::fromUtf8("configuration_components")));
        add_2->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));
        add_2->setProperty("doctype", QVariant(QString::fromUtf8("ConfigurationComponent.simpleform")));
        add_2->setProperty("rootelement", QVariant(QString::fromUtf8("ConfigurationComponent")));
        add_2->setProperty("action", QVariant(QString::fromUtf8("delete")));

        horizontalLayout->addWidget(add_2);

        reload_2 = new QPushButton(configuration_components_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("configurations")));
        reload_2->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(reload_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(configuration_components_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(configuration_components_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/link.png")));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(configuration_components_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(32, 32));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/bricks.png")));

        horizontalLayout_2->addWidget(label_4);

        label = new QLabel(configuration_components_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        ConfigurationComponent = new QTableWidget(configuration_components_form);
        if (ConfigurationComponent->columnCount() < 3)
            ConfigurationComponent->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ConfigurationComponent->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ConfigurationComponent->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ConfigurationComponent->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        ConfigurationComponent->setObjectName(QString::fromUtf8("ConfigurationComponent"));
        ConfigurationComponent->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ConfigurationComponent->setSelectionMode(QAbstractItemView::SingleSelection);
        ConfigurationComponent->setSelectionBehavior(QAbstractItemView::SelectRows);
        ConfigurationComponent->setProperty("action", QVariant(QString::fromUtf8("read")));

        gridLayout_2->addWidget(ConfigurationComponent, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(configuration_components_form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);

        horizontalLayout_4->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        configuration = new QTableWidget(configuration_components_form);
        if (configuration->columnCount() < 4)
            configuration->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(3, __qtablewidgetitem6);
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

        gridLayout_2->addWidget(configuration, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        QWidget::setTabOrder(ConfigurationComponent, pushButton);
        QWidget::setTabOrder(pushButton, add);
        QWidget::setTabOrder(add, add_3);
        QWidget::setTabOrder(add_3, add_2);
        QWidget::setTabOrder(add_2, reload_2);

        retranslateUi(configuration_components_form);
        QObject::connect(ConfigurationComponent, SIGNAL(doubleClicked(QModelIndex)), add_3, SLOT(click()));
        QObject::connect(configuration, SIGNAL(itemSelectionChanged()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(configuration_components_form);
    } // setupUi

    void retranslateUi(QWidget *configuration_components_form)
    {
        configuration_components_form->setWindowTitle(QApplication::translate("configuration_components_form", "Configuration components", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("configuration_components_form", "Add", 0, QApplication::UnicodeUTF8));
        add->setProperty("global.config_id", QVariant(QApplication::translate("configuration_components_form", "{configuration.id}", 0, QApplication::UnicodeUTF8)));
        add->setProperty("global.ConfigurationComponentState", QVariant(QApplication::translate("configuration_components_form", "{ConfigurationComponent.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setText(QApplication::translate("configuration_components_form", "Edit", 0, QApplication::UnicodeUTF8));
        add_3->setProperty("global.config_id", QVariant(QApplication::translate("configuration_components_form", "{configuration.id}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.ConfigurationComponentState", QVariant(QApplication::translate("configuration_components_form", "{ConfigurationComponent.state}", 0, QApplication::UnicodeUTF8)));
        add_3->setProperty("global.component_id", QVariant(QApplication::translate("configuration_components_form", "{ConfigurationComponent.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setText(QApplication::translate("configuration_components_form", "Delete", 0, QApplication::UnicodeUTF8));
        add_2->setProperty("global.ConfigurationComponentState", QVariant(QApplication::translate("configuration_components_form", "{ConfigurationComponent.state}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("config_id", QVariant(QApplication::translate("configuration_components_form", "{configuration.id}", 0, QApplication::UnicodeUTF8)));
        add_2->setProperty("component_id", QVariant(QApplication::translate("configuration_components_form", "{ConfigurationComponent.id}", 0, QApplication::UnicodeUTF8)));
        reload_2->setText(QApplication::translate("configuration_components_form", "Back to manage configurations", 0, QApplication::UnicodeUTF8));
        reload_2->setProperty("global.ConfigurationComponentState", QVariant(QApplication::translate("configuration_components_form", "{ConfigurationComponent.state}", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QApplication::translate("configuration_components_form", "Configuration and their components", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = ConfigurationComponent->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("configuration_components_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = ConfigurationComponent->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("configuration_components_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = ConfigurationComponent->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("configuration_components_form", "quantity", 0, QApplication::UnicodeUTF8));
        ConfigurationComponent->setProperty("doctype", QVariant(QApplication::translate("configuration_components_form", "ConfigurationComponentListRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        ConfigurationComponent->setProperty("rootelement", QVariant(QApplication::translate("configuration_components_form", "ConfigurationComponent", 0, QApplication::UnicodeUTF8)));
        ConfigurationComponent->setProperty("state", QVariant(QApplication::translate("configuration_components_form", "{global.ConfigurationComponentState}", 0, QApplication::UnicodeUTF8)));
        ConfigurationComponent->setProperty("config_id", QVariant(QApplication::translate("configuration_components_form", "{configuration.id}", 0, QApplication::UnicodeUTF8)));
        pushButton->setText(QApplication::translate("configuration_components_form", "Show", 0, QApplication::UnicodeUTF8));
        pushButton->setProperty("action", QVariant(QApplication::translate("configuration_components_form", "ConfigurationComponent.reload", 0, QApplication::UnicodeUTF8)));
        QTableWidgetItem *___qtablewidgetitem3 = configuration->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("configuration_components_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = configuration->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("configuration_components_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = configuration->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("configuration_components_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = configuration->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("configuration_components_form", "comment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class configuration_components_form: public Ui_configuration_components_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATION_COMPONENTS_H
