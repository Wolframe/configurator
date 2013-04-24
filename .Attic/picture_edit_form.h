#ifndef picture_edit_form_H
#define picture_edit_form_H

#include <QWidget>

#include "ui_picture_edit.h"

class picture_edit_form : public QWidget, public Ui::picture_edit_form
{
	Q_OBJECT
	
	public:
		picture_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
