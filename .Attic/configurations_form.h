#ifndef configurations_form_H
#define configurations_form_H

#include <QWidget>

#include "ui_configurations.h"

class configurations_form : public QWidget, public Ui::configurations_form
{
	Q_OBJECT
	
	public:
		configurations_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
