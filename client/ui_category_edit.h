/********************************************************************************
** Form generated from reading UI file 'category_edit.ui'
**
** Created: Thu Mar 7 16:32:07 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORY_EDIT_H
#define UI_CATEGORY_EDIT_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_category_edit_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_description;
    QPlainTextEdit *description;
    QTableWidget *picture;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QPushButton *reset;
    QPushButton *cancel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *search;
    QPushButton *searchButton;
    QPushButton *infoButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *category_edit_form)
    {
        if (category_edit_form->objectName().isEmpty())
            category_edit_form->setObjectName(QString::fromUtf8("category_edit_form"));
        category_edit_form->resize(469, 456);
        category_edit_form->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));
        category_edit_form->setProperty("doctype", QVariant(QString::fromUtf8("CategoryRequest.simpleForm")));
        formLayout = new QFormLayout(category_edit_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_name = new QLabel(category_edit_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(category_edit_form);
        name->setObjectName(QString::fromUtf8("name"));
        name->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_description = new QLabel(category_edit_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_description);

        description = new QPlainTextEdit(category_edit_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        picture = new QTableWidget(category_edit_form);
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

        formLayout->setWidget(4, QFormLayout::FieldRole, picture);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save = new QPushButton(category_edit_form);
        save->setObjectName(QString::fromUtf8("save"));
        save->setProperty("rootelement", QVariant(QString::fromUtf8("category")));
        save->setProperty("doctype", QVariant(QString::fromUtf8("Category.simpleform")));
        save->setProperty("action", QVariant(QString::fromUtf8("update")));
        save->setProperty("form", QVariant(QString::fromUtf8("categories")));
        save->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout->addWidget(save);

        reset = new QPushButton(category_edit_form);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setProperty("doctype", QVariant(QString::fromUtf8("CategoryRequest.simpleform")));
        reset->setProperty("rootelement", QVariant(QString::fromUtf8("category")));
        reset->setProperty("action", QVariant(QString::fromUtf8("read")));
        reset->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout->addWidget(reset);

        cancel = new QPushButton(category_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("categories")));

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(category_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        search = new QLineEdit(category_edit_form);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_2->addWidget(search);

        searchButton = new QPushButton(category_edit_form);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setProperty("global.searchState", QVariant(QString::fromUtf8("{search.state}")));
        searchButton->setProperty("action", QVariant(QString::fromUtf8("picture.reload")));

        horizontalLayout_2->addWidget(searchButton);

        infoButton = new QPushButton(category_edit_form);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));
        infoButton->setProperty("form", QVariant(QString::fromUtf8("picture_info")));
        infoButton->setProperty("global.pictureId", QVariant(QString::fromUtf8("{picture.id}")));

        horizontalLayout_2->addWidget(infoButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        label = new QLabel(category_edit_form);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        label_3 = new QLabel(category_edit_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/folder_edit.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(category_edit_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(name);
        label_description->setBuddy(description);
        label->setBuddy(picture);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, description);
        QWidget::setTabOrder(description, search);
        QWidget::setTabOrder(search, searchButton);
        QWidget::setTabOrder(searchButton, picture);
        QWidget::setTabOrder(picture, save);
        QWidget::setTabOrder(save, reset);
        QWidget::setTabOrder(reset, cancel);

        retranslateUi(category_edit_form);
        QObject::connect(search, SIGNAL(returnPressed()), searchButton, SLOT(click()));
        QObject::connect(picture, SIGNAL(doubleClicked(QModelIndex)), infoButton, SLOT(click()));

        QMetaObject::connectSlotsByName(category_edit_form);
    } // setupUi

    void retranslateUi(QWidget *category_edit_form)
    {
        category_edit_form->setWindowTitle(QApplication::translate("category_edit_form", "Edit category", 0, QApplication::UnicodeUTF8));
        category_edit_form->setProperty("initAction", QVariant(QApplication::translate("category_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        category_edit_form->setProperty("rootelement", QVariant(QApplication::translate("category_edit_form", "category", 0, QApplication::UnicodeUTF8)));
        label_name->setText(QApplication::translate("category_edit_form", "Name:", 0, QApplication::UnicodeUTF8));
        name->setProperty("state", QVariant(QApplication::translate("category_edit_form", "{global.stateName}", 0, QApplication::UnicodeUTF8)));
        label_description->setText(QApplication::translate("category_edit_form", "Description:", 0, QApplication::UnicodeUTF8));
        description->setProperty("state", QVariant(QApplication::translate("category_edit_form", "{global.stateDescription}", 0, QApplication::UnicodeUTF8)));
        QTableWidgetItem *___qtablewidgetitem = picture->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("category_edit_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = picture->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("category_edit_form", "caption", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = picture->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("category_edit_form", "info", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = picture->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("category_edit_form", "tags", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("category_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("category_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("category_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("category_edit_form", "Filter pictures by:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("category_edit_form", "Search..", 0, QApplication::UnicodeUTF8));
        infoButton->setText(QApplication::translate("category_edit_form", "Info", 0, QApplication::UnicodeUTF8));
        infoButton->setProperty("global.stateName", QVariant(QApplication::translate("category_edit_form", "{name.state}", 0, QApplication::UnicodeUTF8)));
        infoButton->setProperty("global.stateDescription", QVariant(QApplication::translate("category_edit_form", "{description.state}", 0, QApplication::UnicodeUTF8)));
        infoButton->setProperty("global.statePicture", QVariant(QApplication::translate("category_edit_form", "{picture.state}", 0, QApplication::UnicodeUTF8)));
        label->setText(QApplication::translate("category_edit_form", "Pictures:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("category_edit_form", "Edit category..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class category_edit_form: public Ui_category_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORY_EDIT_H
