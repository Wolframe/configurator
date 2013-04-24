#ifndef pictures_form_H
#define pictures_form_H

#include <QWidget>

#include "ui_pictures.h"

class pictures_form : public QWidget, public Ui::pictures_form
{
	Q_OBJECT
	
	public:
		pictures_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
