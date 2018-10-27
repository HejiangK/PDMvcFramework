#ifndef INOTIFIER_H
#define INOTIFIER_H

#include <QString>
#include <QVariant>

class INotifier
{
public:

    /**
    * 发送消息提醒
    **/
    virtual void sendNotification(const QString &notificationName,const QVariant &body) = 0;
};

#endif // INOTIFIER_H
