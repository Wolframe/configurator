#ifndef configurator_form_H
#define configurator_form_H

#include <QWidget>
#include <QString>
#include <QVBoxLayout>
#include <QHash>
#include <QSignalMapper>
#include <QPushButton>
#include <QComboBox>
#include <QSpinBox>

#include "DataLoader.hpp"

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

class configurator_form : public QWidget
{
	Q_OBJECT
	
	public:
		configurator_form( DataLoader *_dataLoader, const QString _name, QHash< QString, QString > *globals, QWidget *_parent = 0, bool _debug = false );
		void gotAnswer( QString requestName, QByteArray xml );
		
	private:
		DataLoader *m_dataLoader;
		QString m_name;
		QHash< QString, QString > *m_globals;
		bool m_debug;
		QVBoxLayout *verticalLayout;
		QVBoxLayout *fixedComponentsLayout;
		QVBoxLayout *userComponentsLayout;
		QVBoxLayout *toPickComponentsLayout;
		QSignalMapper *m_addSignalMapper;
		QSignalMapper *m_deleteSignalMapper;
		
	private:
		void initialize( );
		void rest( );
		void sendRequest( const QString docType, const QString rootElement, const QString requestName );
		void sendAddComponentRequest( int configID, int componentID, int quantity );
		void sendDeleteComponentRequest( int configID, int componentID );
	
	private slots:
		void addComponent( QObject *object );	
		void deleteComponent( QObject *object );	
};
#endif
