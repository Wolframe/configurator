#ifndef feature_equivalence_form_H
#define feature_equivalence_form_H

#include <QWidget>

#include "ui_feature_equivalence.h"

class feature_equivalence_form : public QWidget, public Ui::feature_equivalence_form
{
	Q_OBJECT
	
	public:
		feature_equivalence_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
