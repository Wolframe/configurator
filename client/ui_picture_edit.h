/********************************************************************************
** Form generated from reading UI file 'picture_edit.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_EDIT_H
#define UI_PICTURE_EDIT_H

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

class Ui_picture_edit_form
{
public:
    QFormLayout *formLayout;
    QLabel *label_caption;
    QLineEdit *caption;
    QLabel *label_info;
    QPlainTextEdit *info;
    QLabel *label_tag;
    QGroupBox *tagwrap;
    QTreeWidget *tag;
    QLabel *label_image;
    PictureChooser *image;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QPushButton *reset;
    QPushButton *cancel;
    QLabel *label_used_in_categories;
    QLabel *label_used_in_features;
    QLabel *used_categories;
    QLabel *used_features;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *picture_edit_form)
    {
        if (picture_edit_form->objectName().isEmpty())
            picture_edit_form->setObjectName(QString::fromUtf8("picture_edit_form"));
        picture_edit_form->resize(402, 478);
        picture_edit_form->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));
        picture_edit_form->setProperty("doctype", QVariant(QString::fromUtf8("PictureRequest.simpleForm")));
        formLayout = new QFormLayout(picture_edit_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_caption = new QLabel(picture_edit_form);
        label_caption->setObjectName(QString::fromUtf8("label_caption"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_caption);

        caption = new QLineEdit(picture_edit_form);
        caption->setObjectName(QString::fromUtf8("caption"));
        caption->setProperty("initialFocus", QVariant(true));

        formLayout->setWidget(1, QFormLayout::FieldRole, caption);

        label_info = new QLabel(picture_edit_form);
        label_info->setObjectName(QString::fromUtf8("label_info"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_info);

        info = new QPlainTextEdit(picture_edit_form);
        info->setObjectName(QString::fromUtf8("info"));
        info->setMaximumSize(QSize(16777215, 50));

        formLayout->setWidget(2, QFormLayout::FieldRole, info);

        label_tag = new QLabel(picture_edit_form);
        label_tag->setObjectName(QString::fromUtf8("label_tag"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_tag);

        tagwrap = new QGroupBox(picture_edit_form);
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

        label_image = new QLabel(picture_edit_form);
        label_image->setObjectName(QString::fromUtf8("label_image"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_image);

        image = new PictureChooser(picture_edit_form);
        image->setObjectName(QString::fromUtf8("image"));
        image->setMinimumSize(QSize(0, 150));
        image->setProperty("state", QVariant(QString::fromUtf8("{global.lastPictureDir}")));

        formLayout->setWidget(6, QFormLayout::FieldRole, image);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        save = new QPushButton(picture_edit_form);
        save->setObjectName(QString::fromUtf8("save"));
        save->setProperty("rootelement", QVariant(QString::fromUtf8("picture")));
        save->setProperty("doctype", QVariant(QString::fromUtf8("Picture.simpleform")));
        save->setProperty("action", QVariant(QString::fromUtf8("update")));
        save->setProperty("form", QVariant(QString::fromUtf8("pictures")));
        save->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout_2->addWidget(save);

        reset = new QPushButton(picture_edit_form);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setProperty("doctype", QVariant(QString::fromUtf8("PictureRequest.simpleform")));
        reset->setProperty("rootelement", QVariant(QString::fromUtf8("picture")));
        reset->setProperty("action", QVariant(QString::fromUtf8("read")));
        reset->setProperty("id", QVariant(QString::fromUtf8("{global.id}")));

        horizontalLayout_2->addWidget(reset);

        cancel = new QPushButton(picture_edit_form);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setProperty("form", QVariant(QString::fromUtf8("pictures")));

        horizontalLayout_2->addWidget(cancel);


        formLayout->setLayout(9, QFormLayout::SpanningRole, horizontalLayout_2);

        label_used_in_categories = new QLabel(picture_edit_form);
        label_used_in_categories->setObjectName(QString::fromUtf8("label_used_in_categories"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_used_in_categories);

        label_used_in_features = new QLabel(picture_edit_form);
        label_used_in_features->setObjectName(QString::fromUtf8("label_used_in_features"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_used_in_features);

        used_categories = new QLabel(picture_edit_form);
        used_categories->setObjectName(QString::fromUtf8("used_categories"));

        formLayout->setWidget(4, QFormLayout::FieldRole, used_categories);

        used_features = new QLabel(picture_edit_form);
        used_features->setObjectName(QString::fromUtf8("used_features"));

        formLayout->setWidget(5, QFormLayout::FieldRole, used_features);

        label = new QLabel(picture_edit_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/picture_edit.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(picture_edit_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

#ifndef QT_NO_SHORTCUT
        label_caption->setBuddy(caption);
        label_info->setBuddy(info);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(caption, info);
        QWidget::setTabOrder(info, tag);
        QWidget::setTabOrder(tag, image);
        QWidget::setTabOrder(image, save);
        QWidget::setTabOrder(save, reset);
        QWidget::setTabOrder(reset, cancel);

        retranslateUi(picture_edit_form);

        QMetaObject::connectSlotsByName(picture_edit_form);
    } // setupUi

    void retranslateUi(QWidget *picture_edit_form)
    {
        picture_edit_form->setWindowTitle(QApplication::translate("picture_edit_form", "Edit picture", 0, QApplication::UnicodeUTF8));
        picture_edit_form->setProperty("initAction", QVariant(QApplication::translate("picture_edit_form", "read", 0, QApplication::UnicodeUTF8)));
        picture_edit_form->setProperty("rootelement", QVariant(QApplication::translate("picture_edit_form", "picture", 0, QApplication::UnicodeUTF8)));
        label_caption->setText(QApplication::translate("picture_edit_form", "Caption", 0, QApplication::UnicodeUTF8));
        label_info->setText(QApplication::translate("picture_edit_form", "Info:", 0, QApplication::UnicodeUTF8));
        label_tag->setText(QApplication::translate("picture_edit_form", "Tags:", 0, QApplication::UnicodeUTF8));
        tagwrap->setTitle(QString());
        QTreeWidgetItem *___qtreewidgetitem = tag->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("picture_edit_form", "tag", 0, QApplication::UnicodeUTF8));
        tag->setProperty("doctype", QVariant(QApplication::translate("picture_edit_form", "TagHierarchyRequest.simpleform", 0, QApplication::UnicodeUTF8)));
        tag->setProperty("rootelement", QVariant(QApplication::translate("picture_edit_form", "tag", 0, QApplication::UnicodeUTF8)));
        label_image->setText(QApplication::translate("picture_edit_form", "Image:", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("picture_edit_form", "Save", 0, QApplication::UnicodeUTF8));
        save->setProperty("global.lastPictureDir", QVariant(QApplication::translate("picture_edit_form", "{image.state}", 0, QApplication::UnicodeUTF8)));
        reset->setText(QApplication::translate("picture_edit_form", "Reset", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("picture_edit_form", "Cancel", 0, QApplication::UnicodeUTF8));
        label_used_in_categories->setText(QApplication::translate("picture_edit_form", "Used in categories:", 0, QApplication::UnicodeUTF8));
        label_used_in_features->setText(QApplication::translate("picture_edit_form", "Used in features:", 0, QApplication::UnicodeUTF8));
        used_categories->setText(QApplication::translate("picture_edit_form", "used in categories", 0, QApplication::UnicodeUTF8));
        used_features->setText(QApplication::translate("picture_edit_form", "used in features", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("picture_edit_form", "Edit picture..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class picture_edit_form: public Ui_picture_edit_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_EDIT_H
