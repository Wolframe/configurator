#include "configurator_form.h"

#include <QXmlStreamWriter>
#include <QByteArray>
#include <QDebug>
#include <QLabel>

configurator_form::configurator_form( DataLoader *_dataLoader, const QString _name, QHash< QString, QString > *_globals, QWidget *_parent, bool _debug )
	: QWidget( _parent ), m_dataLoader( _dataLoader ), m_name( _name ), 
	m_globals( _globals ), m_debug( _debug )
{
	initialize( );
}

void configurator_form::initialize( )
{
	m_layout = new QVBoxLayout( this );
	
	sendRequest( "ConfiguredComponentsRequest.simpleform", "component" );
}

void configurator_form::sendRequest( const QString docType, const QString rootElement )
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

	m_dataLoader->request( QString::number( (int)winId( ) ), m_name, QString( ), data, &props );
}

void configurator_form::gotAnswer( QString /*widgetName*/, QByteArray data )
{
	qDebug( ) << "got self-made XML answer: " << data;

	QXmlStreamReader xml( data );
	while( !xml.atEnd( ) ) {
		xml.readNext( );
		if( xml.isStartElement( ) && ( xml.name( ) == "component" ) ) {
			QString text = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			QLabel *label = new QLabel( text, this );
			m_layout->addWidget( label );
		}
	}
}

