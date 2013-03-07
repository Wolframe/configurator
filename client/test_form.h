#ifndef test_form_H
#define test_form_H

#include <QWidget>

class test_form : public QWidget
{
	Q_OBJECT
	
	public:
		test_form( QWidget *_parent = 0 );
		
	private:
		void initialize( );
};
#endif
