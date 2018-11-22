#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <QList>

#include "Interfaces/INotification.h"
#include "Utils/PDGlobal.h"

class PDMVC_EXPORT IObserver
{
public:

    /**
    * 收到notification
    **/
    virtual void handleNotification(INotification *notification) = 0;
};

#endif // IOBSERVER_H
