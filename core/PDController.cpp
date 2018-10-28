#include "PDController.h"

#include <QDebug>

PDController::PDController()
{

}

PDController::~PDController()
{

}

void PDController::registCommand(const QString &notificationName, ICommand *command)
{
    commandMap[notificationName] = command;
}

void PDController::removeCommand(const QString &notificationName)
{
    commandMap.remove(notificationName);
}

void PDController::excuteCommand(INotification *notification)
{
    if(commandMap.contains(notification->getNotificationName()))
        commandMap[notification->getNotificationName()]->excute(notification);
    else
        qDebug() << "notification : " << notification->getNotificationName() << " is not excute command !";
}
