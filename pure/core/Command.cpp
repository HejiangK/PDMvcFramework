#include "Command.h"
#include "pure/core/Facade.h"

Command::Command()
{

}

Command::~Command()
{

}

IProxy *Command::getProxy(const QString &proxyName)
{
    return Facade::instance().getProxy(proxyName);
}
