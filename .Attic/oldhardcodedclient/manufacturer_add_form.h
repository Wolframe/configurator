#ifndef manufacturer_add_form_H
#define manufacturer_add_form_H

#include <QWidget>

#include "ui_manufacturer_add.h"

class manufacturer_add_form : public QWidget, public Ui::manufacturer_add_form
{
	Q_OBJECT
	
	public:
		manufacturer_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
