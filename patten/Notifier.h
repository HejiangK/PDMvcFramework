#ifndef NOTIFIER_H
#define NOTIFIER_H

#include "interfaces/INotifier.h"

class Notifier : public INotifier
{
public:
    Notifier();

    virtual ~Notifier();

    /**
    * 发送消息提醒
    **/
    virtual void sendNotification(const QString &notificationName,const QVariant &body) override;
};

#endif // NOTIFIER_H
