/********************************************************************************
** Form generated from reading UI file 'features.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURES_H
#define UI_FEATURES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_features_form
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *feature;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *reload_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *features_form)
    {
        if (features_form->objectName().isEmpty())
            features_form->setObjectName(QString::fromUtf8("features_form"));
        features_form->resize(578, 340);
        gridLayout = new QGridLayout(features_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        feature = new QTreeWidget(features_form);
        feature->setObjectName(QString::fromUtf8("feature"));
        feature->setItemsExpandable(true);
        feature->setProperty("doctype", QVariant(QString::fromUtf8("FeatureHierarchyRequest.simpleform")));
        feature->setProperty("rootelement", QVariant(QString::fromUtf8("feature")));
        feature->setProperty("state", QVariant(QString::fromUtf8("{global.featureState}")));
        feature->setProperty("action", QVariant(QString::fromUtf8("read")));
        feature->header()->setDefaultSectionSize(250);

        gridLayout->addWidget(feature, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton = new QRadioButton(features_form);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(features_form);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(features_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("feature_add")));
        add->setProperty("global.id", QVariant(QString::fromUtf8("{feature.id}")));
        add->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));

        horizontalLayout->addWidget(add);

        delete_2 = new QPushButton(features_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Feature.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("feature")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("features")));
        delete_2->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(features_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setProperty("form", QVariant(QString::fromUtf8("feature_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{feature.id}")));
        edit->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));

        horizontalLayout->addWidget(edit);

        reload_2 = new QPushButton(features_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));
        reload_2->setProperty("global.featureState", QVariant(QString::fromUtf8("{feature.state}")));

        horizontalLayout->addWidget(reload_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(features_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/chart_organisation.png")));

        horizontalLayout_3->addWidget(label_2);

        label = new QLabel(features_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        QWidget::setTabOrder(feature, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, add);
        QWidget::setTabOrder(add, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        QWidget::setTabOrder(edit, reload_2);

        retranslateUi(features_form);
        QObject::connect(radioButton, SIGNAL(toggled(bool)), feature, SLOT(expandAll()));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), feature, SLOT(collapseAll()));
        QObject::connect(feature, SIGNAL(doubleClicked(QModelIndex)), edit, SLOT(click()));

        QMetaObject::connectSlotsByName(features_form);
    } // setupUi

    void retranslateUi(QWidget *features_form)
    {
        features_form->setWindowTitle(QApplication::translate("features_form", "Features", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = feature->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("features_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("features_form", "feature", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("features_form", "expand all", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("features_form", "collapse all", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("features_form", "Add", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("features_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("features_form", "{feature.id}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("features_form", "Edit", 0, QApplication::UnicodeUTF8));
        reload_2->setText(QApplication::translate("features_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("features_form", "Manage features", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class features_form: public Ui_features_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURES_H
