#ifndef ICOMMAND_H
#define ICOMMAND_H

#include "interfaces/INotification.h"

class ICommand
{
public:
    virtual void excute(INotification *notification) = 0;
};

#endif // ICOMMAND_H
