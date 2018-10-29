#ifndef IMEDIATOR_H
#define IMEDIATOR_H

#include "interfaces/IObserver.h"
#include "patten/Notifier.h"

#include <QString>
#include <QList>

class PDMVC_EXPORT IMediator : public Notifier,public IObserver
{
public:

    /**
    * 添加notification监听到列表
    ***/
    virtual void appendNotification(const QString &notificationName) = 0;

    /***
    * 返回该mediator监听的notification列表
    ***/
    virtual const QList<QString> &getNotificationList() = 0;

    /**
    * 返回该mediator的名字
    **/
    virtual const QString &getMediatorName() = 0;

    /**
    * 设置被代理行为的view组件
    ***/
    virtual void setViewCompoent(void *viewCompoent) = 0;

    /**
    * 向下转换
    **/
    template <typename ObjectType>
    ObjectType *cast()
    {
        return dynamic_cast<ObjectType*>(this);
    }
};

#endif // IMEDIATOR_H
