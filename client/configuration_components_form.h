#ifndef configuration_components_form_H
#define configuration_components_form_H

#include <QWidget>

#include "ui_configuration_components.h"

class configuration_components_form : public QWidget, public Ui::configuration_components_form
{
	Q_OBJECT
	
	public:
		configuration_components_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
