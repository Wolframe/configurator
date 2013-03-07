/********************************************************************************
** Form generated from reading UI file 'manufacturer_add.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUFACTURER_ADD_H
#define UI_MANUFACTURER_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manufacturer_add_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_description;
    QLineEdit *webPage;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *search;
    QPushButton *searchButton;
    QLabel *label_picture;
    QTableWidget *picture;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QPushButton *cancel;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *manufacturer_add_form)
    {
        if (manufacturer_add_form->objectName().isEmpty())
            manufacturer_add_form->setObjectName(QString::fromUtf8("manufacturer_add_form"));
        manufacturer_add_form->resize(342, 294);
        formLayout = new QFormLayout(manufacturer_add_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_name = new QLabel(manufacturer_add_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(manufacturer_add_form);
        name->setObjectName(QString::fromUtf8("name"));
        name->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_description = new QLabel(manufacturer_add_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_description);

        webPage = new QLineEdit(manufacturer_add_form);
        webPage->setObjectName(QString::fromUtf8("webPage"));

        formLayout->setWidget(2, QFormLayout::FieldRole, webPage);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_2 = new QLabel(manufacturer_add_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        search = new QLineEdit(manufacturer_add_form);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_3->addWidget(search);

        searchButton = new QPushButton(manufacturer_add_form);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setProperty("global.searchState", QVariant(QString::fromUtf8("{search.state}")));
        searchButton->setProperty("action", QVariant(QString::fromUtf8("picture.reload")));

        horizontalLayout_3->addWidget(searchButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        label_picture = new QLabel(manufacturer_add_form);
        label_picture->setObjectName(QString::fromUtf8("label_picture"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_picture);

        picture = new QTableWidget(manufacturer_add_form);
        if (picture->columnCount() < 4)
            picture->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        picture->setAlternatingRowColors(true);
        picture->setSelectionMode(QAbstractItemView::SingleSelection);
        picture->setSelectionBehavior(QAbstractItemView::SelectRows);
        picture->setShowGrid(true);
        picture->setGridStyle(Qt::DotLine);
        picture->setSortingEnabled(true);
        picture->setProperty("doctype", QVariant(QString::fromUtf8("PictureListRequest.simpleform")));
        picture->setProperty("rootelement", QVariant(QString::fromUtf8("picture")));
        picture->setProperty("search", QVariant(QString::fromUtf8("{search.text}")));
        picture->setProperty("action", QVariant(QString::fromUtf8("read")));
        picture->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        picture->verticalHeader()->setStretchLastSection(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, picture);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(manufacturer_add_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("rootelement", QVariant(QString::fromUtf8("manufacturer")));
        add->setProperty("doctype", QVariant(QString::fromUtf8("Manufacturer.simpleform")));
        add->setProperty("action", QVariant(QString::fromUtf8("create")));
        add->setProperty("form", QVariant(QString::fromUtf8("manufacturers")));

        horizontalLayout->addWidget(add);

        cancel = new QPushButton(manufacturer_add_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("manufacturers")));

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout);

        label = new QLabel(manufacturer_add_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/building_add.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_3 = new QLabel(manufacturer_add_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_3);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(name);
        label_description->setBuddy(webPage);
        label_picture->setBuddy(picture);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, webPage);
        QWidget::setTabOrder(webPage, search);
        QWidget::setTabOrder(search, searchButton);
        QWidget::setTabOrder(searchButton, picture);
        QWidget::setTabOrder(picture, add);
        QWidget::setTabOrder(add, cancel);

        retranslateUi(manufacturer_add_form);
        QObject::connect(search, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        QMetaObject::connectSlotsByName(manufacturer_add_form);
    } // setupUi

    void retranslateUi(QWidget *manufacturer_add_form)
    {
        manufacturer_add_form->setWindowTitle(QApplication::translate("manufacturer_add_form", "Add manufacturer", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("manufacturer_add_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_description->setText(QApplication::translate("manufacturer_add_form", "Webpage:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("manufacturer_add_form", "Filter pictures by:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("manufacturer_add_form", "Search..", 0, QApplication::UnicodeUTF8));
        label_picture->setText(QApplication::translate("manufacturer_add_form", "Logo:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = picture->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("manufacturer_add_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = picture->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("manufacturer_add_form", "caption", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = picture->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("manufacturer_add_form", "info", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = picture->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("manufacturer_add_form", "tags", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("manufacturer_add_form", "Add", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("manufacturer_add_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("manufacturer_add_form", "Add manufacturer..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manufacturer_add_form: public Ui_manufacturer_add_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUFACTURER_ADD_H
