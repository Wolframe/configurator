#ifndef recipes_form_H
#define recipes_form_H

#include <QWidget>

#include "ui_recipes.h"

class recipes_form : public QWidget, public Ui::recipes_form
{
	Q_OBJECT
	
	public:
		recipes_form( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
