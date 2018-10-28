#ifndef IVIEW_H
#define IVIEW_H

#include <QString>

#include "interfaces/IObserver.h"
#include "interfaces/IMediator.h"
#include "interfaces/INotification.h"
#include "utils/PDGlobal.h"

class PDMVC_EXPORT IView
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
    * 获取对应名字的mediator
    **/
    virtual IMediator *getMediator(const QString &mediatorName) = 0;

};

#endif // IVIEW_H
