#ifndef PDCONTROLLER_H
#define PDCONTROLLER_H

#include "Interfaces/IController.h"

#include <QMap>

class Controller : public IController
{
public:


    virtual ~Controller();

    static Controller &instance()
    {
        static Controller controller;

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

    Controller();

private:

    QMap<QString,ICommand*> commandMap;

};

#endif // PDCONTROLLER_H
