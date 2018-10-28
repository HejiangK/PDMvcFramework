#ifndef PDPROXY_H
#define PDPROXY_H

#include "interfaces/IProxy.h"

class PDMVC_EXPORT PDProxy : public IProxy
{
public:
    PDProxy();

    virtual ~PDProxy();

    virtual const QString &getProxyName() override;

protected:

    QString proxyName;
};

#endif // PDPROXY_H
