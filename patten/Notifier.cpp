#include "Notifier.h"
#include "Core/Facade.h"
#include "Patten/Notification.h"

Notifier::Notifier()
{

}

Notifier::~Notifier()
{

}

void Notifier::sendNotification(const QString &notificationName, const PDAny &body)
{
    Notification notification(notificationName,body);

    Facade::instance().notifiObserver(&notification);
}
