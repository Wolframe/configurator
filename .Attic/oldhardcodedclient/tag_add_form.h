#ifndef tag_add_form_H
#define tag_add_form_H

#include <QWidget>

#include "ui_tag_add.h"

class tag_add_form : public QWidget, public Ui::tag_add_form
{
	Q_OBJECT
	
	public:
		tag_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
