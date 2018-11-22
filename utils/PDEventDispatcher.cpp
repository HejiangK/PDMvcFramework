#include "PDEventDispatcher.h"
#include "Utils/PDEventFacade.h"

PDEventDispatcher::PDEventDispatcher()
    :eventFacade(new PDEventFacade())
{

}

PDEventDispatcher::~PDEventDispatcher()
{

}

void PDEventDispatcher::dispatchEvent(const QString &type, const PDAny &data)
{
    eventFacade->notifiEvent(type,data);
}

void PDEventDispatcher::dispatchEventQueued(const QString &type, const PDAny &data)
{
    eventFacade->notifiEventQueued(type,data);
}

void PDEventDispatcher::registEventHandle(const QString type, const PDEventHandle &handle)
{
    eventFacade->registEventHandle(type,handle);
}

void PDEventDispatcher::removeEventHandle(const QString type, const PDEventHandle &handle)
{
    eventFacade->removeEventHandle(type,handle);
}



