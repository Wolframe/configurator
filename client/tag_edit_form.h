#ifndef tag_edit_form_H
#define tag_edit_form_H

#include <QWidget>

#include "ui_tag_edit.h"

class tag_edit_form : public QWidget, public Ui::tag_edit_form
{
	Q_OBJECT
	
	public:
		tag_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
