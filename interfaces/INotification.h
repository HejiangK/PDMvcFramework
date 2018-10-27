﻿#ifndef INOTIFICATION_H
#define INOTIFICATION_H

#include <QString>
#include <QVariant>

class INotification
{
public:

    /**
    * 获取notificationName
    **/
    virtual const QString &getNotificationName() = 0;

    /**
    * 获取notifi数据体
    **/
    virtual const QVariant &getBody() = 0;
};

#endif // INOTIFICATION_H