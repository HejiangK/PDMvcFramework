#include "PDView.h"

#include <QDebug>

PDView::PDView()
{

}

PDView::~PDView()
{

}

void PDView::registObserver(const QString &notificationName, IObserver *observer)
{
    observerMap[notificationName] = observer;
}

void PDView::removeObserver(const QString &notificationName)
{
    observerMap.remove(notificationName);
}

bool PDView::isHasObserver(const QString &notificationName)
{
    return observerMap.contains(notificationName);
}

void PDView::notifiObserver(INotification *notification)
{
    if(observerMap.contains(notification->getNotificationName()))
    {
        observerMap[notification->getNotificationName()]->handleNotification(notification);
    }else
    {
        qDebug() << "can not find " << notification->getNotificationName() << " observer !";
    }

}

void PDView::registMediator(IMediator *mediator)
{
    mediatorMap[mediator->getMediatorName()] = mediator;
}

void PDView::removeMediator(IMediator *mediator)
{
    mediatorMap.remove(mediator->getMediatorName());
}

bool PDView::isHasMediator(const QString &mediatorName)
{
    return mediatorMap.contains(mediatorName);
}
