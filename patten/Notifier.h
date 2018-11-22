#ifndef NOTIFIER_H
#define NOTIFIER_H

#include "Interfaces/INotifier.h"

class PDMVC_EXPORT Notifier : public INotifier
{
public:
    Notifier();

    virtual ~Notifier();

    /**
    * 发送消息提醒
    **/
    virtual void sendNotification(const QString &notificationName,const PDAny &body = nullptr) override;
};

#endif // NOTIFIER_H
