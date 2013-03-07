/********************************************************************************
** Form generated from reading UI file 'picture_add.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_ADD_H
#define UI_PICTURE_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "PictureChooser.hpp"

QT_BEGIN_NAMESPACE

class Ui_picture_add_form
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_caption;
    QLineEdit *caption;
    QLabel *label_info;
    QPlainTextEdit *info;
    QLabel *label_tags;
    QGroupBox *tagwrap;
    QTreeWidget *tag;
    QLabel *label_picture;
    PictureChooser *image;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QPushButton *cancel;
    QLabel *label_2;

    void setupUi(QWidget *picture_add_form)
    {
        if (picture_add_form->objectName().isEmpty())
            picture_add_form->setObjectName(QString::fromUtf8("picture_add_form"));
        picture_add_form->resize(332, 426);
        formLayout = new QFormLayout(picture_add_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(picture_add_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/picture_add.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_caption = new QLabel(picture_add_form);
        label_caption->setObjectName(QString::fromUtf8("label_caption"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_caption);

        caption = new QLineEdit(picture_add_form);
        caption->setObjectName(QString::fromUtf8("caption"));
        caption->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, caption);

        label_info = new QLabel(picture_add_form);
        label_info->setObjectName(QString::fromUtf8("label_info"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_info);

        info = new QPlainTextEdit(picture_add_form);
        info->setObjectName(QString::fromUtf8("info"));
        info->setMaximumSize(QSize(16777215, 50));

        formLayout->setWidget(2, QFormLayout::FieldRole, info);

        label_tags = new QLabel(picture_add_form);
        label_tags->setObjectName(QString::fromUtf8("label_tags"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_tags);

        tagwrap = new QGroupBox(picture_add_form);
        tagwrap->setObjectName(QString::fromUtf8("tagwrap"));
        tagwrap->setEnabled(true);
        tagwrap->setMinimumSize(QSize(0, 100));
        tagwrap->setFlat(true);
        tagwrap->setCheckable(false);
        tag = new QTreeWidget(tagwrap);
        tag->setObjectName(QString::fromUtf8("tag"));
        tag->setGeometry(QRect(0, 0, 311, 101));
        tag->setSelectionMode(QAbstractItemView::MultiSelection);
        tag->setHeaderHidden(true);
        tag->setExpandsOnDoubleClick(false);
        tag->setProperty("action", QVariant(QString::fromUtf8("read")));

        formLayout->setWidget(3, QFormLayout::FieldRole, tagwrap);

        label_picture = new QLabel(picture_add_form);
        label_picture->setObjectName(QString::fromUtf8("label_picture"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_picture);

        image = new PictureChooser(picture_add_form);
        image->setObjectName(QString::fromUtf8("image"));
        image->setMinimumSize(QSize(0, 150));
        image->setProperty("state", QVariant(QString::fromUtf8("{global.lastPictureDir}")));

        formLayout->setWidget(4, QFormLayout::FieldRole, image);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add = new QPushButton(picture_add_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setProperty("rootelement", QVariant(QString::fromUtf8("picture")));
        add->setProperty("doctype", QVariant(QString::fromUtf8("Picture.simpleform")));
        add->setProperty("action", QVariant(QString::fromUtf8("create")));
        add->setProperty("form", QVariant(QString::fromUtf8("pictures")));
        add->setProperty("global.lastPictureDir", QVariant(QString::fromUtf8("{image.state}")));

        horizontalLayout->addWidget(add);

        cancel = new QPushButton(picture_add_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("pictures")));

        horizontalLayout->addWidget(cancel);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(picture_add_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        QWidget::setTabOrder(caption, info);
        QWidget::setTabOrder(info, tag);
        QWidget::setTabOrder(tag, image);
        QWidget::setTabOrder(image, add);
        QWidget::setTabOrder(add, cancel);

        retranslateUi(picture_add_form);

        QMetaObject::connectSlotsByName(picture_add_form);
    } // setupUi

    void retranslateUi(QWidget *picture_add_form)
    {
        picture_add_form->setWindowTitle(QApplication::translate("picture_add_form", "Add picture", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_caption->setText(QApplication::translate("picture_add_form", "Caption:", 0, QApplication::UnicodeUTF8));
        label_info->setText(QApplication::translate("picture_add_form", "Info:", 0, QApplication::UnicodeUTF8));
        label_tags->setText(QApplication::translate("picture_add_form", "Tags", 0, QApplication::UnicodeUTF8));
        tagwrap->setTitle(QString());
        QTreeWidgetItem *___qtreewidgetitem = tag->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("picture_add_form", "tag", 0, QApplication::UnicodeUTF8));
        tag->setProperty("doctype", QVariant(QApplication::translate("picture_add_form", "TagHierarchyRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        tag->setProperty("rootelement", QVariant(QApplication::translate("picture_add_form", "tag", 0, QApplication::UnicodeUTF8)));
        label_picture->setText(QApplication::translate("picture_add_form", "Picture:", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("picture_add_form", "Add", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("picture_add_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("picture_add_form", "Add picture..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class picture_add_form: public Ui_picture_add_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_ADD_H
