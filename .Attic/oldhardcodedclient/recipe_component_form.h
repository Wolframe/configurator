#ifndef recipe_component_form_H
#define recipe_component_form_H

#include <QWidget>

#include "ui_recipe_component.h"

class recipe_component_form : public QWidget, public Ui::recipe_component_form
{
	Q_OBJECT
	
	public:
		recipe_component_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
