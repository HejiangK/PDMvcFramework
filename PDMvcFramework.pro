#-------------------------------------------------
#
# Project created by QtCreator 2018-10-27T11:52:26
#
#-------------------------------------------------

QT       -= gui

TARGET = PDMvcFramework
TEMPLATE = lib

DEFINES += PDMVCFRAMEWORK_LIBRARY

SOURCES += \
    interfaces/INotifier.cpp \
    interfaces/IObserver.cpp \
    interfaces/INotification.cpp \
    patten/Notifier.cpp \
    patten/Notification.cpp \
    core/PDFacade.cpp \
    interfaces/IView.cpp \
    interfaces/IController.cpp \
    interfaces/IModel.cpp \
    interfaces/IMediator.cpp \
    core/PDView.cpp \
    interfaces/IFacade.cpp \
    interfaces/IProxy.cpp \
    core/PDModel.cpp \
    interfaces/ICommand.cpp \
    core/PDController.cpp \
    core/PDCommand.cpp \
    core/PDMediator.cpp \
    core/PDProxy.cpp

HEADERS +=\
    utils/PDGlobal.h \
    interfaces/INotifier.h \
    interfaces/IObserver.h \
    interfaces/INotification.h \
    patten/Notifier.h \
    patten/Notification.h \
    core/PDFacade.h \
    interfaces/IView.h \
    interfaces/IController.h \
    interfaces/IModel.h \
    interfaces/IMediator.h \
    core/PDView.h \
    interfaces/IFacade.h \
    interfaces/IProxy.h \
    core/PDModel.h \
    interfaces/ICommand.h \
    core/PDController.h \
    core/PDCommand.h \
    core/PDMediator.h \
    core/PDProxy.h


BUILD_DIR = build
macx:BUILD_DIR = $$BUILD_DIR/macx
win32:BUILD_DIR = $$BUILD_DIR/win32
linux-g++*:BUILD_DIR = $$BUILD_DIR/linux


CONFIG(debug, debug|release){
    BUILD_DIR = $$BUILD_DIR/debug
}
CONFIG(release, debug|release) {
   BUILD_DIR = $$BUILD_DIR/release
   CONFIG += warn_off
}
CONFIG += c++11
CONFIG -= flat


DESTDIR = $$BUILD_DIR/product
OBJECTS_DIR = $$BUILD_DIR/objects
MOC_DIR = $$BUILD_DIR/moc
RCC_DIR = $$BUILD_DIR/rcc
UI_DIR = $$BUILD_DIR/ui
