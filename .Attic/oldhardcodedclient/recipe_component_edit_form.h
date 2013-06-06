#ifndef recipe_component_edit_form_H
#define recipe_component_edit_form_H

#include <QWidget>

#include "ui_recipe_component_edit.h"

class recipe_component_edit_form : public QWidget, public Ui::recipe_component_edit_form
{
	Q_OBJECT
	
	public:
		recipe_component_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
