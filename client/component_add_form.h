#ifndef component_add_form_H
#define component_add_form_H

#include <QWidget>

#include "ui_component_add.h"

class component_add_form : public QWidget, public Ui::component_add_form
{
	Q_OBJECT
	
	public:
		component_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
