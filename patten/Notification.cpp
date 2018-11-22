#include "Notification.h"


Notification::Notification(const QString &notificationName, const PDAny &body)
    :notificationName(notificationName)
    ,body(body)
{

}

Notification::~Notification()
{

}

const QString &Notification::getNotificationName()
{
    return notificationName;
}

const PDAny &Notification::getBody()
{
    return body;
}
