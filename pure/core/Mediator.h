#ifndef PDMEDIATOR_H
#define PDMEDIATOR_H

#include "pure/interfaces/IMediator.h"
#include "pure/interfaces/IProxy.h"

class PDMVC_EXPORT Mediator : public IMediator
{
public:
    Mediator(const QString &mediatorName);

    virtual ~Mediator();

    /**
    * 添加notification监听到列表
    ***/
    virtual void appendNotification(const QString &notificationName) override;

    /***
    * 返回该mediator监听的notification列表
    ***/
    virtual const QList<QString> &getNotificationList() override;

    /**
    * 返回该mediator的名字
    **/
    virtual const QString &getMediatorName() override;

    /**
    * 设置被代理行为的view组件
    ***/
    virtual void setViewCompoent(IViewCompoent *viewCompoent) override;

    /***
    * view 被销毁
    **/
    virtual void onViewCompoentDestroy() override;

    /***
    * 获取对应的proxy
    **/
    IProxy *getProxy(const QString &proxyName);

    /**
    * 获取被代理的组件
    **/
    template <typename ObjectType>
    ObjectType getViewCompoent()
    {
        return dynamic_cast<ObjectType>(viewCompoent);
    }

    /***
    * 获取proxy
    **/
    template <typename ObjectType>
    ObjectType getCastProxy(const QString &proxyName)
    {
        return getProxy(proxyName)->cast<ObjectType>();
    }

private:

    QList<QString>  notificationList;

    QString         mediatorName;

    IViewCompoent   *viewCompoent;


};

#endif // PDMEDIATOR_H
