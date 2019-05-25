#include "Facade.h"
#include "View.h"
#include "Model.h"
#include "Controller.h"


Facade::Facade()
{
    mView       = &View::instance();
    mModel      = &Model::instance();
    mController = &Controller::instance();
}

Facade::~Facade()
{

}

void Facade::registObserver(const QString &notificationName, IObserver *observer)
{
    mView->registObserver(notificationName,observer);
}

void Facade::removeObserver(const QString &notificationName)
{
    mView->removeObserver(notificationName);
}

void Facade::notifiObserver(INotification *notification)
{
    if(mView->isHasObserver(notification->getNotificationName()))
        mView->notifiObserver(notification);

    if(mController->hasCommand(notification->getNotificationName()))
        mController->excuteCommand(notification);
}

void Facade::registMediator(IMediator *mediator)
{
    mView->registMediator(mediator);

    auto list   = mediator->getNotificationList();
    auto it     = list.begin();

    while(it != list.end())
    {
        registObserver(*it,mediator);

        it ++;
    }

}

void Facade::removeMediator(IMediator *mediator)
{
    mView->removeMediator(mediator);
}

IMediator *Facade::getMediator(const QString &mediatorName)
{
    return mView->getMediator(mediatorName);
}

void Facade::registProxy(IProxy *proxy)
{
    mModel->registProxy(proxy);
}

void Facade::removeProxy(IProxy *proxy)
{
    mModel->removeProxy(proxy);
}

IProxy *Facade::getProxy(const QString &proxyName)
{
    return mModel->getProxy(proxyName);
}

void Facade::registCommand(const QString &notificationName, ICommand *command)
{
    mController->registCommand(notificationName,command);
}

void Facade::removeCommand(const QString &notificationName)
{
    mController->removeCommand(notificationName);
}


