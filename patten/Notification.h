#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include "interfaces/INotification.h"

class Notification : public INotification
{
public:
    Notification(const QString &notificationName,const QVariant &body);

    virtual ~Notification();

    /**
    * 获取notificationName
    **/
    virtual const QString &getNotificationName() override;

    /**
    * 获取notifi数据体
    **/
    virtual const QVariant &getBody() override;

private:

    QString     notificationName;

    QVariant    body;

};

#endif // NOTIFICATION_H
