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

// ConfiguratorWidget

ConfiguratorWidget::ConfiguratorWidget( ConfiguratorPlugin *_plugin, bool _debug, QWidget *_parent )
	: QWidget( _parent ), m_debug( _debug ), m_plugin( _plugin )
{
	initialize( );
}

void ConfiguratorWidget::initialize( )
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
	closeButton->setText(QApplication::translate("Form", "Close", 0, QApplication::UnicodeUTF8));
	closeButton->setProperty("form", QVariant(QString::fromUtf8("configurations")));
	horizontalLayout_5->addWidget(closeButton);

	verticalLayout->addLayout(horizontalLayout_5);

	QMetaObject::connectSlotsByName(this);
}

void ConfiguratorWidget::sendRequest( const QString docType, const QString rootElement, const QString requestName )
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

//	m_dataLoader->request( QString::number( (int)winId( ) ), m_name, requestName, data, &props );
	m_plugin->sendRequest( winId( ), xml );
}

void ConfiguratorWidget::handlePressMeButton( )
{
	QByteArray request;
	request.append( QString( "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>" ) );
	request.append( QString( "<!DOCTYPE \"employee\" SYSTEM \"ListEmployee.simpleform\">" ) );
	request.append( QString( "<employee/>" ) );

}

void ConfiguratorWidget::gotAnswer( const QByteArray& _data )
{
	QString xml( _data.data( ) );
	
	xml.replace( '&', "&amp;" ).replace( '<', "&lt;" ).replace( '>', "&gt;<br/>" );

	//~ m_label->setText( QString( "<html><body>%2</body></html>" ).arg( xml ) );
}

void ConfiguratorWidget::handleClearButton( )
{
	//~ m_label->setText( "" );
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
	m_debug = debug;
}

QWidget *ConfiguratorPlugin::createForm( DataLoader *_dataLoader, QWidget *_parent )
{
	qDebug( ) << "PLUGIN: creating a form of type" << name( );
	
	m_dataLoader = _dataLoader;
	
	ConfiguratorWidget *widget = new ConfiguratorWidget( this, m_debug, _parent );
	QString winId = QString::number( (int)widget->winId( ) );
	m_widgets.insert( winId, widget );
	
	return widget;
}

void ConfiguratorPlugin::sendRequest( WId wid, const QByteArray &_request )
{
	// TODO: how to initialize this one? With what?
	QString cmd;
	QString id = QString::number( (int)wid );
	QString tag = QString( "%1:%2" ).arg( id ).arg( m_tagCounter++ );

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
		widget->gotAnswer( _data );
	}
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2( formtest, ConfiguratorPlugin )
#endif // QT_VERSION < 0x050000
