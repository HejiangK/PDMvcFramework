#ifndef ICOMMAND_H
#define ICOMMAND_H

#include "Interfaces/INotification.h"
#include "Utils/PDGlobal.h"

class PDMVC_EXPORT ICommand
{
public:

    /***
    * 执行command
    **/
    virtual void excute(INotification *notification) = 0;


};

#endif // ICOMMAND_H
