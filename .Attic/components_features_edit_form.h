#ifndef components_features_edit_form_H
#define components_features_edit_form_H

#include <QWidget>

#include "ui_components_features_edit.h"

class components_features_edit_form : public QWidget, public Ui::components_features_edit_form
{
	Q_OBJECT
	
	public:
		components_features_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
