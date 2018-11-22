#include "Command.h"
#include "Core/Facade.h"

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
