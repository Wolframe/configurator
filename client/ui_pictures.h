/********************************************************************************
** Form generated from reading UI file 'pictures.ui'
**
** Created: Thu Mar 7 16:32:08 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURES_H
#define UI_PICTURES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pictures_form
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *reset_2;
    QPushButton *form1;
    QPushButton *reload_2;
    QSpacerItem *horizontalSpacer;
    QTableWidget *picture;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *search;
    QPushButton *searchButton;

    void setupUi(QWidget *pictures_form)
    {
        if (pictures_form->objectName().isEmpty())
            pictures_form->setObjectName(QString::fromUtf8("pictures_form"));
        pictures_form->resize(565, 274);
        gridLayout = new QGridLayout(pictures_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(pictures_form);
        add->setObjectName(QString::fromUtf8("add"));
        add->setEnabled(true);
        add->setProperty("form", QVariant(QString::fromUtf8("picture_add")));

        horizontalLayout->addWidget(add);

        delete_2 = new QPushButton(pictures_form);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setEnabled(true);
        delete_2->setProperty("doctype", QVariant(QString::fromUtf8("Picture.simpleform")));
        delete_2->setProperty("rootelement", QVariant(QString::fromUtf8("picture")));
        delete_2->setProperty("action", QVariant(QString::fromUtf8("delete")));
        delete_2->setProperty("form", QVariant(QString::fromUtf8("pictures")));

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(pictures_form);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setEnabled(true);
        edit->setProperty("form", QVariant(QString::fromUtf8("picture_edit")));
        edit->setProperty("global.id", QVariant(QString::fromUtf8("{picture.id}")));

        horizontalLayout->addWidget(edit);

        reset_2 = new QPushButton(pictures_form);
        reset_2->setObjectName(QString::fromUtf8("reset_2"));
        reset_2->setProperty("form", QVariant(QString::fromUtf8("picture_info")));
        reset_2->setProperty("global.pictureId", QVariant(QString::fromUtf8("{picture.id}")));

        horizontalLayout->addWidget(reset_2);

        form1 = new QPushButton(pictures_form);
        form1->setObjectName(QString::fromUtf8("form1"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/tag_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        form1->setIcon(icon);
        form1->setProperty("form", QVariant(QString::fromUtf8("tags")));

        horizontalLayout->addWidget(form1);

        reload_2 = new QPushButton(pictures_form);
        reload_2->setObjectName(QString::fromUtf8("reload_2"));
        reload_2->setProperty("form", QVariant(QString::fromUtf8("init")));

        horizontalLayout->addWidget(reload_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        picture = new QTableWidget(pictures_form);
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
        picture->setProperty("state", QVariant(QString::fromUtf8("{global.pictureState}")));
        picture->setProperty("action", QVariant(QString::fromUtf8("read")));
        picture->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        picture->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(picture, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(pictures_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/picture.png")));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(pictures_form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        search = new QLineEdit(pictures_form);
        search->setObjectName(QString::fromUtf8("search"));
        search->setProperty("initialFocus", QVariant(true));
        search->setProperty("state", QVariant(QString::fromUtf8("{global.searchState}")));

        horizontalLayout_2->addWidget(search);

        searchButton = new QPushButton(pictures_form);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setProperty("global.searchState", QVariant(QString::fromUtf8("{search.state}")));
        searchButton->setProperty("action", QVariant(QString::fromUtf8("picture.reload")));

        horizontalLayout_2->addWidget(searchButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(search, searchButton);
        QWidget::setTabOrder(searchButton, picture);
        QWidget::setTabOrder(picture, add);
        QWidget::setTabOrder(add, delete_2);
        QWidget::setTabOrder(delete_2, edit);
        QWidget::setTabOrder(edit, reset_2);
        QWidget::setTabOrder(reset_2, form1);
        QWidget::setTabOrder(form1, reload_2);

        retranslateUi(pictures_form);
        QObject::connect(search, SIGNAL(returnPressed()), searchButton, SLOT(click()));
        QObject::connect(picture, SIGNAL(doubleClicked(QModelIndex)), reset_2, SLOT(click()));

        QMetaObject::connectSlotsByName(pictures_form);
    } // setupUi

    void retranslateUi(QWidget *pictures_form)
    {
        pictures_form->setWindowTitle(QApplication::translate("pictures_form", "Pictures", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("pictures_form", "Add", 0, QApplication::UnicodeUTF8));
        add->setProperty("global.pictureState", QVariant(QApplication::translate("pictures_form", "{picture.state}", 0, QApplication::UnicodeUTF8)));
        delete_2->setText(QApplication::translate("pictures_form", "Delete", 0, QApplication::UnicodeUTF8));
        delete_2->setProperty("id", QVariant(QApplication::translate("pictures_form", "{picture.id}", 0, QApplication::UnicodeUTF8)));
        delete_2->setProperty("global.pictureState", QVariant(QApplication::translate("pictures_form", "{picture.state}", 0, QApplication::UnicodeUTF8)));
        edit->setText(QApplication::translate("pictures_form", "Edit", 0, QApplication::UnicodeUTF8));
        edit->setProperty("global.pictureState", QVariant(QApplication::translate("pictures_form", "{picture.state}", 0, QApplication::UnicodeUTF8)));
        reset_2->setText(QApplication::translate("pictures_form", "Info", 0, QApplication::UnicodeUTF8));
        reset_2->setProperty("global.pictureState", QVariant(QApplication::translate("pictures_form", "{picture.state}", 0, QApplication::UnicodeUTF8)));
        form1->setText(QApplication::translate("pictures_form", "Manage Tags", 0, QApplication::UnicodeUTF8));
        form1->setProperty("global.pictureState", QVariant(QApplication::translate("pictures_form", "{picture.state}", 0, QApplication::UnicodeUTF8)));
        reload_2->setText(QApplication::translate("pictures_form", "Main Menu", 0, QApplication::UnicodeUTF8));
        reload_2->setProperty("global.pictureState", QVariant(QApplication::translate("pictures_form", "{picture.state}", 0, QApplication::UnicodeUTF8)));
        QTableWidgetItem *___qtablewidgetitem = picture->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pictures_form", "thumbnail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = picture->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pictures_form", "caption", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = picture->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("pictures_form", "info", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = picture->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("pictures_form", "tags", 0, QApplication::UnicodeUTF8));
        picture->setProperty("search", QVariant(QApplication::translate("pictures_form", "{search.text}", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QString());
        label->setText(QApplication::translate("pictures_form", "Filter pictures by:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("pictures_form", "Search..", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pictures_form: public Ui_pictures_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURES_H
