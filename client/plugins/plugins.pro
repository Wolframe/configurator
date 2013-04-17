CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(ConfiguratorPlugs)
TEMPLATE    = lib

HEADERS     = PictureChooserPlugin.hpp FileChooserPlugin.hpp ConfiguratorPlugins.hpp
SOURCES     = PictureChooserPlugin.cpp FileChooserPlugin.cpp ConfiguratorPlugins.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(PictureChooser.pri)
include(FileChooser.pri)