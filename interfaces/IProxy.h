#ifndef IPROXY_H
#define IPROXY_H

#include <QString>

#include "utils/PDGlobal.h"

class PDMVC_EXPORT IProxy
{
public:
    virtual const QString &getProxyName() = 0;
};

#endif // IPROXY_H
