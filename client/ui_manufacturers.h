/********************************************************************************
** Form generated from reading UI file 'manufacturers.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUFACTURERS_H
#define UI_MANUFACTURERS_H

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

class Ui_manufacturers_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *edit;
    //~ QPushButton *reload_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *manufacturer;

    void setupUi(QWidget *manufacturers_form)
    {
        if (manufacturers_form->objectName().isEmpty())
            manufacturers_form->setObjectName(QString::fromUtf8("manufacturers_form"));
        manufacturers_form->resize(556, 318);
        gridLayout = new QGridLayout(manufacturers_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(manufacturers_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("manufacturer_add")));
        add->setProperty("global.id", QVariant(QString::fromUtf8("{manufacturer.id}")));
        add->setProperty("global.manufacturerState", QVariant(QString::fromUtf8("{manufacturer.state}")));

        horizontalLayout->addWidget(add);

        delete_2 = new QPushButton(manufacturers_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Manufacturer.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("manufacturer")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("manufacturers")));
        delete_2->setProperty("global.manufacturerState", QVariant(QString::fromUtf8("{manufacturer.state}")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(manufacturers_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setProperty("form", QVariant(QString::fromUtf8("manufacturer_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{manufacturer.id}")));
        edit->setProperty("global.manufacturerState", QVariant(QString::fromUtf8("{manufacturer.state}")));

        horizontalLayout->addWidget(edit);

        //~ reload_2 = new QPushButton(manufacturers_form);
        //~ reload_2->setObjectName(QString::fromUtf8("reload_2"));
        //~ reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        //~ reload_2->setProperty("global.manufacturerState", QVariant(QString::fromUtf8("{manufacturer.state}")));

        //~ horizontalLayout->addWidget(reload_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(manufacturers_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(32, 32));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/building.png")));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(manufacturers_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        manufacturer = new QTableWidget(manufacturers_form);
        if (manufacturer->columnCount() < 3)
            manufacturer->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        manufacturer->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        manufacturer->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        manufacturer->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        manufacturer->setObjectName(QString::fromUtf8("manufacturer"));
        manufacturer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        manufacturer->setAlternatingRowColors(true);
        manufacturer->setSelectionMode(QAbstractItemView::SingleSelection);
        manufacturer->setSelectionBehavior(QAbstractItemView::SelectRows);
        manufacturer->setShowGrid(true);
        manufacturer->setGridStyle(Qt::DotLine);
        manufacturer->setSortingEnabled(true);
        manufacturer->setProperty("doctype", QVariant(QString::fromUtf8("ManufacturerListRequest.simpleform")));
        manufacturer->setProperty("rootelement", QVariant(QString::fromUtf8("manufacturer")));
        manufacturer->setProperty("state", QVariant(QString::fromUtf8("{global.manufacturerState}")));
        manufacturer->setProperty("action", QVariant(QString::fromUtf8("read")));
        manufacturer->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        manufacturer->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(manufacturer, 3, 0, 1, 1);

        QWidget::setTabOrder(manufacturer, add);
        QWidget::setTabOrder(add, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        //~ QWidget::setTabOrder(edit, reload_2);

        retranslateUi(manufacturers_form);
        QObject::connect(manufacturer, SIGNAL(cellDoubleClicked(int,int)), edit, SLOT(click()));

        QMetaObject::connectSlotsByName(manufacturers_form);
    } // setupUi

    void retranslateUi(QWidget *manufacturers_form)
    {
        manufacturers_form->setWindowTitle(QApplication::translate("manufacturers_form", "Manufacturers", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("manufacturers_form", "Add", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("manufacturers_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("manufacturers_form", "{manufacturer.id}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("manufacturers_form", "Edit", 0, QApplication::UnicodeUTF8));
        //~ reload_2->setText(QApplication::translate("manufacturers_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("manufacturers_form", "Manage manufacturers", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = manufacturer->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("manufacturers_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = manufacturer->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("manufacturers_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = manufacturer->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("manufacturers_form", "webPage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manufacturers_form: public Ui_manufacturers_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUFACTURERS_H
