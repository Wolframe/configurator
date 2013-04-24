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

#include "FormWidget.hpp"
#include "global.hpp"

#include <QDebug>
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QFrame>
#include <QList>

#include "categories_features_add_form.h"
#include "categories_features_edit_form.h"
#include "categories_features_form.h"
#include "categories_form.h"
#include "category_add_form.h"
#include "category_edit_form.h"
#include "component_add_form.h"
#include "component_edit_form.h"
#include "components_features_add_form.h"
#include "components_features_edit_form.h"
#include "components_features_form.h"
#include "components_form.h"
#include "configuration_add_form.h"
#include "configuration_edit_form.h"
#include "configurations_form.h"
#include "feature_add_form.h"
#include "feature_edit_form.h"
#include "features_form.h"
#include "manufacturer_add_form.h"
#include "manufacturer_edit_form.h"
#include "manufacturers_form.h"
#include "picture_add_form.h"
#include "picture_edit_form.h"
#include "picture_info_form.h"
#include "pictures_form.h"
#include "recipe_add_form.h"
#include "recipe_content_add_form.h"
#include "recipe_content_edit_form.h"
#include "recipe_content_form.h"
#include "recipe_component_add_form.h"
#include "recipe_component_edit_form.h"
#include "recipe_component_form.h"
#include "recipe_edit_form.h"
#include "recipes_form.h"
#include "tag_add_form.h"
#include "tag_edit_form.h"
#include "tags_form.h"
#include "configurator_form.h"
#include "feature_equivalence_form.h"
#include "feature_equivalence_add_form.h"
#include "feature_equivalence_edit_form.h"

FormWidget::FormWidget( FormLoader *_formLoader, DataLoader *_dataLoader, /* QUiLoader *_uiLoader, */ QWidget *_parent, bool _debug )
	: QWidget( _parent ), m_form( ),
	  /* m_uiLoader( _uiLoader ), */ m_formLoader( _formLoader ),
	  m_dataLoader( _dataLoader ), m_ui( 0 ), m_dataHandler( 0 ),
	  m_locale( DEFAULT_LOCALE ), m_layout( 0 ), m_forms( ),
	  m_globals( 0 ), m_props( 0 ), m_debug( _debug ), m_modal( false ),
	  m_switchForm( false )
{
	initialize( );
}

void FormWidget::initialize( )
{
// maps data between constructed widgets from .ui and the data loader
	m_dataHandler = new DataHandler( m_dataLoader, this, m_debug );

// the global map to pass variables between forms
	m_globals = new QHash< QString, QString >( );

	if( !m_layout ) {
		m_layout = new QHBoxLayout( this );
	}

// link the form loader for form loader notifications
	connect( m_formLoader, SIGNAL( formLoaded( QString, QByteArray ) ),
		this, SLOT( formLoaded( QString, QByteArray ) ) );
	connect( m_formLoader, SIGNAL( formLocalizationLoaded( QString, QByteArray ) ),
		this, SLOT( formLocalizationLoaded( QString, QByteArray ) ) );
	connect( m_formLoader, SIGNAL( formListLoaded( QStringList ) ),
		this, SLOT( formListLoaded( QStringList ) ) );

// link the data loader to our form widget
	connect( m_dataLoader, SIGNAL( answer( QString, QString, QByteArray ) ),
		this, SLOT( gotAnswer( QString, QString, QByteArray ) ) );

// signal dispatcher for form buttons
	m_signalMapper = new QSignalMapper( this );

// the form must be switched after 'action' has been taken in the current form
	connect( m_signalMapper, SIGNAL( mapped( QObject * ) ),
		this, SLOT( switchForm( QObject * ) ) );
}

void FormWidget::formListLoaded( QStringList forms )
{
// remember list of forms, so we can connect buttons to them
	m_forms = forms;
}

void FormWidget::storeToGlobals( QHash<QString, QString> *props )
{
	foreach( const QString key, props->keys( ) ) {
		if( key.startsWith( "global." ) ) {
			QStringList parts = key.split( "." );
			m_globals->insert( parts[1], props->value( key ) );
		}
	}

	qDebug( ) << "GLOBALS:" << *m_globals;
}

void FormWidget::restoreFromGlobals( QHash<QString, QString> *props )
{
	foreach( const QString key, props->keys( ) ) {
		QString value = props->value( key );
		if( value.startsWith( "{" ) && value.endsWith( "}" ) ) {
			QString refKey = value.mid( 1, value.length( ) - 2 );
			if( refKey.startsWith( "global." ) ) {
				QStringList parts = refKey.split( "." );
				if ( parts.length() > 2 ) {
					emit error( QString( "illegal global variable name '%1'").arg( refKey ) );
				}
				QString globalKey = parts[1];
				if( m_globals->contains( globalKey ) ) {
					props->insert( key, m_globals->value( globalKey ) );
				} else {
					// unknown value, map to empty
					props->insert( key, "" );
				}
			} else {
				QString evaluated = m_dataHandler->readFormVariable( refKey, m_ui );
				if( !evaluated.isNull( ) ) {
					props->insert( key, evaluated );
				} else {
					// unknown value, map to empty
					props->insert( key, "" );
				}
			}
		}
		qDebug( ) << "GLOBALS SUBSTITUTE" << key << props->value( key );
	}
}

void FormWidget::switchForm( QObject *object )
{
	WidgetProperties *widgetProps = qobject_cast<WidgetProperties *>( object );
	QHash<QString, QString> *props = widgetProps->props( );

	restoreFromGlobals( props );
	
// execute the action (old style, action mandatory)
// execute the action (new style request, doctype mandatory)
	if( props->contains( "action" ) || props->contains( "doctype" ) ) {
		m_switchForm = true;
		sendRequest( props );
	} else {
// store globals normally, we don't have a answer to a request which we
// must evaluate
		storeToGlobals( props );
	
// switch form now, formLoaded will inform parent and others,
// if we have a request we should wait for the result before
// switching the form
		if( props->contains( "form" ) ) {
			QString nextForm = props->value( "form" );
			if( m_modal && nextForm == "_CLOSE_" ) {
				emit closed( );
			} else {
				loadForm( nextForm );
			}
		}
	}
}

void FormWidget::reload( )
{
	loadForm( m_form );
}

FormWidget::~FormWidget( )
{
	if( m_ui ) delete m_ui;
	if( m_dataHandler ) delete m_dataHandler;
	if( !m_modal && m_globals ) delete m_globals;
}

QHash<QString, QString> *FormWidget::globals( ) const
{
	return m_globals;
}

void FormWidget::setGlobals( QHash<QString, QString> *_globals )
{
	delete m_globals;
	m_globals = _globals;
}

void FormWidget::setForm( const QString &_form )
{
	loadForm( _form );
}

QString FormWidget::form( ) const
{
	return m_form;
}

QIcon FormWidget::getWindowIcon( ) const
{
	return m_ui->windowIcon( );
}

void FormWidget::loadForm( QString name, bool modal )
{
	if( !m_formLoader ) return;

//	if( name == m_form ) return;

	m_previousForm = m_form;
	m_form = name;
	m_modal = modal;

	qDebug( ) << "Initiating form load for " << m_form << m_modal;

	m_formLoader->initiateFormLoad( m_form );
}

void FormWidget::setLocale( QLocale locale )
{
	m_locale = locale;
}

void FormWidget::setLanguage( QString language )
{
	setLocale( QLocale( language ) );
}

void FormWidget::changeEvent( QEvent* _event )
{
	if( _event ) {
		if ( _event->type( ) == QEvent::LanguageChange )
			m_ui->update( );
	}

	QWidget::changeEvent( _event );
}

void FormWidget::formLocalizationLoaded( QString name, QByteArray localization )
{
	qDebug( ) << "Form localization loaded for " << name
		<< ", locale " << m_locale.name( )
		<< ", size " << localization.length( );

	qApp->removeTranslator( &m_translator );

	if( m_locale.name( ) != DEFAULT_LOCALE ) {
		if( !m_translator.load( (const uchar *)localization.constData( ), localization.length( ) ) ) {
			qWarning( ) << "Error while loading translations for form " <<
				name << " for locale " << m_locale.name( );
			return;
		}
		qApp->installTranslator( &m_translator );
	}

	QEvent ev( QEvent::LanguageChange );
	qApp->sendEvent( qApp, &ev );

// signal completion of form loading
	qDebug( ) << "Done loading form" << name;
	emit formLoaded( m_form );
}

QString FormWidget::readDynamicStringProperty( QObject *o, const char *name )
{
	QVariant v = o->property( name );
	if( !v.isValid( ) ) {
		return QString( );
	} else {
		return v.toString( );
	}
}

void FormWidget::writeDynamicStringProperty( QObject *o, const char *name, const QString &value )
{
	QVariant v( value );
	o->setProperty( name, v );
	qDebug( ) << "setting dynamic property" << name << ":" << value << "in" << o;
}

void FormWidget::readDynamicStringProperties( QHash<QString, QString> *props, QObject *o )
{
	foreach( QByteArray b, o->dynamicPropertyNames( ) ) {
		QString propName = QString::fromAscii( b.data( ) );
		QString propValue = readDynamicStringProperty( o, b.data( ) );
		props->insert( propName, propValue );
	}
}

void FormWidget::formLoaded( QString name, QByteArray formXml )
{
// that's not us
	if( name != m_form ) return;

	qDebug( ) << "Form " << name << " loaded";

// read the form and construct it from the UI file
	QWidget *oldUi = m_ui;
	QBuffer buf( &formXml );
//	m_ui = m_uiLoader->load( &buf, this );

	m_ui = 0;
	if( name == "categories_features_add" ) {
		m_ui = new categories_features_add_form( this );
	}
	else if( name == "categories_features_edit" ) {
		m_ui = new categories_features_edit_form( this );
	}
	else if( name == "categories_features" ) {
		m_ui = new categories_features_form( this );
	}
	else if( name == "categories" ) {
		m_ui = new categories_form( this );
	}
	else if( name == "category_add" ) {
		m_ui = new category_add_form( this );
	}
	else if( name == "category_edit" ) {
		m_ui = new category_edit_form( this );
	}
	else if( name == "component_add" ) {
		m_ui = new component_add_form( this );
	}
	else if( name == "component_edit" ) {
		m_ui = new component_edit_form( this );
	}
	else if( name == "components_features_add" ) {
		m_ui = new components_features_add_form( this );
	}
	else if( name == "components_features_edit" ) {
		m_ui = new components_features_edit_form( this );
	}
	else if( name == "components_features" ) {
		m_ui = new components_features_form( this );
	}
	else if( name == "components" ) {
		m_ui = new components_form( this );
	}
	else if( name == "configuration_add" ) {
		m_ui = new configuration_add_form( this );
	}
	else if( name == "configuration_edit" ) {
		m_ui = new configuration_edit_form( this );
	}
	else if( name == "configurations" ) {
		m_ui = new configurations_form( this );
	}
	else if( name == "feature_add" ) {
		m_ui = new feature_add_form( this );
	}
	else if( name == "feature_edit" ) {
		m_ui = new feature_edit_form( this );
	}
	else if( name == "features" ) {
		m_ui = new features_form( this );
	}
	else if( name == "manufacturer_add" ) {
		m_ui = new manufacturer_add_form( this );
	}
	else if( name == "manufacturer_edit" ) {
		m_ui = new manufacturer_edit_form( this );
	}
	else if( name == "manufacturers" ) {
		m_ui = new manufacturers_form( this );
	}
	else if( name == "picture_add" ) {
		m_ui = new picture_add_form( this );
	}
	else if( name == "picture_edit" ) {
		m_ui = new picture_edit_form( this );
	}
	else if( name == "picture_info" ) {
		m_ui = new picture_info_form( this );
	}
	else if( name == "pictures" ) {
		m_ui = new pictures_form( this );
	}
	else if( name == "recipe_add" ) {
		m_ui = new recipe_add_form( this );
	}
	else if( name == "recipe_content_add" ) {
		m_ui = new recipe_content_add_form( this );
	}
	else if( name == "recipe_content_edit" ) {
		m_ui = new recipe_content_edit_form( this );
	}
	else if( name == "recipe_content" ) {
		m_ui = new recipe_content_form( this );
	}
	else if( name == "recipe_component_add" ) {
		m_ui = new recipe_component_add_form( this );
	}
	else if( name == "recipe_component_edit" ) {
		m_ui = new recipe_component_edit_form( this );
	}
	else if( name == "recipe_component" ) {
		m_ui = new recipe_component_form( this );
	}
	else if( name == "recipe_edit" ) {
		m_ui = new recipe_edit_form( this );
	}
	else if( name == "recipes" ) {
		m_ui = new recipes_form( this );
	}
	else if( name == "tag_add" ) {
		m_ui = new tag_add_form( this );
	}
	else if( name == "tag_edit" ) {
		m_ui = new tag_edit_form( this );
	}
	else if( name == "tags" ) {
		m_ui = new tags_form( this );
	}
	else if( name == "feature_equivalence" ) {
		m_ui = new feature_equivalence_form( this );
	}
	else if( name == "feature_equivalence_add" ) {
		m_ui = new feature_equivalence_add_form( this );
	}
	else if( name == "feature_equivalence_edit" ) {
		m_ui = new feature_equivalence_edit_form( this );
	}
	else if( name == "configurator" ) {
		m_ui = new configurator_form( m_dataLoader, "configurator", m_globals, this, m_debug );
	}

	if( m_ui == 0 ) {
// something went wrong loading or constructing the form
		m_ui = oldUi;
		m_form = m_previousForm;
		emit error( tr( "Unable to load form '%1', does it exist?" ).arg( name ) );
		return;
	}
	buf.close( );
	qDebug( ) << "Constructed UI form XML for form" << name << m_modal;

// if we have a modal dialog, we must not replace our own form, but emit
// a signal, so the main window can rearange and load the form modal in
// a new window
	if( !m_modal && m_ui->isModal( ) ) {
		m_ui = oldUi;
		m_form = m_previousForm;
		emit formModal( name );
		return;
	}

// add new form to layout (which covers the whole widget)
	m_layout->addWidget( m_ui );

	setWindowTitle( m_ui->windowTitle( ) );

	if( oldUi ) {
		m_ui->move( oldUi->pos( ) );
		oldUi->hide( );
		oldUi->deleteLater( );
		oldUi->setParent( 0 );
	}
	m_ui->show( );

// set localization now
	qDebug( ) << "Starting to load localization for form" << name;
	m_formLoader->initiateFormLocalizationLoad( m_form, m_locale );

// connect actions and forms
// connect push buttons with form names to loadForms
	qDebug( ) << "Checking form" << name << "for dynamic properties 'form' and 'action'";
	QList<QWidget *> widgets = m_ui->findChildren<QWidget *>( );
	foreach( QWidget *widget, widgets ) {
		QString clazz = widget->metaObject( )->className( );
		QString _name = widget->objectName( );

		if( clazz == "QPushButton" ) {
			QHash<QString, QString> *props = new QHash<QString, QString>( );
			readDynamicStringProperties( props, widget );

			qDebug( ) << "connecting button" << _name << "to properties" << *props;

			QPushButton *pushButton = qobject_cast<QPushButton *>( widget );

			connect( pushButton, SIGNAL( clicked( ) ),
				m_signalMapper, SLOT( map( ) ) );

			WidgetProperties *widgetProps = new WidgetProperties( props );
			m_signalMapper->setMapping( pushButton, widgetProps );
		}
	}

// create properties
	QHash<QString, QString> *props = new QHash<QString, QString>( );
	readDynamicStringProperties( props, m_ui );
	restoreFromGlobals( props );

// reset the form now, this also loads the domains
	m_dataHandler->resetFormData( m_ui );
	m_dataHandler->loadFormDomains( m_form, m_ui );

// check for 'initAction' (old style, explicit initAction on form element)
// map it to action, execute request
	if( props->contains( "initAction" ) ) {
		QString initAction = props->value( "initAction" );
		props->insert( "action", initAction );
		sendRequest( props );
	}
// new style: 'doctype' on form widget, execute loading request
	if( props->contains( "doctype" ) ) {
		sendRequest( props );
	}

// load localication of the form now
	qDebug( ) << "Initiating form locatization load for " << m_form << " and locale "
		<< m_locale.name( );
	m_formLoader->initiateFormLocalizationLoad( m_form, m_locale );
}

void FormWidget::sendRequest( QHash<QString, QString> *props )
{
	qDebug( ) << "Handling request for form " << m_form << "[" << *props << "]";

// go trough the widgets of the form and construct the request XML
	QByteArray xml;
	m_dataHandler->writeFormData( m_form, m_ui, &xml, props );

// HACK: m_props
	qDebug( ) << "props(sendRequest):" << props << this;
	m_props = props;

	QString action = props->value( "action" );
	if( !action.isEmpty( ) && action.contains( "." ) ) {
		QStringList parts = action.split( "." );

		if( parts[0].isNull( ) ) {
			qWarning( ) << "Expecting a action of the form <widget>.<action>";
			return;
		}
		QString name = parts[0];

		// expecting a property identifier as second argument
		if( parts[1].isNull( ) ) {
			qWarning( ) << "Expecting a function name in action" << action;
			return;
		}
		QString function = parts[1];

		QWidget *widget = qFindChild<QWidget *>( m_ui, name );
		// no widget found with that name
		if( !widget ) {
			qWarning( ) << "Unknown widget" << name << "in action" << action << "of form" << m_form;
			return;
		}

		// we only support reload of domains in other widgets currently
		if( function != "reload" ) {
			qWarning( ) << "Unsupported action function" << function << "in widget" << name;
			return;
		}

		m_dataHandler->clearFormData( m_ui, name );
		m_dataHandler->resetFormData( m_ui, name );
		m_dataHandler->loadFormDomains( m_form, m_ui, name );
	} else {
		// send regular request	for the form
		m_dataLoader->request( QString::number( (int)winId( ) ), m_form, QString( ), xml, props );
	}
}

void FormWidget::gotAnswer( QString formName, QString widgetName, QByteArray data )
{
// that's not us
	if( formName != m_form ) return;

	qDebug( ) << "Got answer for form" << formName;

// do whatever we have to do with data to the widgets
	if( !data.isEmpty( ) ) {
		if( formName == "configurator" ) {
			qobject_cast<configurator_form *>( m_ui )->gotAnswer( widgetName, data );
		} else {
			if( !widgetName.isEmpty( ) ) {
				qDebug( ) << "Answer is for local widget" << widgetName << "in form" << formName;

// get properties if widget
				QWidget *widget = m_ui->findChild<QWidget *>( widgetName );
				QHash<QString, QString> *props = new QHash<QString, QString>( );
				readDynamicStringProperties( props, widget );
				restoreFromGlobals( props );

// restore domains and state
				m_dataHandler->loadFormDomain( formName, widgetName, m_ui, data, props );
			} else {
				// HACK: m_props are the properties of the form
				qDebug( ) << "props(gotAnswer):" << m_props << this;
				m_dataHandler->readFormData( formName, m_ui, data, m_props );
			}
		}
	}

// switch now after having received the answer to our request
	if( m_switchForm && !m_dataLoader->hasRunningRequests( ) && m_props && m_props->contains( "form" ) ) {
		m_switchForm = false;
		QString nextForm = m_props->value( "form" );
		if( m_modal && nextForm == "_CLOSE_" ) {
			emit closed( );
		} else {
// set global variables here based on answers from the server, should be something like
// 'answer.configuration.id', which is a path into the returned structure, for now
// hardcoded
			foreach( const QString key, m_props->keys( ) ) {
				QString value = m_props->value( key );
				if( value.startsWith( "answer." ) ) {
					QStringList parts = value.split( "." );
					int pos = 1;
					QXmlStreamReader xml( data );
					while( !xml.atEnd( ) ) {
						xml.readNext( );
						if( xml.isStartElement( ) && ( xml.name( ) == parts[pos] ) ) {
							if( pos == parts.size( )-1 ) {
								// found
								QString text = xml.readElementText( QXmlStreamReader::ErrorOnUnexpectedElement );
								m_props->insert( key, text );
								break;
							} else {
								pos++;
								// check attributes first
								QXmlStreamAttributes attributes = xml.attributes( );
								foreach( QXmlStreamAttribute attr, attributes ) {
									if( attr.name( ) == parts[pos] ) {
										if( pos == parts.size( )-1 ) {
											// found
											QString text = attr.value( ).toString( );
											m_props->insert( key, text );
											break;
										}
									}
								}
							}
						}
					}
				}
			}

// HACK: m_props are the properties of the form
			storeToGlobals( m_props );
			
			loadForm( nextForm );
		}
	}
}

void FormWidget::closeEvent( QCloseEvent *e )
{
	emit closed( );
	e->accept( );
}