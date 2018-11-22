#include "Controller.h"

#include <QDebug>

Controller::Controller()
{

}

Controller::~Controller()
{

}

void Controller::registCommand(const QString &notificationName, ICommand *command)
{
    commandMap[notificationName] = command;
}

void Controller::removeCommand(const QString &notificationName)
{
    commandMap.remove(notificationName);
}

void Controller::excuteCommand(INotification *notification)
{
    if(commandMap.contains(notification->getNotificationName()))
        commandMap[notification->getNotificationName()]->excute(notification);
}

bool Controller::hasCommand(const QString &notificationName)
{
    return commandMap.contains(notificationName);
}
