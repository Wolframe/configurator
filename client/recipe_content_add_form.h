#ifndef recipe_content_add_form_H
#define recipe_content_add_form_H

#include <QWidget>

#include "ui_recipe_content_add.h"

class recipe_content_add_form : public QWidget, public Ui::recipe_content_add_form
{
	Q_OBJECT
	
	public:
		recipe_content_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
