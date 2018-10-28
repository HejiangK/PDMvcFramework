#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include "interfaces/ICommand.h"

class IController
{
public:

    /**
    * 注册command
    **/
    virtual void registCommand(const QString &notificationName,ICommand *command) = 0;

    /**
    * 一次command
    ***/
    virtual void removeCommand(const QString &notificationName) = 0;

    /**
    * 执行command
    ***/
    virtual void excuteCommand(INotification *notification) = 0;

    /**
    * 是否包含notificationName的command
    **/
    virtual bool hasCommand(const QString &notificationName) = 0;
};

#endif // ICONTROLLER_H
