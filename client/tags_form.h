#ifndef tags_form_H
#define tags_form_H

#include <QWidget>

#include "ui_tags.h"

class tags_form : public QWidget, public Ui::tags_form
{
	Q_OBJECT
	
	public:
		tags_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
