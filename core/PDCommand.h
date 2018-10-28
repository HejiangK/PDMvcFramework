#ifndef PDCOMMAND_H
#define PDCOMMAND_H

#include "interfaces/ICommand.h"
#include "patten/Notifier.h"
#include "utils/PDGlobal.h"

class PDMVC_EXPORT PDCommand : public ICommand, public Notifier
{
public:
    PDCommand();

    virtual ~PDCommand();
};

#endif // PDCOMMAND_H
