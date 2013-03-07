#ifndef configuration_subconfig_edit_form_H
#define configuration_subconfig_edit_form_H

#include <QWidget>

#include "ui_configuration_subconfig_edit.h"

class configuration_subconfig_edit_form : public QWidget, public Ui::configuration_subconfig_edit_form
{
	Q_OBJECT
	
	public:
		configuration_subconfig_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
