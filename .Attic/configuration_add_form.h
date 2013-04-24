#ifndef configuration_add_form_H
#define configuration_add_form_H

#include <QWidget>

#include "ui_configuration_add.h"

class configuration_add_form : public QWidget, public Ui::configuration_add_form
{
	Q_OBJECT
	
	public:
		configuration_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
