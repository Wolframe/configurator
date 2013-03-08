#ifndef test_form_H
#define test_form_H

#include <QWidget>
#include <QString>
#include <QVBoxLayout>

#include "DataLoader.hpp"

class test_form : public QWidget
{
	Q_OBJECT
	
	public:
		test_form( DataLoader *_dataLoader, const QString _name, QWidget *_parent = 0, bool _debug = false );
		void gotAnswer( QString widgetName, QByteArray xml );
		
	private:
		DataLoader *m_dataLoader;
		QString m_name;
		bool m_debug;
		QVBoxLayout *m_layout;
		
	private:
		void initialize( );
		void sendRequest( const QString docType, const QString rootElement );
};
#endif
