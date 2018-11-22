#include "PDEventFacade.h"
#include "PDEventDispatcher.h"

#include <QMutexLocker>

PDEventFacade::PDEventFacade():QObject ()
{
    qRegisterMetaType<PDAny>("PDAny");
    qRegisterMetaType<PDAny>("PDAny const&");

    connect(this,&PDEventFacade::notifiEventQueued,this,&PDEventFacade::onEvent);

}

PDEventFacade::~PDEventFacade()
{

}

void PDEventFacade::registEventHandle(const QString &type, const PDEventHandle &handle)
{
    QMutexLocker locker(&mutex);

    eventHandles[type].push_back(handle);
}

void PDEventFacade::removeEventHandle(const QString &type, const PDEventHandle &handle)
{
    QMutexLocker locker(&mutex);

    eventHandles[type].removeOne(handle);
}

void PDEventFacade::notifiEvent(const QString &type, const PDAny &data)
{
    onEvent(type,data);
}

void PDEventFacade::onEvent(const QString &type, const PDAny &data)
{
    mutex.lock();

    auto list = eventHandles[type];
    auto it    = list.begin();

    mutex.unlock();

    while (it != list.end())
    {
        (*it).eventHandle(type,data);

        it ++;
    }

}


