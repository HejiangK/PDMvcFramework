#include "PDProxy.h"

PDProxy::PDProxy(const QString &proxyName)
    :proxyName(proxyName)
{

}

PDProxy::~PDProxy()
{

}

const QString &PDProxy::getProxyName()
{
    return proxyName;
}
