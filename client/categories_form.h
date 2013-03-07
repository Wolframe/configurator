#ifndef categories_form_H
#define categories_form_H

#include <QWidget>

#include "ui_categories.h"

class categories_form : public QWidget, public Ui::categories_form
{
	Q_OBJECT
	
	public:
		categories_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
