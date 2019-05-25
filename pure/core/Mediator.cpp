#include "Mediator.h"
#include "pure/core/Facade.h"

Mediator::Mediator(const QString &mediatorName)
    :viewCompoent(nullptr)
    ,mediatorName(mediatorName)
{

}

Mediator::~Mediator()
{

}

void Mediator::appendNotification(const QString &notificationName)
{
    notificationList.append(notificationName);
}

const QList<QString> &Mediator::getNotificationList()
{
    return notificationList;
}

const QString &Mediator::getMediatorName()
{
    return mediatorName;
}

void Mediator::setViewCompoent(IViewCompoent *viewCompoent)
{
    Mediator::viewCompoent = viewCompoent;
}

void Mediator::onViewCompoentDestroy()
{
    Mediator::viewCompoent = nullptr;
}

IProxy *Mediator::getProxy(const QString &proxyName)
{
    return Facade::instance().getProxy(proxyName);
}

