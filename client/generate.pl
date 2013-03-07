#!/usr/bin/perl -w

# for f in `cat forms`; do sed -i "s/<class>Form<\/class>/<class>${f}_form<\/class>/g" $f.ui; sed -i "s/name=\"Form\"/name=\"${f}_form\"/g" $f.ui; done
# for f in `cat forms`; do uic-qt4 -o ui_$f.h $f.ui; done

open FORMS, "<forms";
open SWITCH, ">switch.cpp";
open INCLUDE_FORMS, ">include_forms.h";

$first = 1;
foreach $form ( <FORMS> ) {
	chomp $form;
	$if = 'if' if $first;
	$if = 'else if' if ! $first;
	$first = 0;
	$class = "${form}_form";
	
	print SWITCH <<EOF;
	$if( name == \"$form\" ) {
		m_ui = new $class( this );
	}
EOF

	print INCLUDE_FORMS <<EOF;
#include "${class}.h"
EOF
	open FORM, ">${class}.h";
	print FORM <<EOF;
#ifndef ${class}_H
#define ${class}_H

#include <QWidget>

#include "ui_${form}.h"

class $class : public QWidget, public Ui::${class}
{
	Q_OBJECT
	
	public:
		$class( QWidget *_parent = 0 ) : QWidget( _parent )
		{
			setupUi( this );
		}
};
#endif
EOF
	close FORM;
}
close FORMS;
close SWITCH;
close INCLUDE_FORMS;
