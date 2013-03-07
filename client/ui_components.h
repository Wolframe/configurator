/********************************************************************************
** Form generated from reading UI file 'components.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTS_H
#define UI_COMPONENTS_H

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

class Ui_components_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *edit;
    //~ QPushButton *reload_2;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *component;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *components_form)
    {
        if (components_form->objectName().isEmpty())
            components_form->setObjectName(QString::fromUtf8("components_form"));
        components_form->resize(556, 318);
        gridLayout = new QGridLayout(components_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(components_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("component_add")));
        add->setProperty("global.id", QVariant(QString::fromUtf8("{component.id}")));
        add->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        horizontalLayout->addWidget(add);

        delete_2 = new QPushButton(components_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Component.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("component")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("components")));
        delete_2->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(components_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setProperty("form", QVariant(QString::fromUtf8("component_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{component.id}")));
        edit->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        horizontalLayout->addWidget(edit);

        //~ reload_2 = new QPushButton(components_form);
        //~ reload_2->setObjectName(QString::fromUtf8("reload_2"));
        //~ reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        //~ reload_2->setProperty("global.componentState", QVariant(QString::fromUtf8("{component.state}")));

        //~ horizontalLayout->addWidget(reload_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        component = new QTableWidget(components_form);
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

        gridLayout->addWidget(component, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(components_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/bricks.png")));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(components_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(component, add);
        QWidget::setTabOrder(add, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        //~ QWidget::setTabOrder(edit, reload_2);

        retranslateUi(components_form);
        QObject::connect(component, SIGNAL(cellDoubleClicked(int,int)), edit, SLOT(click()));

        QMetaObject::connectSlotsByName(components_form);
    } // setupUi

    void retranslateUi(QWidget *components_form)
    {
        components_form->setWindowTitle(QApplication::translate("components_form", "Components", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("components_form", "Add", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("components_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("components_form", "{component.id}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("components_form", "Edit", 0, QApplication::UnicodeUTF8));
        //~ reload_2->setText(QApplication::translate("components_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = component->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("components_form", "code", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = component->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("components_form", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = component->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("components_form", "categoryName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = component->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("components_form", "manufacturerName", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = component->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("components_form", "mfgCode", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = component->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("components_form", "webPage", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = component->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("components_form", "description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = component->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("components_form", "price", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("components_form", "Manage components", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class components_form: public Ui_components_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTS_H
