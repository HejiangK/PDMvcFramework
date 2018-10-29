#ifndef PDMEDIATOR_H
#define PDMEDIATOR_H

#include "interfaces/IMediator.h"

class PDMVC_EXPORT PDMediator : public IMediator
{
public:
    PDMediator(const QString &mediatorName);

    virtual ~PDMediator();

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
    virtual void setViewCompoent(void *viewCompoent) override;

    /**
    * 获取被代理的组件
    **/
    template <typename ObjectType>
    ObjectType *getViewCompoent()
    {
        return dynamic_cast<ObjectType*>(viewCompoent);
    }

private:

    QList<QString>  notificationList;

    QString         mediatorName;

    void            *viewCompoent;
};

#endif // PDMEDIATOR_H
