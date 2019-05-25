#include "PDEventDispatcher.h"
#include "pure/utils/PDEventFacade.h"

PDEventDispatcher::PDEventDispatcher()
    :eventFacade(new PDEventFacade())
{

}

PDEventDispatcher::~PDEventDispatcher()
{

}

void PDEventDispatcher::dispatchEvent(const QString &type, const PDAny &data)
{
    emit eventFacade->notifiEventQueued(type,data);
}

void PDEventDispatcher::dispatchSyncEvent(const QString &type, const PDAny &data)
{
    eventFacade->notifiEventSync(type,data);
}

void PDEventDispatcher::registEventHandle(const QString type, const PDEventHandle &handle)
{
    emit eventFacade->registEventHandle(type,handle);
}

void PDEventDispatcher::removeEventHandle(const QString type, const PDEventHandle &handle)
{
    emit eventFacade->removeEventHandle(type,handle);
}



