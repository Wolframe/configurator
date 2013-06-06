#ifndef feature_edit_form_H
#define feature_edit_form_H

#include <QWidget>

#include "ui_feature_edit.h"

class feature_edit_form : public QWidget, public Ui::feature_edit_form
{
	Q_OBJECT
	
	public:
		feature_edit_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
