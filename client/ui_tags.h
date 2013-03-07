/********************************************************************************
** Form generated from reading UI file 'tags.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGS_H
#define UI_TAGS_H

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

class Ui_tags_form
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTreeWidget *tag;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *reload_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *tags_form)
    {
        if (tags_form->objectName().isEmpty())
            tags_form->setObjectName(QString::fromUtf8("tags_form"));
        tags_form->resize(556, 318);
        gridLayout = new QGridLayout(tags_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton = new QRadioButton(tags_form);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(tags_form);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        tag = new QTreeWidget(tags_form);
        tag->setObjectName(QString::fromUtf8("tag"));
        tag->setItemsExpandable(true);
        tag->setProperty("doctype", QVariant(QString::fromUtf8("TagHierarchyRequest.simpleform")));
        tag->setProperty("state", QVariant(QString::fromUtf8("{global.tagState}")));
        tag->setProperty("action", QVariant(QString::fromUtf8("read")));
        tag->header()->setDefaultSectionSize(250);

        gridLayout->addWidget(tag, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(tags_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("form", QVariant(QString::fromUtf8("tag_add")));
        add->setProperty("global.id", QVariant(QString::fromUtf8("{tag.id}")));

        horizontalLayout->addWidget(add);

        delete_2 = new QPushButton(tags_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Tag.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("tag")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("tags")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(tags_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setProperty("form", QVariant(QString::fromUtf8("tag_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{tag.id}")));

        horizontalLayout->addWidget(edit);

        reload_2 = new QPushButton(tags_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("pictures")));

        horizontalLayout->addWidget(reload_2);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tags_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(32, 32));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/tag_blue.png")));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(tags_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        QWidget::setTabOrder(tag, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, add);
        QWidget::setTabOrder(add, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        QWidget::setTabOrder(edit, reload_2);

        retranslateUi(tags_form);
        QObject::connect(radioButton, SIGNAL(toggled(bool)), tag, SLOT(expandAll()));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), tag, SLOT(collapseAll()));
        QObject::connect(tag, SIGNAL(doubleClicked(QModelIndex)), edit, SLOT(click()));

        QMetaObject::connectSlotsByName(tags_form);
    } // setupUi

    void retranslateUi(QWidget *tags_form)
    {
        tags_form->setWindowTitle(QApplication::translate("tags_form", "Picture tags", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("tags_form", "expand all", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("tags_form", "collapse all", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tag->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("tags_form", "description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("tags_form", "tag", 0, QApplication::UnicodeUTF8));
        tag->setProperty("rootelement", QVariant(QApplication::translate("tags_form", "tag", 0, QApplication::UnicodeUTF8)));
        add->setText(QApplication::translate("tags_form", "Add", 0, QApplication::UnicodeUTF8));
        add->setProperty("global.tagState", QVariant(QApplication::translate("tags_form", "{tag.state}", 0, QApplication::UnicodeUTF8)));
        delete_2->setText(QApplication::translate("tags_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("tags_form", "{tag.id}", 0, QApplication::UnicodeUTF8)));
        delete_2->setProperty("global.tagState", QVariant(QApplication::translate("tags_form", "{tag.state}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("tags_form", "Edit", 0, QApplication::UnicodeUTF8));
        edit->setProperty("global.tagState", QVariant(QApplication::translate("tags_form", "{tag.state}", 0, QApplication::UnicodeUTF8)));
        reload_2->setText(QApplication::translate("tags_form", "Back to Picture List", 0, QApplication::UnicodeUTF8));
        reload_2->setProperty("global.tagState", QVariant(QApplication::translate("tags_form", "{tag.state}", 0, QApplication::UnicodeUTF8)));
        label->setText(QString());
        label_2->setText(QApplication::translate("tags_form", "Manage tags", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tags_form: public Ui_tags_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGS_H
