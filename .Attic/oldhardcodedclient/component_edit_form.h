#ifndef component_edit_form_H
#define component_edit_form_H

#include <QWidget>

#include "ui_component_edit.h"

class component_edit_form : public QWidget, public Ui::component_edit_form
{
	Q_OBJECT
	
	public:
		component_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
