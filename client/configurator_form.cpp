#include "configurator_form.h"

#include <QXmlStreamWriter>
#include <QByteArray>
#include <QDebug>
#include <QLabel>

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

configurator_form::configurator_form( DataLoader *_dataLoader, const QString _name, QHash< QString, QString > *_globals, QWidget *_parent, bool _debug )
	: QWidget( _parent ), m_dataLoader( _dataLoader ), m_name( _name ), 
	m_globals( _globals ), m_debug( _debug )
{
	initialize( );
}

void configurator_form::initialize( )
{
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *saveButton;
    QPushButton *cancelButton;

        if (this->objectName().isEmpty())
            this->setObjectName(QString::fromUtf8("Form"));
        this->setWindowTitle(QApplication::translate("Form", "Configurator", 0, QApplication::UnicodeUTF8));            
        this->resize(586, 149);
              
// every picked component or component picker gets added to a vertical layout
        verticalLayout = new QVBoxLayout(this);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

// trigger filling of preconfigured components
	sendRequest( "ConfiguredComponentsRequest.simpleform", "component", "ConfiguredComponents" );
        
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(this);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setText(QApplication::translate("Form", "2 Components yyyy fullfilling feature from xx to xx", 0, QApplication::UnicodeUTF8));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_3 = new QPushButton(this);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(this);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(this);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBox = new QSpinBox(this);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        comboBox = new QComboBox(this);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(this);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(this);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        spinBox_2 = new QSpinBox(this);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_2->addWidget(spinBox_2);

        comboBox_2 = new QComboBox(this);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        pushButton_2 = new QPushButton(this);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        saveButton = new QPushButton(this);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setText(QApplication::translate("Form", "Save", 0, QApplication::UnicodeUTF8));
        saveButton->setProperty("form", QVariant(QString::fromUtf8("configurations")));
        horizontalLayout_5->addWidget(saveButton);

        cancelButton = new QPushButton(this);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setText(QApplication::translate("Form", "Cancel", 0, QApplication::UnicodeUTF8));
        cancelButton->setProperty("form", QVariant(QString::fromUtf8("configurations")));
        horizontalLayout_5->addWidget(cancelButton);

        verticalLayout->addLayout(horizontalLayout_5);


        QMetaObject::connectSlotsByName(this);

        pushButton_3->setText(QApplication::translate("Form", "Delete", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form", "min to max. features xxx:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "Intel Quadcore CPU 1300 MHz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Intel Core Duo 1400 MHz", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("Form", "Add", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form", "min to max. features xxx:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Form", "Intel Quadcore CPU 1300 MHz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Intel Core Duo 1400 MHz", 0, QApplication::UnicodeUTF8)
        );
        pushButton_2->setText(QApplication::translate("Form", "Add", 0, QApplication::UnicodeUTF8));
}

void configurator_form::sendRequest( const QString docType, const QString rootElement, const QString requestName )
{
	QByteArray data;
	QXmlStreamWriter xml( &data );
	QHash<QString, QString> props;

// pretty-printing only in debug mode (because of superfluous
// white spaces sent to server)
	if( m_debug ) {
		xml.setAutoFormatting( true );
		xml.setAutoFormattingIndent( 2 );
	}

	xml.writeStartDocument( );
	xml.writeDTD( QString( "<!DOCTYPE %1 SYSTEM '%2'>" ).arg( rootElement ).arg( docType ) );
	xml.writeStartElement( "", rootElement );
	xml.writeAttribute( "id", "1" );
	QString configID = m_globals->value( "configID" );
	xml.writeAttribute( "configID", configID );
	xml.writeEndElement( );
	xml.writeEndDocument( );

	qDebug( ) << "self-made XML request: " << data;

	props.insert( "doctype", docType );
	props.insert( "rootelement", rootElement );

	m_dataLoader->request( QString::number( (int)winId( ) ), m_name, requestName, data, &props );
}

void configurator_form::gotAnswer( QString requestName, QByteArray data )
{
	qDebug( ) << "got self-made XML answer for request: " << requestName << ":\n" << data;

	if( requestName == "ConfiguredComponents" ) {
		QXmlStreamReader xml( data );
		QString name;
		QString quantity;
		while( !xml.atEnd( ) ) {
			xml.readNext( );
			
			if( xml.isStartElement( ) && ( xml.name( ) == "name" ) ) {
				name = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "quantity" ) ) {
				quantity = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isEndElement( ) && ( xml.name( ) == "component" ) ) {

				QHBoxLayout *givenComponentLayout;
				QLabel *label_5;
				QSpacerItem *horizontalSpacer_4;
				QLabel *label;

				givenComponentLayout = new QHBoxLayout();
				givenComponentLayout->setObjectName(QString::fromUtf8("givenComponentLayout"));

				label_5 = new QLabel(this);
				label_5->setObjectName(QString::fromUtf8("label_5"));
				label_5->setText( QString( "%1 components %2" ).arg( quantity ).arg( name ) );

				givenComponentLayout->addWidget(label_5);
				horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
				givenComponentLayout->addItem(horizontalSpacer_4);

				label = new QLabel(this);
				label->setObjectName(QString::fromUtf8("label"));
				label->setText(QApplication::translate("Form", "given", 0, QApplication::UnicodeUTF8));

				givenComponentLayout->addWidget(label);

				verticalLayout->addLayout(givenComponentLayout);
			}
		}
	}
}

