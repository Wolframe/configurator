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

#include "FormWidget.hpp"

configurator_form::configurator_form( DataLoader *_dataLoader, const QString _name, QHash< QString, QString > *_globals, QWidget *_parent, bool _debug )
	: QWidget( _parent ), m_dataLoader( _dataLoader ), m_name( _name ),
	m_globals( _globals ), m_debug( _debug )
{
	initialize( );
}

void configurator_form::initialize( )
{
        if (this->objectName().isEmpty())
            this->setObjectName(QString::fromUtf8("Form"));
        this->setWindowTitle(QApplication::translate("Form", "Configurator", 0, QApplication::UnicodeUTF8));            

	m_addSignalMapper = new QSignalMapper( this );
	connect( m_addSignalMapper, SIGNAL( mapped( QObject * ) ),
		this, SLOT( addComponent( QObject * ) ) );
	m_deleteSignalMapper = new QSignalMapper( this );
	connect( m_deleteSignalMapper, SIGNAL( mapped( QObject * ) ),
		this, SLOT( deleteComponent( QObject * ) ) );

// every picked component or component picker gets added to a vertical layout       
        verticalLayout = new QVBoxLayout(this);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

// fixed componentes (given by recipe)              
        fixedComponentsLayout = new QVBoxLayout(this);        
        fixedComponentsLayout->setObjectName(QString::fromUtf8("fixedComponentsLayout"));
        verticalLayout->addLayout( fixedComponentsLayout );

// user picked components       
        userComponentsLayout = new QVBoxLayout(this);
        userComponentsLayout->setObjectName(QString::fromUtf8("userComponentsLayout"));
        verticalLayout->addLayout( userComponentsLayout );
        	
// visual separator
	QFrame *line;
	line = new QFrame(this);
	line->setObjectName(QString::fromUtf8("line"));
	line->setFrameShape(QFrame::HLine);
	line->setFrameShadow(QFrame::Sunken);
	verticalLayout->addWidget(line);

// things to configure
	toPickComponentsLayout = new QVBoxLayout(this);
	toPickComponentsLayout->setObjectName(QString::fromUtf8("toPickComponentsLayout"));
	verticalLayout->addLayout(toPickComponentsLayout);

// TODO: remove
	rest( );

// trigger filling of preconfigured components (given by the recipe)
	sendRequest( "ConfiguredComponentsFixRequest.simpleform", "component", "ConfiguredComponentsFix" );

// trigger filling of configured components (choosen by user)
	sendRequest( "ConfiguredComponentsUserRequest.simpleform", "component", "ConfiguredComponentsUser" );

// trigger filling of features still required to be fulfilled
	sendRequest( "RequiredFeaturesRequest.simpleform", "configuration", "RequiredFeatures" );
}

void configurator_form::rest( )
{
// close button, adding a dynamic property for form switching
	QHBoxLayout *horizontalLayout_5;
	QSpacerItem *horizontalSpacer_5;
	QSpacerItem *verticalSpacer;

	verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
	verticalLayout->addItem(verticalSpacer);

	horizontalLayout_5 = new QHBoxLayout();
	horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
	horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
	horizontalLayout_5->addItem(horizontalSpacer_5);

	QPushButton *closeButton;
	closeButton = new QPushButton(this);
	closeButton->setObjectName(QString::fromUtf8("closeButton"));
	closeButton->setText(QApplication::translate("Form", "Close", 0, QApplication::UnicodeUTF8));
	closeButton->setProperty("form", QVariant(QString::fromUtf8("configurations")));
	horizontalLayout_5->addWidget(closeButton);

	verticalLayout->addLayout(horizontalLayout_5);

	QMetaObject::connectSlotsByName(this);
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

void configurator_form::sendAddComponentRequest( int configID, int componentID, int quantity )
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
	xml.writeDTD( QString( "<!DOCTYPE %1 SYSTEM '%2'>" ).arg( "configuration" ).arg( "ConfiguratorAddComponentRequest.simpleform" ) );
	xml.writeStartElement( "", "configuration" );
	xml.writeTextElement( "id", QString::number( configID ) );
	xml.writeTextElement( "componentID", QString::number( componentID ) );
	xml.writeTextElement( "quantity", QString::number( quantity ) );
	xml.writeEndElement( );
	xml.writeEndDocument( );

	qDebug( ) << "self-made XML request: " << data;

	props.insert( "doctype", "ConfiguratorAddComponentRequest.simpleform" );
	props.insert( "rootelement", "configuration" );

	m_dataLoader->request( QString::number( (int)winId( ) ), m_name, "ConfiguratorAddComponentRequest", data, &props );
}

void configurator_form::sendDeleteComponentRequest( int configID, int componentID )
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
	xml.writeDTD( QString( "<!DOCTYPE %1 SYSTEM '%2'>" ).arg( "configuration" ).arg( "ConfiguratorDeleteComponentRequest.simpleform" ) );
	xml.writeStartElement( "", "configuration" );
	xml.writeTextElement( "id", QString::number( configID ) );
	xml.writeTextElement( "componentID", QString::number( componentID ) );
	xml.writeEndElement( );
	xml.writeEndDocument( );

	qDebug( ) << "self-made XML request: " << data;

	props.insert( "doctype", "ConfiguratorDeleteComponentRequest.simpleform" );
	props.insert( "rootelement", "configuration" );

	m_dataLoader->request( QString::number( (int)winId( ) ), m_name, "ConfiguratorDeleteComponentRequest", data, &props );
}

void configurator_form::gotAnswer( QString requestName, QByteArray data )
{
	qDebug( ) << "got self-made XML answer for request: " << requestName << ":\n" << data;

	if( requestName == "ConfiguredComponentsFix" ) {
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
				label_5->setText( QString( "%1 components '%2'" ).arg( quantity ).arg( name ) );

				givenComponentLayout->addWidget(label_5);
				horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
				givenComponentLayout->addItem(horizontalSpacer_4);

				label = new QLabel(this);
				label->setObjectName(QString::fromUtf8("label"));
				label->setText(QApplication::translate("Form", "given", 0, QApplication::UnicodeUTF8));

				givenComponentLayout->addWidget(label);

				fixedComponentsLayout->addLayout(givenComponentLayout);
			}
		}
	} else if( requestName == "ConfiguredComponentsUser" ) {
		QXmlStreamReader xml( data );
		int id;
		QString name;
		QString quantity;
		QString featureQuantityFrom;
		QString featureQuantityTo;
		while( !xml.atEnd( ) ) {
			xml.readNext( );	
					
			if( xml.isStartElement( ) && ( xml.name( ) == "component" ) ) {
				QXmlStreamAttributes attributes = xml.attributes( );
				foreach( QXmlStreamAttribute attr, attributes ) {
					if( attr.name( ) == "id" ) {
						id = attr.value( ).toString( ).toInt( );
					}
				}
			} else if( xml.isStartElement( ) && ( xml.name( ) == "name" ) ) {
				name = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "quantity" ) ) {
				quantity = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "featureMinQuantity" ) ) {
				featureQuantityFrom = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "featureMaxQuantity" ) ) {
				featureQuantityTo = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isEndElement( ) && ( xml.name( ) == "component" ) ) {
				QSpacerItem *horizontalSpacer_3;
				QLabel *label_4;
				QHBoxLayout *horizontalLayout_3;
				QPushButton *deleteButton;

				horizontalLayout_3 = new QHBoxLayout();
				horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
				label_4 = new QLabel(this);
				label_4->setObjectName(QString::fromUtf8("label_4"));
				label_4->setText( QString( "%1 components '%2' fulfiling feature (quantity required %3 to %4)" ).arg( quantity ).arg( name ).arg( featureQuantityFrom ).arg( featureQuantityTo ) );

				horizontalLayout_3->addWidget(label_4);
				horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
				horizontalLayout_3->addItem(horizontalSpacer_3);

				deleteButton = new QPushButton(this);
				deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
				deleteButton->setText(QApplication::translate("Form", "Delete", 0, QApplication::UnicodeUTF8));

				horizontalLayout_3->addWidget(deleteButton);

				connect( deleteButton, SIGNAL( clicked( ) ),
					m_deleteSignalMapper, SLOT( map( ) ) );
					
				DeleteComponentWidgets *componentWidgets = new DeleteComponentWidgets( deleteButton, id );
				m_deleteSignalMapper->setMapping( deleteButton, componentWidgets );

				userComponentsLayout->addLayout(horizontalLayout_3);
			}
		}
	} else if( requestName == "RequiredFeatures" ) {
		QXmlStreamReader xml( data );
		QString name;
		QString minQuantity;
		QString maxQuantity;
		QString id;
		QString componentCategory;
		QString componentName;
		QString componentID;
		QString lastId = "0";
		QComboBox *comboBox;
		while( !xml.atEnd( ) ) {
			xml.readNext( );
			if( xml.isStartElement( ) && ( xml.name( ) == "id" ) ) {
				id = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "name" ) ) {
				name = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "minQuantity" ) ) {
				minQuantity = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "maxQuantity" ) ) {
				maxQuantity = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "componentID" ) ) {
				componentID = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "componentName" ) ) {
				componentName = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "componentCategory" ) ) {
				componentCategory = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			} else if( xml.isEndElement( ) && ( xml.name( ) == "category" ) ) {
				if( id != lastId ) {
					lastId = id;

					QHBoxLayout *horizontalLayout;
					horizontalLayout = new QHBoxLayout();
					horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

					QLabel *label_2;
					label_2 = new QLabel(this);
					label_2->setObjectName(QString::fromUtf8("label_2"));
					label_2->setText( QString( "Category '%1' (quantity required %2 to %3)" ).arg( name ).arg( minQuantity ).arg( maxQuantity ) );
					horizontalLayout->addWidget(label_2);
					
					QSpacerItem *horizontalSpacer;
					horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
					horizontalLayout->addItem(horizontalSpacer);

					QSpinBox *spinBox;
					spinBox = new QSpinBox(this);
					spinBox->setObjectName(QString::fromUtf8("spinBox"));
					horizontalLayout->addWidget(spinBox);

					comboBox = new QComboBox(this);
					comboBox->setObjectName(QString::fromUtf8("comboBox"));
					comboBox->clear();
					comboBox->addItem( QString( "%1 - %2" ).arg( componentCategory ).arg( componentName ) );
					comboBox->setItemData( comboBox->count()-1, QVariant( componentID ), Qt::UserRole );

					horizontalLayout->addWidget(comboBox);

					QPushButton *addButton;
					addButton = new QPushButton(this);
					addButton->setObjectName(QString::fromUtf8("addButton"));
					addButton->setText(QApplication::translate("Form", "Add", 0, QApplication::UnicodeUTF8));
					horizontalLayout->addWidget(addButton);

					toPickComponentsLayout->addLayout(horizontalLayout);

					connect( addButton, SIGNAL( clicked( ) ),
						m_addSignalMapper, SLOT( map( ) ) );
					
					AddComponentWidgets *componentWidgets = new AddComponentWidgets( addButton, comboBox, spinBox );
					m_addSignalMapper->setMapping( addButton, componentWidgets );
				} else {
					comboBox->addItem( QString( "%1 - %2" ).arg( componentCategory ).arg( componentName ) );
					comboBox->setItemData( comboBox->count()-1, QVariant( componentID ), Qt::UserRole );
				}
			}
		}
	} else if( requestName == "ConfiguratorAddComponentRequest" ||
		requestName == "ConfiguratorDeleteComponentRequest" ) {
		qobject_cast<FormWidget *>( parent( ) )->reload( );
	}
}

void configurator_form::addComponent( QObject *object )
{
	AddComponentWidgets *componentWidgets = qobject_cast<AddComponentWidgets *>( object );
	int componentID = componentWidgets->m_componentBox->itemData( componentWidgets->m_componentBox->currentIndex( ), Qt::UserRole ).toInt( );
	int quantity = componentWidgets->m_spinBox->value( );
	
	qDebug( )
		<< "ADD"
		<< componentID
		<< quantity
		<< componentWidgets->m_componentBox->itemText( componentWidgets->m_componentBox->currentIndex( ) );

	int configID = m_globals->value( "configID" ).toInt( );

	sendAddComponentRequest( configID, componentID, quantity );	
}

void configurator_form::deleteComponent( QObject *object )
{
	DeleteComponentWidgets *componentWidgets = qobject_cast<DeleteComponentWidgets *>( object );

	int configID = m_globals->value( "configID" ).toInt( );
	
	qDebug( )
		<< "DELETE"
		<< componentWidgets->m_componentID;
		
	sendDeleteComponentRequest( configID, componentWidgets->m_componentID );
}
