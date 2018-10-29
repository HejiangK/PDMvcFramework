#ifndef IOBSERVER_H
#define IOBSERVER_H

#include "interfaces/INotification.h"
#include "utils/PDGlobal.h"

#include <QList>

class PDMVC_EXPORT IObserver
{
public:

    /**
    * 收到notification
    **/
    virtual void handleNotification(INotification *notification) = 0;
};

#endif // IOBSERVER_H
