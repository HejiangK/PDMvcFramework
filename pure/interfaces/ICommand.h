#ifndef ICOMMAND_H
#define ICOMMAND_H

#include "pure/interfaces/INotification.h"
#include "pure/utils/PDGlobal.h"

class PDMVC_EXPORT ICommand
{
public:

    /***
    * 执行command
    **/
    virtual void excute(INotification *notification) = 0;


};

#endif // ICOMMAND_H
