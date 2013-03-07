#ifndef feature_add_form_H
#define feature_add_form_H

#include <QWidget>

#include "ui_feature_add.h"

class feature_add_form : public QWidget, public Ui::feature_add_form
{
	Q_OBJECT
	
	public:
		feature_add_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
