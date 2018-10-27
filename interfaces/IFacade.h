#ifndef IFACADE_H
#define IFACADE_H

#include "IObserver.h"
#include "INotification.h"
#include "IMediator.h"

class IFacade
{
public:

    /***
    * 注册察
    **/
    virtual void registObserver(const QString &notificationName,IObserver *observer) = 0;

    /***
    * 移除观察
    **/
    virtual void removeObserver(const QString &notificationName) = 0;

    /***
    * 是否包含该notification的观察者
    **/
    virtual bool isHasObserver(const QString &notificationName) = 0;

    /***
    * 通知观察者
    **/
    virtual void notifiObserver(INotification *notification) = 0;

    /**
    * 注册view处理
    ***/
    virtual void registMediator(IMediator *mediator) = 0;

    /***
    * 移除view 处理
    **/
    virtual void removeMediator(IMediator *mediator) = 0;

    /**
    * 是否包含mediator
    **/
    virtual bool isHasMediator(const QString &mediatorName) = 0;
};

#endif // IFACADE_H
