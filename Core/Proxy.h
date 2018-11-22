#ifndef PDPROXY_H
#define PDPROXY_H

#include "Interfaces/IProxy.h"

class PDMVC_EXPORT Proxy : public IProxy
{
public:
    Proxy(const QString &proxyName);

    virtual ~Proxy();

    virtual const QString &getProxyName() override;

private:

    QString proxyName;
};

#endif // PDPROXY_H
