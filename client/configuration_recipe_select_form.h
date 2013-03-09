#ifndef configuration_recipe_select_form_H
#define configuration_recipe_select_form_H

#include <QWidget>

#include "ui_configuration_recipe_select.h"

class configuration_recipe_select_form : public QWidget, public Ui::configuration_recipe_select_form
{
	Q_OBJECT
	
	public:
		configuration_recipe_select_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
