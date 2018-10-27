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
    core/PDModel.cpp

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
    core/PDModel.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}