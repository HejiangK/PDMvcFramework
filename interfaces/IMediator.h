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
    * 返回该mediator的名字
    **/
    virtual const QString &getMediatorName() = 0;

    /***
    * 返回该mediator监听的notification列表
    ***/
    virtual const QList<QString> &getNotificationList() = 0;
};

#endif // IMEDIATOR_H
