#ifndef PDCOMMAND_H
#define PDCOMMAND_H

#include "Interfaces/ICommand.h"
#include "Interfaces/IProxy.h"
#include "Patten/Notifier.h"
#include "Utils/PDGlobal.h"

class PDMVC_EXPORT Command : public ICommand, public Notifier
{
public:
    Command();

    virtual ~Command();

    /***
    * 获取对应的proxy
    **/
    IProxy *getProxy(const QString &proxyName);


    /***
    * 获取proxy
    **/
    template <typename ObjectType>
    ObjectType getCastProxy(const QString &proxyName)
    {
        return getProxy(proxyName)->cast<ObjectType>();
    }
};

#endif // PDCOMMAND_H
