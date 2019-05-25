#ifndef IFACADE_H
#define IFACADE_H

#include "IObserver.h"
#include "INotification.h"
#include "IMediator.h"
#include "IProxy.h"
#include "ICommand.h"

class PDMVC_EXPORT IFacade
{
public:

    //--------------------------observer----------------------------

    /***
    * 注册察
    **/
    virtual void registObserver(const QString &notificationName,IObserver *observer) = 0;

    /***
    * 移除观察
    **/
    virtual void removeObserver(const QString &notificationName) = 0;

    /***
    * 通知观察者
    **/
    virtual void notifiObserver(INotification *notification) = 0;

    //-------------------------mediator-------------------

    /**
    * 注册view处理
    ***/
    virtual void registMediator(IMediator *mediator) = 0;

    /***
    * 移除view 处理
    **/
    virtual void removeMediator(IMediator *mediator) = 0;

    /**
    * 获取对应名字的mediator
    **/
    virtual IMediator *getMediator(const QString &mediatorName) = 0;

    //-----------------------------proxy-----------------

    /*
    * 注册proxy
    **/
    virtual void registProxy(IProxy *proxy) = 0;

    /***
    * 移除proxy
    **/
    virtual void removeProxy(IProxy *proxy) = 0;

    /**
    * 获取对应proxy
    **/
    virtual IProxy *getProxy(const QString &proxyName) = 0;

    //-----------------------command----------------------

    /**
    * 注册command
    **/
    virtual void registCommand(const QString &notificationName,ICommand *command) = 0;

    /**
    * 一次command
    ***/
    virtual void removeCommand(const QString &notificationName) = 0;
};

#endif // IFACADE_H
