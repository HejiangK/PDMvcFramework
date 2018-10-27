#include "PDFacade.h"
#include "PDView.h"

PDFacade::PDFacade()
{
    mView   = &PDView::instance();
}

PDFacade::~PDFacade()
{

}

void PDFacade::registObserver(const QString &notificationName, IObserver *observer)
{
    mView->registObserver(notificationName,observer);
}

void PDFacade::removeObserver(const QString &notificationName)
{
    mView->removeObserver(notificationName);
}

bool PDFacade::isHasObserver(const QString &notificationName)
{
    return mView->isHasObserver(notificationName);
}

void PDFacade::notifiObserver(INotification *notification)
{
    mView->notifiObserver(notification);
}

void PDFacade::registMediator(IMediator *mediator)
{
    mView->registMediator(mediator);
}

void PDFacade::removeMediator(IMediator *mediator)
{
    mView->removeMediator(mediator);
}

bool PDFacade::isHasMediator(const QString &mediatorName)
{
    return mView->isHasMediator(mediatorName);
}
