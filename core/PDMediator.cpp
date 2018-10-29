#include "PDMediator.h"

PDMediator::PDMediator(const QString &mediatorName)
    :viewCompoent(nullptr)
    ,mediatorName(mediatorName)
{

}

PDMediator::~PDMediator()
{

}

void PDMediator::appendNotification(const QString &notificationName)
{
    notificationList.append(notificationName);
}

const QList<QString> &PDMediator::getNotificationList()
{
    return notificationList;
}

const QString &PDMediator::getMediatorName()
{
    return mediatorName;
}

void PDMediator::setViewCompoent(void *viewCompoent)
{
    PDMediator::viewCompoent = viewCompoent;
}


