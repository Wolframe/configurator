#include "FileChooser.hpp"
#include "FileChooserPlugin.hpp"

#include <QtPlugin>

FileChooserPlugin::FileChooserPlugin(QObject *parent)
	: QObject(parent)
{
	m_initialized = false;
}

void FileChooserPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
	if (m_initialized)
		return;
	
	// Add extension registrations, etc. here
	
	m_initialized = true;
}

bool FileChooserPlugin::isInitialized() const
{
	return m_initialized;
}

QWidget *FileChooserPlugin::createWidget(QWidget *parent)
{
	return new FileChooser(parent);
}

QString FileChooserPlugin::name() const
{
	return QLatin1String("FileChooser");
}

QString FileChooserPlugin::group() const
{
	return QLatin1String("");
}

QIcon FileChooserPlugin::icon() const
{
	return QIcon();
}

QString FileChooserPlugin::toolTip() const
{
	return QLatin1String("");
}

QString FileChooserPlugin::whatsThis() const
{
	return QLatin1String("");
}

bool FileChooserPlugin::isContainer() const
{
	return false;
}

QString FileChooserPlugin::domXml() const
{
	return QLatin1String("<widget class=\"FileChooser\" name=\"fileChooser\">\n</widget>\n");
}

QString FileChooserPlugin::includeFile() const
{
	return QLatin1String("FileChooser.hpp");
}

