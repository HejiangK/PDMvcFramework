﻿#ifndef IMEDIATOR_H
#define IMEDIATOR_H

#include "interfaces/IObserver.h"
#include "patten/Notifier.h"

#include <QString>

class IMediator : public Notifier
{
public:

    /**
    * 返回该mediator的名字
    **/
    virtual const QString &getMediatorName() = 0;
};

#endif // IMEDIATOR_H