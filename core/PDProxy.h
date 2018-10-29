#ifndef PDPROXY_H
#define PDPROXY_H

#include "interfaces/IProxy.h"

class PDMVC_EXPORT PDProxy : public IProxy
{
public:
    PDProxy(const QString &proxyName);

    virtual ~PDProxy();

    virtual const QString &getProxyName() override;

private:

    QString proxyName;
};

#endif // PDPROXY_H
