#include "View.h"

#include <QDebug>

View::View()
{

}

View::~View()
{

}

void View::registObserver(const QString &notificationName, IObserver *observer)
{
    observerMap[notificationName] = observer;
}

void View::removeObserver(const QString &notificationName)
{
    observerMap.remove(notificationName);
}

bool View::isHasObserver(const QString &notificationName)
{
    return observerMap.contains(notificationName);
}

void View::notifiObserver(INotification *notification)
{
    if(observerMap.contains(notification->getNotificationName()))
    {
        observerMap[notification->getNotificationName()]->handleNotification(notification);
    }else
    {
        qInfo() << "can not find " << notification->getNotificationName() << " observer !";
    }

}

void View::registMediator(IMediator *mediator)
{
    mediatorMap[mediator->getMediatorName()] = mediator;
}

IMediator *View::getMediator(const QString &mediatorName)
{
    return mediatorMap[mediatorName];
}

void View::removeMediator(IMediator *mediator)
{
    mediatorMap.remove(mediator->getMediatorName());
}

