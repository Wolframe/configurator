#ifndef configurator_form_H
#define configurator_form_H

#include <QWidget>
#include <QString>
#include <QVBoxLayout>
#include <QHash>

#include "DataLoader.hpp"

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
		
	private:
		void initialize( );
		void sendRequest( const QString docType, const QString rootElement, const QString requestName );
};
#endif
