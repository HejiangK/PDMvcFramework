#include "Proxy.h"

Proxy::Proxy(const QString &proxyName)
    :proxyName(proxyName)
{

}

Proxy::~Proxy()
{

}

const QString &Proxy::getProxyName()
{
    return proxyName;
}
