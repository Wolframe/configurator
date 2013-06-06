#ifndef category_add_form_H
#define category_add_form_H

#include <QWidget>

#include "ui_category_add.h"

class category_add_form : public QWidget, public Ui::category_add_form
{
	Q_OBJECT
	
	public:
		category_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
