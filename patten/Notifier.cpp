#include "Notifier.h"
#include "core/PDFacade.h"
#include "patten/Notification.h"

Notifier::Notifier()
{

}

Notifier::~Notifier()
{

}

void Notifier::sendNotification(const QString &notificationName, const QVariant &body)
{
    Notification notification(notificationName,body);

    PDFacade::instance().notifiObserver(&notification);
}
