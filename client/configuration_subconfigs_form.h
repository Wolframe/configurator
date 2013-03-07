#ifndef configuration_subconfigs_form_H
#define configuration_subconfigs_form_H

#include <QWidget>

#include "ui_configuration_subconfigs.h"

class configuration_subconfigs_form : public QWidget, public Ui::configuration_subconfigs_form
{
	Q_OBJECT
	
	public:
		configuration_subconfigs_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
