#ifndef PDCONTROLLER_H
#define PDCONTROLLER_H

#include "interfaces/IController.h"

#include <QMap>

class PDController : public IController
{
public:


    virtual ~PDController();

    static PDController &instance()
    {
        static PDController controller;

        return controller;
    }

    /**
    * 注册command
    **/
    virtual void registCommand(const QString &notificationName,ICommand *command) override;

    /**
    * 一次command
    ***/
    virtual void removeCommand(const QString &notificationName) override;

    /**
    * 执行command
    ***/
    virtual void excuteCommand(INotification *notification) override;

    /**
    * 是否包含notificationName的command
    **/
    virtual bool hasCommand(const QString &notificationName) override;

private:

    PDController();

private:

    QMap<QString,ICommand*> commandMap;

};

#endif // PDCONTROLLER_H
