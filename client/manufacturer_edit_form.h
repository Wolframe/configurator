#ifndef manufacturer_edit_form_H
#define manufacturer_edit_form_H

#include <QWidget>

#include "ui_manufacturer_edit.h"

class manufacturer_edit_form : public QWidget, public Ui::manufacturer_edit_form
{
	Q_OBJECT
	
	public:
		manufacturer_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
