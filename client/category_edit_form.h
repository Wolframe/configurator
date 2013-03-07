#ifndef category_edit_form_H
#define category_edit_form_H

#include <QWidget>

#include "ui_category_edit.h"

class category_edit_form : public QWidget, public Ui::category_edit_form
{
	Q_OBJECT
	
	public:
		category_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
