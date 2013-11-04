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

#ifndef _CONFIGURATOR_PLUGIN_INCLUDED
#define _CONFIGURATOR_PLUGIN_INCLUDED

#include "FormPluginInterface.hpp"

#include <QWidget>
#include <QHash>
#include <QString>
#include <QVBoxLayout>
#include <QSignalMapper>
#include <QPushButton>
#include <QComboBox>
#include <QSpinBox>

class AddComponentWidgets : public QObject
{
	Q_OBJECT
	
	public:
		AddComponentWidgets( QPushButton *addButton, QComboBox *componentBox, QSpinBox *spinBox )
			: m_addButton( addButton ), m_componentBox( componentBox ),
			m_spinBox( spinBox ) {}
		
	public:
		QPushButton *m_addButton;
		QComboBox *m_componentBox;
		QSpinBox *m_spinBox;
};   
            
class DeleteComponentWidgets : public QObject
{
	Q_OBJECT
	
	public:
		DeleteComponentWidgets( QPushButton *deleteButton, int componentID )
			: m_deleteButton( deleteButton ), m_componentID( componentID ) {}
		
	public:
		QPushButton *m_deleteButton;
		int m_componentID;	
};

class ConfiguratorPlugin;

class ConfiguratorWidget : public QWidget
{
	Q_OBJECT
	
	public:
		ConfiguratorWidget( ConfiguratorPlugin *_plugin, const FormCall &formCall, bool _debug, QHash<QString,QVariant>* _globals, QWidget *_parent = 0 );

		void gotAnswer( const QString &widgetCmd, const QByteArray xml );
		
	private:
		void initialize( );
		void fillData( );
		void getLastConfigId( );
		void sendRequest( const QString &docType, const QString &rootElement, const QString &widgetCmd );
		void sendAddComponentRequest( int configID, int componentID, int quantity );
		void sendDeleteComponentRequest( int configID, int componentID );
		QString getFormParam( const QString &key ) const;
		
	private:
		FormCall m_formCall;
		bool m_debug;
		QHash<QString,QVariant>* m_globals;
		ConfiguratorPlugin *m_plugin;
		QSignalMapper *m_addSignalMapper;
		QSignalMapper *m_deleteSignalMapper;
		QVBoxLayout *verticalLayout;
		QVBoxLayout *fixedComponentsLayout;
		QVBoxLayout *userComponentsLayout;
		QVBoxLayout *toPickComponentsLayout;
		QString m_configID;
	
	signals:
		void reload( );

	private slots:
		void addComponent( QObject *object );	
		void deleteComponent( QObject *object );	
		void handlePressMeButton( );
};

class ConfiguratorPlugin : public QObject, public FormPluginInterface
{
	Q_OBJECT
	Q_INTERFACES( FormPluginInterface )
#if QT_VERSION >= 0x050000
	Q_PLUGIN_METADATA( IID "org.wolframe.qtClient.FormPluginInterface/1.0"  )
#endif // QT_VERSION >= 0x050000
	
	public:
		ConfiguratorPlugin( );
		
		virtual QString name( ) const;
		virtual QString windowTitle( ) const;
		virtual void setDebug( bool _debug );
		virtual QWidget *createForm( const FormCall &formCall, DataLoader *_dataLoader, bool _debug, QHash<QString,QVariant>* _globals, QWidget *_parent );
		virtual void gotAnswer( const QString& _tag, const QByteArray& _data );
		virtual void gotError( const QString& tag_, const QByteArray& error_ );
		
		void sendRequest( WId wid, const QString &widgetCmd, const QByteArray &_request );
		
	private:
		QWidget *m_parent;
		QHash<WId, ConfiguratorWidget *> m_widgets;
		DataLoader *m_dataLoader;
		int m_tagCounter;
		bool m_debug;
};

#endif // _CONFIGURATOR_PLUGIN_INCLUDED
