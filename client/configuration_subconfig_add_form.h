#ifndef configuration_subconfig_add_form_H
#define configuration_subconfig_add_form_H

#include <QWidget>

#include "ui_configuration_subconfig_add.h"

class configuration_subconfig_add_form : public QWidget, public Ui::configuration_subconfig_add_form
{
	Q_OBJECT
	
	public:
		configuration_subconfig_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
