#ifndef IPROXY_H
#define IPROXY_H

#include <QString>

#include "pure/utils/PDGlobal.h"

class PDMVC_EXPORT IProxy
{
public:
    virtual const QString &getProxyName() = 0;

    /**
    * 获取具体类型的proxy
    **/
    template <typename ObjectType>
    ObjectType cast()
    {
        return dynamic_cast<ObjectType>(this);
    }
};

#endif // IPROXY_H
