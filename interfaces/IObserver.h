#ifndef IOBSERVER_H
#define IOBSERVER_H

#include "interfaces/INotification.h"

class IObserver
{
public:

    /**
    * 收到notification
    **/
    virtual void handleNotification(INotification *notification);
};

#endif // IOBSERVER_H
