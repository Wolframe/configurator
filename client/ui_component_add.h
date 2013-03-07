/********************************************************************************
** Form generated from reading UI file 'component_add.ui'
**
** Created: Thu Mar 7 08:48:29 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_ADD_H
#define UI_COMPONENT_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_component_add_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_code;
    QLineEdit *code;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_category;
    QTreeWidget *category;
    QLabel *label_manufacturer;
    QTableWidget *manufacturer;
    QLabel *label_mfgCode;
    QLineEdit *mfgCode;
    QLabel *label_description;
    QLineEdit *webPage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QPushButton *cancel;
    QLabel *label_description_2;
    QLineEdit *price;
    QLabel *label_price;
    QPlainTextEdit *description;
    QTableWidget *picture;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *search;
    QPushButton *searchButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QWidget *component_add_form)
    {
        if (component_add_form->objectName().isEmpty())
            component_add_form->setObjectName(QString::fromUtf8("component_add_form"));
        component_add_form->resize(460, 1004);
        formLayout = new QFormLayout(component_add_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_code = new QLabel(component_add_form);
        label_code->setObjectName(QString::fromUtf8("label_code"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_code);

        code = new QLineEdit(component_add_form);
        code->setObjectName(QString::fromUtf8("code"));
        code->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, code);

        label_name = new QLabel(component_add_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(component_add_form);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(2, QFormLayout::FieldRole, name);

        label_category = new QLabel(component_add_form);
        label_category->setObjectName(QString::fromUtf8("label_category"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_category);

        category = new QTreeWidget(component_add_form);
        category->setObjectName(QString::fromUtf8("category"));
        category->setSelectionMode(QAbstractItemView::SingleSelection);
        category->setHeaderHidden(false);
        category->setExpandsOnDoubleClick(false);
        category->setProperty("action", QVariant(QString::fromUtf8("read")));
        category->header()->setDefaultSectionSize(200);

        formLayout->setWidget(3, QFormLayout::FieldRole, category);

        label_manufacturer = new QLabel(component_add_form);
        label_manufacturer->setObjectName(QString::fromUtf8("label_manufacturer"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_manufacturer);

        manufacturer = new QTableWidget(component_add_form);
        if (manufacturer->columnCount() < 2)
            manufacturer->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        manufacturer->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        manufacturer->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        manufacturer->setObjectName(QString::fromUtf8("manufacturer"));
        manufacturer->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        manufacturer->setAlternatingRowColors(true);
        manufacturer->setSelectionMode(QAbstractItemView::SingleSelection);
        manufacturer->setSelectionBehavior(QAbstractItemView::SelectRows);
        manufacturer->setShowGrid(true);
        manufacturer->setGridStyle(Qt::DotLine);
        manufacturer->setSortingEnabled(true);
        manufacturer->setProperty("doctype", QVariant(QString::fromUtf8("ManufacturerListRequest.simpleform")));
        manufacturer->setProperty("rootelement", QVariant(QString::fromUtf8("manufacturer")));
        manufacturer->setProperty("action", QVariant(QString::fromUtf8("read")));
        manufacturer->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        manufacturer->verticalHeader()->setStretchLastSection(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, manufacturer);

        label_mfgCode = new QLabel(component_add_form);
        label_mfgCode->setObjectName(QString::fromUtf8("label_mfgCode"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_mfgCode);

        mfgCode = new QLineEdit(component_add_form);
        mfgCode->setObjectName(QString::fromUtf8("mfgCode"));

        formLayout->setWidget(5, QFormLayout::FieldRole, mfgCode);

        label_description = new QLabel(component_add_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_description);

        webPage = new QLineEdit(component_add_form);
        webPage->setObjectName(QString::fromUtf8("webPage"));

        formLayout->setWidget(6, QFormLayout::FieldRole, webPage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(component_add_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("rootelement", QVariant(QString::fromUtf8("component")));
        add->setProperty("doctype", QVariant(QString::fromUtf8("Component.simpleform")));
        add->setProperty("action", QVariant(QString::fromUtf8("create")));
        add->setProperty("form", QVariant(QString::fromUtf8("components")));

        horizontalLayout->addWidget(add);

        cancel = new QPushButton(component_add_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("components")));

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(12, QFormLayout::FieldRole, horizontalLayout);

        label_description_2 = new QLabel(component_add_form);
        label_description_2->setObjectName(QString::fromUtf8("label_description_2"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_description_2);

        price = new QLineEdit(component_add_form);
        price->setObjectName(QString::fromUtf8("price"));

        formLayout->setWidget(9, QFormLayout::FieldRole, price);

        label_price = new QLabel(component_add_form);
        label_price->setObjectName(QString::fromUtf8("label_price"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_price);

        description = new QPlainTextEdit(component_add_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(8, QFormLayout::FieldRole, description);

        picture = new QTableWidget(component_add_form);
        if (picture->columnCount() < 4)
            picture->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        picture->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        picture->setAlternatingRowColors(true);
        picture->setSelectionMode(QAbstractItemView::MultiSelection);
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

        formLayout->setWidget(11, QFormLayout::FieldRole, picture);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(component_add_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        search = new QLineEdit(component_add_form);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_2->addWidget(search);

        searchButton = new QPushButton(component_add_form);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setProperty("global.searchState", QVariant(QString::fromUtf8("{search.state}")));
        searchButton->setProperty("action", QVariant(QString::fromUtf8("picture.reload")));

        horizontalLayout_2->addWidget(searchButton);


        formLayout->setLayout(10, QFormLayout::FieldRole, horizontalLayout_2);

        label = new QLabel(component_add_form);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label);

        label_2 = new QLabel(component_add_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/brick_add.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(component_add_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

#ifndef QT_NO_SHORTCUT
        label_code->setBuddy(code);
        label_name->setBuddy(name);
        label_category->setBuddy(category);
        label_manufacturer->setBuddy(manufacturer);
        label_mfgCode->setBuddy(mfgCode);
        label_description->setBuddy(webPage);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(code, name);
        QWidget::setTabOrder(name, category);
        QWidget::setTabOrder(category, manufacturer);
        QWidget::setTabOrder(manufacturer, mfgCode);
        QWidget::setTabOrder(mfgCode, webPage);
        QWidget::setTabOrder(webPage, description);
        QWidget::setTabOrder(description, price);
        QWidget::setTabOrder(price, search);
        QWidget::setTabOrder(search, searchButton);
        QWidget::setTabOrder(searchButton, picture);
        QWidget::setTabOrder(picture, add);
        QWidget::setTabOrder(add, cancel);

        retranslateUi(component_add_form);
        QObject::connect(search, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        QMetaObject::connectSlotsByName(component_add_form);
    } // setupUi

    void retranslateUi(QWidget *component_add_form)
    {
        component_add_form->setWindowTitle(QApplication::translate("component_add_form", "Add component", 0, QApplication::UnicodeUTF8));
        label_code->setText(QApplication::translate("component_add_form", "Code:", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("component_add_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_category->setText(QApplication::translate("component_add_form", "Category:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = category->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("component_add_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("component_add_form", "category", 0, QApplication::UnicodeUTF8));
        category->setProperty("doctype", QVariant(QApplication::translate("component_add_form", "CategoryHierarchyRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        category->setProperty("rootelement", QVariant(QApplication::translate("component_add_form", "category", 0, QApplication::UnicodeUTF8)));
        label_manufacturer->setText(QApplication::translate("component_add_form", "Manufacturer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = manufacturer->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("component_add_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = manufacturer->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("component_add_form", "name", 0, QApplication::UnicodeUTF8));
        label_mfgCode->setText(QApplication::translate("component_add_form", "mfgCode:", 0, QApplication::UnicodeUTF8));
        label_description->setText(QApplication::translate("component_add_form", "Webpage:", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("component_add_form", "Add", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("component_add_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_description_2->setText(QApplication::translate("component_add_form", "Description:", 0, QApplication::UnicodeUTF8));
        label_price->setText(QApplication::translate("component_add_form", "Price:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = picture->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("component_add_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = picture->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("component_add_form", "caption", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = picture->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("component_add_form", "info", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = picture->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("component_add_form", "tags", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("component_add_form", "Filter pictures by:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("component_add_form", "Search..", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("component_add_form", "Pictures:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("component_add_form", "Add component..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class component_add_form: public Ui_component_add_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_ADD_H
