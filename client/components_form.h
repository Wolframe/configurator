#ifndef components_form_H
#define components_form_H

#include <QWidget>

#include "ui_components.h"

class components_form : public QWidget, public Ui::components_form
{
	Q_OBJECT
	
	public:
		components_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
