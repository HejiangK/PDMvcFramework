#include "PDFacade.h"
#include "PDView.h"
#include "PDModel.h"
#include "PDController.h"

PDFacade::PDFacade()
{
    mView       = &PDView::instance();
    mModel      = &PDModel::instance();
    mController = &PDController::instance();
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

void PDFacade::notifiObserver(INotification *notification)
{
    if(mView->isHasObserver(notification->getNotificationName()))
        mView->notifiObserver(notification);

    if(mController->hasCommand(notification->getNotificationName()))
        mController->excuteCommand(notification);
}

void PDFacade::registMediator(IMediator *mediator)
{
    mView->registMediator(mediator);
}

void PDFacade::removeMediator(IMediator *mediator)
{
    mView->removeMediator(mediator);
}

IMediator *PDFacade::getMediator(const QString &mediatorName)
{
    return mView->getMediator(mediatorName);
}

void PDFacade::registProxy(IProxy *proxy)
{
    mModel->registProxy(proxy);
}

void PDFacade::removeProxy(IProxy *proxy)
{
    mModel->removeProxy(proxy);
}

IProxy *PDFacade::getProxy(const QString &proxyName)
{
    return mModel->getProxy(proxyName);
}

void PDFacade::registCommand(const QString &notificationName, ICommand *command)
{
    mController->registCommand(notificationName,command);
}

void PDFacade::removeCommand(const QString &notificationName)
{
    mController->removeCommand(notificationName);
}


