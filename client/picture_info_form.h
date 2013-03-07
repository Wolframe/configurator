#ifndef picture_info_form_H
#define picture_info_form_H

#include <QWidget>

#include "ui_picture_info.h"

class picture_info_form : public QWidget, public Ui::picture_info_form
{
	Q_OBJECT
	
	public:
		picture_info_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
