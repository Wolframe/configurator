/********************************************************************************
** Form generated from reading UI file 'picture_info.ui'
**
** Created: Thu Mar 7 08:48:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_INFO_H
#define UI_PICTURE_INFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_picture_info_form
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_description;
    QLabel *caption;
    QLabel *tabel_tags;
    QLabel *tags;
    QLabel *label_dimensions;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *width;
    QLabel *label_ignore;
    QLabel *height;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_size;
    QLabel *size;
    QLabel *label_image;
    QLabel *image;
    QLabel *label_name;
    QLabel *info;
    QLabel *label_used;
    QLabel *used_categories;
    QLabel *label_used_in_featuers;
    QLabel *used_features;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QLabel *label_2;

    void setupUi(QWidget *picture_info_form)
    {
        if (picture_info_form->objectName().isEmpty())
            picture_info_form->setObjectName(QString::fromUtf8("picture_info_form"));
        picture_info_form->setWindowModality(Qt::WindowModal);
        picture_info_form->resize(512, 512);
        picture_info_form->setProperty("initAction", QVariant(QString::fromUtf8("read")));
        picture_info_form->setProperty("id", QVariant(QString::fromUtf8("{global.pictureId}")));
        picture_info_form->setProperty("doctype", QVariant(QString::fromUtf8("PictureRequest.simpleform")));
        picture_info_form->setProperty("rootelement", QVariant(QString::fromUtf8("picture")));
        formLayout = new QFormLayout(picture_info_form);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(picture_info_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/picture.png")));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_description = new QLabel(picture_info_form);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_description);

        caption = new QLabel(picture_info_form);
        caption->setObjectName(QString::fromUtf8("caption"));

        formLayout->setWidget(2, QFormLayout::FieldRole, caption);

        tabel_tags = new QLabel(picture_info_form);
        tabel_tags->setObjectName(QString::fromUtf8("tabel_tags"));

        formLayout->setWidget(4, QFormLayout::LabelRole, tabel_tags);

        tags = new QLabel(picture_info_form);
        tags->setObjectName(QString::fromUtf8("tags"));

        formLayout->setWidget(4, QFormLayout::FieldRole, tags);

        label_dimensions = new QLabel(picture_info_form);
        label_dimensions->setObjectName(QString::fromUtf8("label_dimensions"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_dimensions);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        width = new QLabel(picture_info_form);
        width->setObjectName(QString::fromUtf8("width"));

        horizontalLayout_4->addWidget(width);

        label_ignore = new QLabel(picture_info_form);
        label_ignore->setObjectName(QString::fromUtf8("label_ignore"));

        horizontalLayout_4->addWidget(label_ignore);

        height = new QLabel(picture_info_form);
        height->setObjectName(QString::fromUtf8("height"));

        horizontalLayout_4->addWidget(height);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout_4);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_2);

        label_size = new QLabel(picture_info_form);
        label_size->setObjectName(QString::fromUtf8("label_size"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_size);

        size = new QLabel(picture_info_form);
        size->setObjectName(QString::fromUtf8("size"));

        formLayout->setWidget(7, QFormLayout::FieldRole, size);

        label_image = new QLabel(picture_info_form);
        label_image->setObjectName(QString::fromUtf8("label_image"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_image);

        image = new QLabel(picture_info_form);
        image->setObjectName(QString::fromUtf8("image"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);
        image->setMinimumSize(QSize(0, 250));

        formLayout->setWidget(8, QFormLayout::FieldRole, image);

        label_name = new QLabel(picture_info_form);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_name);

        info = new QLabel(picture_info_form);
        info->setObjectName(QString::fromUtf8("info"));

        formLayout->setWidget(9, QFormLayout::FieldRole, info);

        label_used = new QLabel(picture_info_form);
        label_used->setObjectName(QString::fromUtf8("label_used"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_used);

        used_categories = new QLabel(picture_info_form);
        used_categories->setObjectName(QString::fromUtf8("used_categories"));

        formLayout->setWidget(11, QFormLayout::FieldRole, used_categories);

        label_used_in_featuers = new QLabel(picture_info_form);
        label_used_in_featuers->setObjectName(QString::fromUtf8("label_used_in_featuers"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_used_in_featuers);

        used_features = new QLabel(picture_info_form);
        used_features->setObjectName(QString::fromUtf8("used_features"));

        formLayout->setWidget(12, QFormLayout::FieldRole, used_features);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(picture_info_form);
        close->setObjectName(QString::fromUtf8("close"));
        close->setProperty("form", QVariant(QString::fromUtf8("_CLOSE_")));

        horizontalLayout->addWidget(close);


        formLayout->setLayout(13, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(picture_info_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);


        retranslateUi(picture_info_form);

        QMetaObject::connectSlotsByName(picture_info_form);
    } // setupUi

    void retranslateUi(QWidget *picture_info_form)
    {
        picture_info_form->setWindowTitle(QApplication::translate("picture_info_form", "Picture info", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_description->setText(QApplication::translate("picture_info_form", "Caption:", 0, QApplication::UnicodeUTF8));
        caption->setText(QApplication::translate("picture_info_form", "caption", 0, QApplication::UnicodeUTF8));
        tabel_tags->setText(QApplication::translate("picture_info_form", "Tags:", 0, QApplication::UnicodeUTF8));
        tags->setText(QApplication::translate("picture_info_form", "tags", 0, QApplication::UnicodeUTF8));
        label_dimensions->setText(QApplication::translate("picture_info_form", "Dimensions:", 0, QApplication::UnicodeUTF8));
        width->setText(QApplication::translate("picture_info_form", "width", 0, QApplication::UnicodeUTF8));
        label_ignore->setText(QApplication::translate("picture_info_form", "x", 0, QApplication::UnicodeUTF8));
        height->setText(QApplication::translate("picture_info_form", "height", 0, QApplication::UnicodeUTF8));
        label_size->setText(QApplication::translate("picture_info_form", "Size", 0, QApplication::UnicodeUTF8));
        size->setText(QApplication::translate("picture_info_form", "size", 0, QApplication::UnicodeUTF8));
        label_image->setText(QApplication::translate("picture_info_form", "Image:", 0, QApplication::UnicodeUTF8));
        image->setText(QString());
        label_name->setText(QApplication::translate("picture_info_form", "Info:", 0, QApplication::UnicodeUTF8));
        info->setText(QApplication::translate("picture_info_form", "info", 0, QApplication::UnicodeUTF8));
        label_used->setText(QApplication::translate("picture_info_form", "Used in categories:", 0, QApplication::UnicodeUTF8));
        used_categories->setText(QApplication::translate("picture_info_form", "used in categories", 0, QApplication::UnicodeUTF8));
        label_used_in_featuers->setText(QApplication::translate("picture_info_form", "Used in Features:", 0, QApplication::UnicodeUTF8));
        used_features->setText(QApplication::translate("picture_info_form", "used in features", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("picture_info_form", "Close", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("picture_info_form", "Picture information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class picture_info_form: public Ui_picture_info_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_INFO_H
