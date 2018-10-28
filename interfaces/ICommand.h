#ifndef ICOMMAND_H
#define ICOMMAND_H

#include "interfaces/INotification.h"
#include "patten/Notifier.h"
#include "utils/PDGlobal.h"

class PDMVC_EXPORT ICommand : public Notifier
{
public:
    virtual void excute(INotification *notification) = 0;
};

#endif // ICOMMAND_H
