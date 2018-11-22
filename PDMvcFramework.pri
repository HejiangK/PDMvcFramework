#-------------------------------------------------
#
# Project created by QtCreator 2018-10-29T16:26:12
#
#-------------------------------------------------

QT       -= gui

TARGET = PDMvcFramework
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

SOURCES += \
    $$PWD/Interfaces/ICommand.cpp \
    $$PWD/Interfaces/IController.cpp \
    $$PWD/Interfaces/IFacade.cpp \
    $$PWD/Interfaces/IMediator.cpp \
    $$PWD/Interfaces/IModel.cpp \
    $$PWD/Interfaces/INotification.cpp \
    $$PWD/Interfaces/INotifier.cpp \
    $$PWD/Interfaces/IObserver.cpp \
    $$PWD/Interfaces/IProxy.cpp \
    $$PWD/Interfaces/IView.cpp \
    $$PWD/Interfaces/IViewCompoent.cpp \
    $$PWD/Patten/Notification.cpp \
    $$PWD/Patten/Notifier.cpp \
    $$PWD/Utils/PDAny.cpp \
    $$PWD/Utils/PDAnyContent.cpp \
    $$PWD/Utils/PDEventDispatcher.cpp \
    $$PWD/Utils/PDEventFacade.cpp \
    $$PWD/Core/Command.cpp \
    $$PWD/Core/Controller.cpp \
    $$PWD/Core/Facade.cpp \
    $$PWD/Core/Mediator.cpp \
    $$PWD/Core/Model.cpp \
    $$PWD/Core/Proxy.cpp \
    $$PWD/Core/View.cpp


HEADERS += \
    $$PWD/Interfaces/ICommand.h \
    $$PWD/Interfaces/IController.h \
    $$PWD/Interfaces/IFacade.h \
    $$PWD/Interfaces/IMediator.h \
    $$PWD/Interfaces/IModel.h \
    $$PWD/Interfaces/INotification.h \
    $$PWD/Interfaces/INotifier.h \
    $$PWD/Interfaces/IObserver.h \
    $$PWD/Interfaces/IProxy.h \
    $$PWD/Interfaces/IView.h \
    $$PWD/Interfaces/IViewCompoent.h \
    $$PWD/Patten/Notification.h \
    $$PWD/Patten/Notifier.h \
    $$PWD/Utils/PDAny.h \
    $$PWD/Utils/PDAnyContent.h \
    $$PWD/Utils/PDEventDispatcher.h \
    $$PWD/Utils/PDEventFacade.h \
    $$PWD/Utils/PDGlobal.h \
    $$PWD/Core/Command.h \
    $$PWD/Core/Controller.h \
    $$PWD/Core/Facade.h \
    $$PWD/Core/Mediator.h \
    $$PWD/Core/Model.h \
    $$PWD/Core/Proxy.h \
    $$PWD/Core/View.h


