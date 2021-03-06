TEMPLATE = lib

TARGET = exportplugin

CONFIG += qt warn_on plugin

DEFINES += LIBWOLFRAMECLIENT_VISIBILITY=Q_DECL_IMPORT X_EXPORT=Q_DECL_EXPORT BUILD_AS_PLUGIN

INCLUDEPATH += $(WOLFCLIENT_DIR)/wolfclient $(WOLFCLIENT_DIR)/libqtwolfclient

QMAKE_LIBDIR += $(WOLFCLIENT_DIR)/libqtwolfclient
unix:LIBS += -lqtwolfclient
#unix:LIBS += -L$(QTCLIENT_DIR)/libqtwolframeclient -lqtwolframeclient
#win32:LIBS += $(QTCLIENT_DIR)/libqtwolframeclient/debug/qtwolframeclient0.lib
macx:LIBS += $(QTCLIENT_DIR)/libqtwolframeclient/build/Release/libqtwolframeclient0.dylib

#unix:LIBS += -L$(QTCLIENT_DIR)/libqtwolframeclient -lqtwolframeclient
#win32:LIBS += $(QTCLIENT_DIR)/libqtwolframeclient/debug/qtwolframeclient0.lib
macx:LIBS += $(QTCLIENT_DIR)/libqtwolframeclient/build/Release/libqtwolframeclient0.dylib

QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4) {
	QT += widgets concurrent
}

greaterThan(QT_MAJOR_VERSION, 4) {
	QT += designer
} else {
	CONFIG += designer
}

win32|mac: CONFIG+= debug_and_release
QTDIR_build:DESTDIR = $$QT_BUILD_TREE/plugins/designer
contains(TEMPLATE, ".*lib"):TARGET = $$qtLibraryTarget($$TARGET)

build_all:!build_pass {
    CONFIG -= build_all
    CONFIG += release
}

# Input
SOURCES += \
    ExportPlugin.cpp

HEADERS += \
    ExportPlugin.hpp
