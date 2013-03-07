/********************************************************************************
** Form generated from reading UI file 'feature_add.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURE_ADD_H
#define UI_FEATURE_ADD_H

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
#include <QCheckBox>

QT_BEGIN_NAMESPACE

class Ui_feature_add_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_name;
    QLineEdit *name;
    QLabel *label_root;
    QCheckBox *root;
    QLabel *label_description;
    QPlainTextEdit *description;
    QTableWidget *picture;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QPushButton *cancel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *search;
    QPushButton *searchButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *feature_add_form)
    {
        if (feature_add_form->objectName().isEmpty())
            feature_add_form->setObjectName(QString::fromUtf8("feature_add_form"));
        feature_add_form->resize(389, 447);
        formLayout = new QFormLayout(feature_add_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_name = new QLabel(feature_add_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        name = new QLineEdit(feature_add_form);
        name->setObjectName(QString::fromUtf8("name"));
        name->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

	label_root = new QLabel(feature_add_form);
	label_root->setObjectName(QString::fromUtf8("label_root"));
	formLayout->setWidget(2, QFormLayout::LabelRole, label_root);
        root = new QCheckBox(feature_add_form);
        root->setObjectName(QString::fromUtf8("root"));
        formLayout->setWidget(2, QFormLayout::FieldRole, root);

        label_description = new QLabel(feature_add_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_description);

        description = new QPlainTextEdit(feature_add_form);
        description->setObjectName(QString::fromUtf8("description"));

        formLayout->setWidget(3, QFormLayout::FieldRole, description);

        picture = new QTableWidget(feature_add_form);
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

        formLayout->setWidget(5, QFormLayout::FieldRole, picture);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(feature_add_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("rootelement", QVariant(QString::fromUtf8("feature")));
        add->setProperty("doctype", QVariant(QString::fromUtf8("Feature.simpleform")));
        add->setProperty("action", QVariant(QString::fromUtf8("create")));
        add->setProperty("form", QVariant(QString::fromUtf8("features")));
        add->setProperty("parentID", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout->addWidget(add);

        cancel = new QPushButton(feature_add_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("features")));

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_2 = new QLabel(feature_add_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        search = new QLineEdit(feature_add_form);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_3->addWidget(search);

        searchButton = new QPushButton(feature_add_form);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setProperty("global.searchState", QVariant(QString::fromUtf8("{search.state}")));
        searchButton->setProperty("action", QVariant(QString::fromUtf8("picture.reload")));

        horizontalLayout_3->addWidget(searchButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_3);

        label = new QLabel(feature_add_form);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label);

        label_3 = new QLabel(feature_add_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/chart_organisation_add.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(feature_add_form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

#ifndef QT_NO_SHORTCUT
        label_name->setBuddy(name);
        label_description->setBuddy(description);
        label->setBuddy(picture);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, root);
        QWidget::setTabOrder(root, description);        
        QWidget::setTabOrder(search, searchButton);
        QWidget::setTabOrder(searchButton, picture);
        QWidget::setTabOrder(picture, add);
        QWidget::setTabOrder(add, cancel);

        retranslateUi(feature_add_form);
        QObject::connect(search, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        QMetaObject::connectSlotsByName(feature_add_form);
    } // setupUi

    void retranslateUi(QWidget *feature_add_form)
    {
        feature_add_form->setWindowTitle(QApplication::translate("feature_add_form", "Add feature", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("feature_add_form", "Name:", 0, QApplication::UnicodeUTF8));
        label_root->setText(QApplication::translate("feature_add_form", "Add to root:", 0, QApplication::UnicodeUTF8));
        label_description->setText(QApplication::translate("feature_add_form", "Description:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = picture->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("feature_add_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = picture->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("feature_add_form", "caption", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = picture->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("feature_add_form", "info", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = picture->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("feature_add_form", "tags", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("feature_add_form", "Add", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("feature_add_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("feature_add_form", "Filter pictures by:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("feature_add_form", "Search..", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("feature_add_form", "Pictures:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("feature_add_form", "Add feature..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class feature_add_form: public Ui_feature_add_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURE_ADD_H
