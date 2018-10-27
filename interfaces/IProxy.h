#ifndef IPROXY_H
#define IPROXY_H

#include <QString>

class IProxy
{
public:
    virtual const QString &getProxyName() = 0;
};

#endif // IPROXY_H
