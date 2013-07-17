static void getWidgetChildren_( QList<QWidget*>& rt, QObject* wdg)
{
	static const QString str_QWidget("QWidget");

#ifdef WOLFRAME_LOWLEVEL_DEBUG
	qDebug() << "Checking children of type" << wdg->metaObject()->className() << ", name" << wdg->objectName( );
#endif
	foreach (QObject* cld, wdg->children())
	{
		if (qobject_cast<QLayout*>( cld))
		{
#ifdef WOLFRAME_LOWLEVEL_DEBUG
			qDebug() << "Skipping layout" << cld->objectName() << ", continue search for children";
#endif
			getWidgetChildren_( rt, cld);
		}
		else
		{
			QWidget* we = qobject_cast<QWidget*>( cld);
			if (we)
			{
/* Aba, wrong IHMO:
				if (we->layout() && cld->metaObject()->className() == str_QWidget)
				{
#ifdef WOLFRAME_LOWLEVEL_DEBUG
					qDebug() << "Skipping QWidget having a layout, name" << cld->objectName();
#endif
					getWidgetChildren_( rt, cld);
				}
				else */
				if( cld->objectName().startsWith( "qt_" ) )
				{
#ifdef WOLFRAME_LOWLEVEL_DEBUG
					qDebug() << "Skipping internal Qt object of type" << cld->metaObject()->className() << ", name" << cld->objectName();
#endif
					getWidgetChildren_( rt, cld);
				}
				else
				{
#ifdef WOLFRAME_LOWLEVEL_DEBUG
					qDebug() << "Found child of type" << cld->metaObject()->className() << ", name" << cld->objectName();
#endif
					rt.push_back( we);
				}
			}
		}
	}
}
