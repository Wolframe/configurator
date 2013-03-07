/********************************************************************************
** Form generated from reading UI file 'configurations.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONS_H
#define UI_CONFIGURATIONS_H

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

class Ui_configurations_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *edit_2;
    QPushButton *edit_3;
    //~ QPushButton *reload_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QTableWidget *configuration;

    void setupUi(QWidget *configurations_form)
    {
        if (configurations_form->objectName().isEmpty())
            configurations_form->setObjectName(QString::fromUtf8("configurations_form"));
        configurations_form->resize(556, 318);
        gridLayout = new QGridLayout(configurations_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(configurations_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("configuration_add")));
        add->setProperty("global.id", QVariant(QString::fromUtf8("{configuration.id}")));
        add->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(add);

        delete_2 = new QPushButton(configurations_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Configuration.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("configuration")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("configurations")));
        delete_2->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(configurations_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setProperty("form", QVariant(QString::fromUtf8("configuration_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{configuration.id}")));
        edit->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(edit);

        edit_2 = new QPushButton(configurations_form);
        edit_2->setObjectName(QString::fromUtf8("edit_2"));
        edit_2->setProperty("form", QVariant(QString::fromUtf8("configuration_components")));
        edit_2->setProperty("global.id", QVariant(QString::fromUtf8("{configuration.id}")));
        edit_2->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(edit_2);

        edit_3 = new QPushButton(configurations_form);
        edit_3->setObjectName(QString::fromUtf8("edit_3"));
        edit_3->setProperty("form", QVariant(QString::fromUtf8("configuration_subconfigs")));
        edit_3->setProperty("global.id", QVariant(QString::fromUtf8("{configuration.id}")));
        edit_3->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        horizontalLayout->addWidget(edit_3);

        //~ reload_2 = new QPushButton(configurations_form);
        //~ reload_2->setObjectName(QString::fromUtf8("reload_2"));
        //~ reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        //~ reload_2->setProperty("global.configurationState", QVariant(QString::fromUtf8("{configuration.state}")));

        //~ horizontalLayout->addWidget(reload_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(configurations_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(configurations_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        configuration = new QTableWidget(configurations_form);
        if (configuration->columnCount() < 4)
            configuration->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        configuration->setHorizontalHeaderItem(3, __qtablewidgetitem3);
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

        gridLayout->addWidget(configuration, 1, 0, 1, 1);

        QWidget::setTabOrder(configuration, add);
        QWidget::setTabOrder(add, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        QWidget::setTabOrder(edit, edit_2);
        QWidget::setTabOrder(edit_2, edit_3);
        //~ QWidget::setTabOrder(edit_3, reload_2);

        retranslateUi(configurations_form);
        QObject::connect(configuration, SIGNAL(doubleClicked(QModelIndex)), edit, SLOT(click()));

        QMetaObject::connectSlotsByName(configurations_form);
    } // setupUi

    void retranslateUi(QWidget *configurations_form)
    {
        configurations_form->setWindowTitle(QApplication::translate("configurations_form", "Configurations", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("configurations_form", "Add", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("configurations_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("configurations_form", "{configuration.id}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("configurations_form", "Edit", 0, QApplication::UnicodeUTF8));
        edit_2->setText(QApplication::translate("configurations_form", "Manage Components", 0, QApplication::UnicodeUTF8));
        edit_3->setText(QApplication::translate("configurations_form", "Manage Subconfigs", 0, QApplication::UnicodeUTF8));
        //~ reload_2->setText(QApplication::translate("configurations_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("configurations_form", "Manage configurations", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = configuration->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("configurations_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = configuration->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("configurations_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = configuration->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("configurations_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = configuration->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("configurations_form", "comment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class configurations_form: public Ui_configurations_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONS_H
