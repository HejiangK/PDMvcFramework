#ifndef PDMEDIATOR_H
#define PDMEDIATOR_H

#include "interfaces/IMediator.h"

class PDMVC_EXPORT PDMediator : public IMediator
{
public:
    PDMediator();

    virtual ~PDMediator();

    /**
    * 返回该mediator的名字
    **/
    virtual const QString &getMediatorName() override;

    /***
    * 返回该mediator监听的notification列表
    ***/
    virtual const QList<QString> &getNotificationList() override;

protected:

    QString         mediatorName;

    QList<QString>  notificationList;
};

#endif // PDMEDIATOR_H
