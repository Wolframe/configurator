#ifndef categories_features_add_form_H
#define categories_features_add_form_H

#include <QWidget>

#include "ui_categories_features_add.h"

class categories_features_add_form : public QWidget, public Ui::categories_features_add_form
{
	Q_OBJECT
	
	public:
		categories_features_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif