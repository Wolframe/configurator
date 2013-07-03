/************************************************************************

 Copyright (C) 2011 - 2013 Project Wolframe.
 All rights reserved.

 This file is part of Project Wolframe.

 Commercial Usage
    Licensees holding valid Project Wolframe Commercial licenses may
    use this file in accordance with the Project Wolframe
    Commercial License Agreement provided with the Software or,
    alternatively, in accordance with the terms contained
    in a written agreement between the licensee and Project Wolframe.

 GNU General Public License Usage
    Alternatively, you can redistribute this file and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Wolframe is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Wolframe.  If not, see <http://www.gnu.org/licenses/>.

 If you have questions regarding the use of this file, please contact
 Project Wolframe.

************************************************************************/

#include "ConfiguratorPlugin.hpp"

#include <QXmlStreamWriter>
#include <QByteArray>
#include <QDebug>
#include <QLabel>

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QFrame>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QSpacerItem>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>

// ConfiguratorWidget

ConfiguratorWidget::ConfiguratorWidget( ConfiguratorPlugin *_plugin, const FormCall &formCall, bool _debug, QHash<QString,QVariant>* _globals, QWidget *_parent )
	: QWidget( _parent ), m_formCall( formCall ), m_debug( _debug ), m_globals( _globals ), m_plugin( _plugin )
{
	initialize( );
}

void ConfiguratorWidget::initialize( )
{
        if (this->objectName().isEmpty())
            this->setObjectName(QString::fromUtf8("Form"));
        this->setWindowTitle(QApplication::translate("Form", "Configurator", 0));            

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
	sendRequest( "ConfiguratorRequiredFeaturesRequest.simpleform", "configuration", "ConfiguratorRequiredFeatures" );
}

void ConfiguratorWidget::rest( )
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
	closeButton->setText(QApplication::translate("Form", "Close", 0));
	closeButton->setProperty("form", QVariant(QString::fromUtf8("_CLOSE_")));
	horizontalLayout_5->addWidget(closeButton);

	verticalLayout->addLayout(horizontalLayout_5);

	QMetaObject::connectSlotsByName(this);
}

void ConfiguratorWidget::sendRequest( const QString &docType, const QString &rootElement, const QString &widgetCmd )
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
	QString configID = getFormParam( "configID" );
	xml.writeAttribute( "configID", configID );
	xml.writeEndElement( );
	xml.writeEndDocument( );

	qDebug( ) << "self-made XML request: " << data;

	m_plugin->sendRequest( winId( ), widgetCmd, data );
}

QString ConfiguratorWidget::getFormParam( const QString &key ) const
{
	QList<FormCall::Parameter> parms = m_formCall.parameter( );
	foreach( FormCall::Parameter parm, parms ) {
		if( parm.first == key ) {
			return parm.second.toString( );
		}
	}
	return QString( "" );
}

void ConfiguratorWidget::handlePressMeButton( )
{
	QByteArray request;
	request.append( QString( "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>" ) );
	request.append( QString( "<!DOCTYPE \"employee\" SYSTEM \"ListEmployee.simpleform\">" ) );
	request.append( QString( "<employee/>" ) );

}

void ConfiguratorWidget::sendAddComponentRequest( int configID, int componentID, int quantity )
{
	QByteArray data;
	QXmlStreamWriter xml( &data );

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

	m_plugin->sendRequest( winId( ), "ConfiguratorAddComponent", data );
}

void ConfiguratorWidget::sendDeleteComponentRequest( int configID, int componentID )
{
	QByteArray data;
	QXmlStreamWriter xml( &data );

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

	m_plugin->sendRequest( winId( ), "ConfiguratorDeleteComponent", data );
}

void ConfiguratorWidget::gotAnswer( const QString &widgetCmd, const QByteArray data )
{
	qDebug( ) << "got self-made XML answer for request: " << widgetCmd << ":\n" << data;

	if( widgetCmd == "ConfiguredComponentsFix" ) {
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
				label->setText(QApplication::translate("Form", "given", 0));

				givenComponentLayout->addWidget(label);

				fixedComponentsLayout->addLayout(givenComponentLayout);
			}
		}
	} else if( widgetCmd == "ConfiguredComponentsUser" ) {
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
				label_4->setText( QString( "%1 components '%2'" ).arg( quantity ).arg( name ) );

				horizontalLayout_3->addWidget(label_4);
				horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
				horizontalLayout_3->addItem(horizontalSpacer_3);

				deleteButton = new QPushButton(this);
				deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
				deleteButton->setText(QApplication::translate("Form", "Delete", 0));

				horizontalLayout_3->addWidget(deleteButton);

				connect( deleteButton, SIGNAL( clicked( ) ),
					m_deleteSignalMapper, SLOT( map( ) ) );
					
				DeleteComponentWidgets *componentWidgets = new DeleteComponentWidgets( deleteButton, id );
				m_deleteSignalMapper->setMapping( deleteButton, componentWidgets );

				userComponentsLayout->addLayout(horizontalLayout_3);
			}
		}
	} else if( widgetCmd == "ConfiguratorRequiredFeatures" ) {
		QXmlStreamReader xml( data );
		QString name;
		int minQuantity;
		int maxQuantity;
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
				minQuantity = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement ).toInt( );
			} else if( xml.isStartElement( ) && ( xml.name( ) == "maxQuantity" ) ) {
				maxQuantity = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement ).toInt( );
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
					label_2->setText( QString( "Category '%1'" ).arg( name ) );
					horizontalLayout->addWidget(label_2);
					
					QSpacerItem *horizontalSpacer;
					horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
					horizontalLayout->addItem(horizontalSpacer);

					QSpinBox *spinBox;
					spinBox = new QSpinBox(this);
					spinBox->setObjectName(QString::fromUtf8("spinBox"));
					spinBox->setRange( minQuantity, maxQuantity );
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
					addButton->setText(QApplication::translate("Form", "Add", 0));
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
	} else if( widgetCmd == "ConfiguratorAddComponent" ||
		widgetCmd == "ConfiguratorDeleteComponent" ) {
		emit reload( );
	}
}

void ConfiguratorWidget::addComponent( QObject *object )
{
	AddComponentWidgets *componentWidgets = qobject_cast<AddComponentWidgets *>( object );
	int componentID = componentWidgets->m_componentBox->itemData( componentWidgets->m_componentBox->currentIndex( ), Qt::UserRole ).toInt( );
	int quantity = componentWidgets->m_spinBox->value( );
	
	qDebug( )
		<< "ADD"
		<< componentID
		<< quantity
		<< componentWidgets->m_componentBox->itemText( componentWidgets->m_componentBox->currentIndex( ) );

	int configID = getFormParam( "configID" ).toInt( );

	sendAddComponentRequest( configID, componentID, quantity );	
}

void ConfiguratorWidget::deleteComponent( QObject *object )
{
	DeleteComponentWidgets *componentWidgets = qobject_cast<DeleteComponentWidgets *>( object );

	int configID = getFormParam( "configID" ).toInt( );
	
	qDebug( )
		<< "DELETE"
		<< componentWidgets->m_componentID;
		
	sendDeleteComponentRequest( configID, componentWidgets->m_componentID );
}

// ConfiguratorPlugin

ConfiguratorPlugin::ConfiguratorPlugin( ) : QObject( ),
	m_tagCounter( 0 )
{
}

QString ConfiguratorPlugin::name( ) const
{
	return "configurator";
}

QString ConfiguratorPlugin::windowTitle( ) const
{
	return tr( "Modify configuration" );
}

void ConfiguratorPlugin::setDebug( bool _debug )
{
	m_debug = _debug;
}

QWidget *ConfiguratorPlugin::createForm( const FormCall &formCall, DataLoader *_dataLoader, bool _debug, QHash<QString,QVariant>* _globals, QWidget *_parent )
{
	qDebug( ) << "PLUGIN: creating a form of type" << name( );

	m_dataLoader = _dataLoader;
	m_debug = _debug;
	m_parent = _parent;
	
	ConfiguratorWidget *widget = new ConfiguratorWidget( this, formCall, m_debug, _globals, _parent );
	QString winId = QString::number( (int)widget->winId( ) );
	m_widgets.insert( winId, widget );

	connect( widget, SIGNAL( reload( ) ), _parent, SLOT( reload( ) ) );
	
	return widget;
}

void ConfiguratorPlugin::sendRequest( WId wid, const QString &widgetCmd, const QByteArray &_request )
{
	QString cmd; // TODO: how to initialize this one? With what?
	QString id = QString::number( (int)wid );
	QString tag = QString( "%1:%2:%3" ).arg( id ).arg( m_tagCounter++ ).arg( widgetCmd );

	m_dataLoader->datarequest( cmd, tag, _request );	
}

void ConfiguratorPlugin::gotAnswer( const QString& _tag, const QByteArray& _data )
{
	QStringList parts = _tag.split( ':' );
	QHash<QString, ConfiguratorWidget *>::const_iterator it = m_widgets.find( parts[0] );
	if( it == m_widgets.end( ) ) {
		qDebug( ) << "Unknown tag" << _tag << ", don't know where to deliver the message";
		return;
	}
	
	ConfiguratorWidget *widget = *it;
	if( widget ) {
		widget->gotAnswer( parts[2], _data );
	}
}

void ConfiguratorPlugin::gotError( const QString& /*tag_*/, const QByteArray& error_ )
{
	QMessageBox::critical( m_parent, tr( "Configurator form error" ), QString( error_ ), QMessageBox::Ok );
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2( formtest, ConfiguratorPlugin )
#endif // QT_VERSION < 0x050000
