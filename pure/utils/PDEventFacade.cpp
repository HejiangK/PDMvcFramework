#include "PDEventFacade.h"
#include "PDEventDispatcher.h"

#include <QMutexLocker>

PDEventFacade::PDEventFacade():QObject ()
{
    qRegisterMetaType<PDAny>("PDAny");
    qRegisterMetaType<PDAny>("PDAny const&");

    connect(this,&PDEventFacade::notifiEventQueued,this,&PDEventFacade::onNotifiEvent);
    connect(this,&PDEventFacade::registEventHandle,this,&PDEventFacade::onRegistEventHandle);
    connect(this,&PDEventFacade::removeEventHandle,this,&PDEventFacade::onRemoveEventHandle);

}

PDEventFacade::~PDEventFacade()
{

}

void PDEventFacade::notifiEventSync(const QString &type, const PDAny &data)
{
    onNotifiEvent(type,data);
}

void PDEventFacade::onNotifiEvent(const QString &type, const PDAny &data)
{
    auto list = eventHandles[type];
    auto it    = list.begin();

    while (it != list.end())
    {
        (*it).eventHandle(type,data);

        it ++;
    }

}

void PDEventFacade::onRegistEventHandle(const QString &type, const PDAny &handleData)
{
    PDEventHandle handle = handleData.cast<PDEventHandle>();

    if(!eventHandles[type].contains(handle))
        eventHandles[type].push_back(handle);
}

void PDEventFacade::onRemoveEventHandle(const QString &type, const PDAny &handleData)
{
    PDEventHandle handle = handleData.cast<PDEventHandle>();

    if(eventHandles[type].contains(handle))
        eventHandles[type].removeOne(handleData.cast<PDEventHandle>());
}


