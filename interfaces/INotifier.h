#ifndef INOTIFIER_H
#define INOTIFIER_H

#include <QString>

#include "Utils/PDGlobal.h"
#include "Utils/PDAny.h"

class PDMVC_EXPORT INotifier
{
public:

    /**
    * 发送消息提醒
    **/
    virtual void sendNotification(const QString &notificationName,const PDAny &body = nullptr) = 0;
};

#endif // INOTIFIER_H
