#ifndef IMODEL_H
#define IMODEL_H

#include "pure/interfaces/IProxy.h"

class IModel
{
public:

    /**
    * 注册proxy
    **/
    virtual void registProxy(IProxy *proxy) = 0;

    /***
    * 移除proxy
    **/
    virtual void removeProxy(IProxy *proxy) = 0;

    /**
    * 获取对应proxy
    **/
    virtual IProxy *getProxy(const QString &proxyName) = 0;
};

#endif // IMODEL_H
