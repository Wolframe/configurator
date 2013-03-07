/********************************************************************************
** Form generated from reading UI file 'feature_edit.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURE_EDIT_H
#define UI_FEATURE_EDIT_H

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

class Ui_feature_edit_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_description;
    QPlainTextEdit *description;
    QTableWidget *picture;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QPushButton *reset;
    QPushButton *cancel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *search;
    QPushButton *searchButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *feature_edit_form)
    {
        if (feature_edit_form->objectName().isEmpty())
            feature_edit_form->setObjectName(QString::fromUtf8("feature_edit_form"));
        feature_edit_form->resize(391, 435);
        feature_edit_form->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));
        feature_edit_form->setProperty("doctype", QVariant(QString::fromUtf8("FeatureRequest.simpleForm")));
        feature_edit_form->setProperty("rootelement", QVariant(QString::fromUtf8("feature")));
        formLayout = new QFormLayout(feature_edit_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_name = new QLabel(feature_edit_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(feature_edit_form);
        name->setObjectName(QString::fromUtf8("name"));
        name->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_description = new QLabel(feature_edit_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_description);

        description = new QPlainTextEdit(feature_edit_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        picture = new QTableWidget(feature_edit_form);
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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        save = new QPushButton(feature_edit_form);
        save->setObjectName(QString::fromUtf8("save"));
        save->setProperty("rootelement", QVariant(QString::fromUtf8("feature")));
        save->setProperty("doctype", QVariant(QString::fromUtf8("Feature.simpleform")));
        save->setProperty("action", QVariant(QString::fromUtf8("update")));
        save->setProperty("form", QVariant(QString::fromUtf8("features")));
        save->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout_2->addWidget(save);

        reset = new QPushButton(feature_edit_form);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setProperty("doctype", QVariant(QString::fromUtf8("FeatureRequest.simpleform")));
        reset->setProperty("rootelement", QVariant(QString::fromUtf8("feature")));
        reset->setProperty("action", QVariant(QString::fromUtf8("read")));
        reset->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout_2->addWidget(reset);

        cancel = new QPushButton(feature_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("features")));

        horizontalLayout_2->addWidget(cancel);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_2 = new QLabel(feature_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        search = new QLineEdit(feature_edit_form);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_3->addWidget(search);

        searchButton = new QPushButton(feature_edit_form);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setProperty("global.searchState", QVariant(QString::fromUtf8("{search.state}")));
        searchButton->setProperty("action", QVariant(QString::fromUtf8("picture.reload")));

        horizontalLayout_3->addWidget(searchButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        label = new QLabel(feature_edit_form);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        label_3 = new QLabel(feature_edit_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/chart_organisation_edit.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(feature_edit_form);
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

        retranslateUi(feature_edit_form);
        QObject::connect(search, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        QMetaObject::connectSlotsByName(feature_edit_form);
    } // setupUi

    void retranslateUi(QWidget *feature_edit_form)
    {
        feature_edit_form->setWindowTitle(QApplication::translate("feature_edit_form", "Edit feature", 0, QApplication::UnicodeUTF8));
        feature_edit_form->setProperty("initAction", QVariant(QApplication::translate("feature_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        label_name->setText(QApplication::translate("feature_edit_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_description->setText(QApplication::translate("feature_edit_form", "Description:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = picture->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("feature_edit_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = picture->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("feature_edit_form", "caption", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = picture->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("feature_edit_form", "info", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = picture->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("feature_edit_form", "tags", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("feature_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("feature_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("feature_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("feature_edit_form", "Filter pictures by:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("feature_edit_form", "Search..", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("feature_edit_form", "Pictures:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("feature_edit_form", "Edit feature..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class feature_edit_form: public Ui_feature_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURE_EDIT_H
