#include "PDModel.h"

PDModel::PDModel()
{

}

PDModel::~PDModel()
{

}

void PDModel::registProxy(IProxy *proxy)
{
    proxyMap[proxy->getProxyName()] = proxy;
}

void PDModel::removeProxy(IProxy *proxy)
{
    proxyMap.remove(proxy);
}

void PDModel::getProxy(const QString &proxyName)
{
    return proxyMap[proxyName]
}
