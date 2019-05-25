#include "Model.h"

Model::Model()
{

}

Model::~Model()
{

}

void Model::registProxy(IProxy *proxy)
{
    proxyMap[proxy->getProxyName()] = proxy;
}

void Model::removeProxy(IProxy *proxy)
{
    proxyMap.remove(proxy->getProxyName());
}

IProxy *Model::getProxy(const QString &proxyName)
{
    return proxyMap[proxyName];
}
