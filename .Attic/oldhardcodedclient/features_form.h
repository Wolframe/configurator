#ifndef features_form_H
#define features_form_H

#include <QWidget>

#include "ui_features.h"

class features_form : public QWidget, public Ui::features_form
{
	Q_OBJECT
	
	public:
		features_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
