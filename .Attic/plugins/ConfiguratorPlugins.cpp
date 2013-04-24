#include "PictureChooserPlugin.hpp"
#include "FileChooserPlugin.hpp"
#include "ConfiguratorPlugins.hpp"

ConfiguratorPlugins::ConfiguratorPlugins(QObject *parent)
	: QObject(parent)
{
	m_widgets.append(new PictureChooserPlugin(this));
	m_widgets.append(new FileChooserPlugin(this));
	
}

QList<QDesignerCustomWidgetInterface*> ConfiguratorPlugins::customWidgets() const
{
	return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(ConfiguratorPlugs, ConfiguratorPlugins)
#endif // QT_VERSION < 0x050000
