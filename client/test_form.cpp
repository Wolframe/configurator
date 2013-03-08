#include "test_form.h"

#include <QXmlStreamWriter>
#include <QByteArray>
#include <QDebug>
#include <QLabel>

test_form::test_form( DataLoader *_dataLoader, const QString _name, QWidget *_parent, bool _debug )
	: QWidget( _parent ), m_dataLoader( _dataLoader ), m_name( _name ), m_debug( _debug )
{
	initialize( );
}

void test_form::initialize( )
{
	m_layout = new QVBoxLayout( this );
	
	sendRequest( "TagHierarchyRequest.simpleform", "tag" );
}

void test_form::sendRequest( const QString docType, const QString rootElement )
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
	xml.writeEndElement( );
	xml.writeEndDocument( );

	qDebug( ) << "self-made XML request: " << data;

	props.insert( "doctype", docType );
	props.insert( "rootelement", rootElement );

	m_dataLoader->request( QString::number( (int)winId( ) ), m_name, QString( ), data, &props );
}

void test_form::gotAnswer( QString /*widgetName*/, QByteArray data )
{
	qDebug( ) << "got self-made XML answer: " << data;

	QXmlStreamReader xml( data );
	while( !xml.atEnd( ) ) {
		xml.readNext( );
		if( xml.isStartElement( ) && ( xml.name( ) == "tag" ) ) {
			QString text = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
			QLabel *label = new QLabel( text, this );
			m_layout->addWidget( label );
		}
	}
}

