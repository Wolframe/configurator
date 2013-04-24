#ifndef manufacturers_form_H
#define manufacturers_form_H

#include <QWidget>

#include "ui_manufacturers.h"

class manufacturers_form : public QWidget, public Ui::manufacturers_form
{
	Q_OBJECT
	
	public:
		manufacturers_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
