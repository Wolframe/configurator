#ifndef picture_add_form_H
#define picture_add_form_H

#include <QWidget>

#include "ui_picture_add.h"

class picture_add_form : public QWidget, public Ui::picture_add_form
{
	Q_OBJECT
	
	public:
		picture_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
