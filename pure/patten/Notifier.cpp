#include "Notifier.h"
#include "pure/core/Facade.h"
#include "pure/patten/Notification.h"

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
