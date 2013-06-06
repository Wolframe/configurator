#ifndef recipe_content_edit_form_H
#define recipe_content_edit_form_H

#include <QWidget>

#include "ui_recipe_content_edit.h"

class recipe_content_edit_form : public QWidget, public Ui::recipe_content_edit_form
{
	Q_OBJECT
	
	public:
		recipe_content_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
