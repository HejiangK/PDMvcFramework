#-------------------------------------------------
#
# Project created by QtCreator 2018-10-29T16:26:12
#
#-------------------------------------------------

QT       -= gui

TARGET = PureMvcFramework
TEMPLATE = lib

DEFINES += PDMVCFRAMEWORK_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

include(../config.pri)

HEADERS += \
    pure/core/Command.h \
    pure/core/Controller.h \
    pure/core/Facade.h \
    pure/core/Mediator.h \
    pure/core/Model.h \
    pure/core/Proxy.h \
    pure/core/View.h \
    pure/interfaces/ICommand.h \
    pure/interfaces/IController.h \
    pure/interfaces/IFacade.h \
    pure/interfaces/IMediator.h \
    pure/interfaces/IModel.h \
    pure/interfaces/INotification.h \
    pure/interfaces/INotifier.h \
    pure/interfaces/IObserver.h \
    pure/interfaces/IProxy.h \
    pure/interfaces/IView.h \
    pure/interfaces/IViewCompoent.h \
    pure/patten/Notification.h \
    pure/patten/Notifier.h \
    pure/utils/PDAny.h \
    pure/utils/PDAnyContent.h \
    pure/utils/PDEventDispatcher.h \
    pure/utils/PDEventFacade.h \
    pure/utils/PDGlobal.h

SOURCES += \
    pure/core/Command.cpp \
    pure/core/Controller.cpp \
    pure/core/Facade.cpp \
    pure/core/Mediator.cpp \
    pure/core/Model.cpp \
    pure/core/Proxy.cpp \
    pure/core/View.cpp \
    pure/interfaces/ICommand.cpp \
    pure/interfaces/IController.cpp \
    pure/interfaces/IFacade.cpp \
    pure/interfaces/IMediator.cpp \
    pure/interfaces/IModel.cpp \
    pure/interfaces/INotification.cpp \
    pure/interfaces/INotifier.cpp \
    pure/interfaces/IObserver.cpp \
    pure/interfaces/IProxy.cpp \
    pure/interfaces/IView.cpp \
    pure/interfaces/IViewCompoent.cpp \
    pure/patten/Notification.cpp \
    pure/patten/Notifier.cpp \
    pure/utils/PDAny.cpp \
    pure/utils/PDAnyContent.cpp \
    pure/utils/PDEventDispatcher.cpp \
    pure/utils/PDEventFacade.cpp
