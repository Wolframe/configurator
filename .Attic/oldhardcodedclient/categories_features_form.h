#ifndef categories_features_form_H
#define categories_features_form_H

#include <QWidget>

#include "ui_categories_features.h"

class categories_features_form : public QWidget, public Ui::categories_features_form
{
	Q_OBJECT
	
	public:
		categories_features_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
