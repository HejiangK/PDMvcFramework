#ifndef PDEVENTDISPATCHER_H
#define PDEVENTDISPATCHER_H

#include <QString>
#include <functional>

#include "Utils/PDAny.h"
#include "Utils/PDGlobal.h"

class PDEventFacade;

struct PDEventHandle
{
    QString     targetPtr;

    void        *target;

    std::function<void(const QString &type, const PDAny &data)> eventHandle;

    bool operator == (const PDEventHandle &handle)
    {
        if(target != handle.target)
            return false;

        if(targetPtr != handle.targetPtr)
            return false;

        return true;
    }

} ;

class PDMVC_EXPORT PDEventDispatcher
{
public:
    PDEventDispatcher();

    virtual ~PDEventDispatcher();

    static PDEventDispatcher &instance()
    {
        static PDEventDispatcher dispatcher;

        return dispatcher;
    }

    /***
    * 发送事件，事件执行函数在发送线程
    **/
    virtual void dispatchEvent(const QString &type,const PDAny &data);

    /**
    * 发送事件，事件执行函数在主线程执行
    **/
    virtual void dispatchEventQueued(const QString &type,const PDAny &data);

    /**
    * 添加事件监听
    ***/
    template <typename ObjectType>
    void addEventListener(const QString &type,void(ObjectType::*function)(const QString &,const PDAny &),ObjectType *object)
    {
        PDEventHandle handle;

        char ptr[24];

        sprintf(ptr,"%p",function);

        handle.targetPtr    = ptr;
        handle.target       = object;
        handle.eventHandle  = std::bind(function, object, std::placeholders::_1, std::placeholders::_2);

        registEventHandle(type,handle);
    }

    /***
    * 移除事件监听
    **/
    template <typename ObjectType>
    void removeEventListener(const QString &type,void(ObjectType::*function)(const QString &,const PDAny &),ObjectType *object)
    {
        PDEventHandle handle;

        char ptr[24];

        sprintf(ptr,"%p",function);

        handle.targetPtr    = ptr;
        handle.target       = object;
        handle.eventHandle  = std::bind(function, object, std::placeholders::_1, std::placeholders::_2);

        removeEventHandle(type,handle);
    }

private:

    /***
    * 注册事件handle
    **/
    void registEventHandle(const QString type,const PDEventHandle &handle);

    /**
    * 移除事件handle
    ***/
    void removeEventHandle(const QString type,const PDEventHandle &handle);

private:

    PDEventFacade   *eventFacade;


};

#endif // PDEVENTDISPATCHER_H
