#include "PDMediator.h"

PDMediator::PDMediator()
{

}

PDMediator::~PDMediator()
{

}

const QString &PDMediator::getMediatorName()
{
    return mediatorName;
}

const QList<QString> &PDMediator::getNotificationList()
{
    return notificationList;
}
