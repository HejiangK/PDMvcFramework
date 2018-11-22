#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include "Interfaces/INotification.h"

class PDMVC_EXPORT Notification : public INotification
{
public:
    Notification(const QString &notificationName,const PDAny &body);

    virtual ~Notification();

    /**
    * 获取notificationName
    **/
    virtual const QString &getNotificationName() override;

    /**
    * 获取notifi数据体
    **/
    virtual const PDAny &getBody() override;

private:

    QString     notificationName;

    PDAny       body;

};

#endif // NOTIFICATION_H
