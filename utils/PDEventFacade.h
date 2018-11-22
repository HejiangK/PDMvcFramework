#ifndef PDEVENTFACADE_H
#define PDEVENTFACADE_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QList>
#include <QMutex>

#include "Utils/PDAny.h"
#include "Utils/PDGlobal.h"

struct PDEventHandle;

class PDEventFacade : public QObject
{
    Q_OBJECT
public:
    PDEventFacade();

    virtual ~PDEventFacade();

    /***
    * 注册事件handle
    **/
    void registEventHandle(const QString &type,const PDEventHandle &handle);

    /**
    * 移除事件handle
    ***/
    void removeEventHandle(const QString &type,const PDEventHandle &handle);

    /**
    * 派发事件
    **/
    void notifiEvent(const QString &type,const PDAny &data);

signals:

    void notifiEventQueued(const QString &type,const PDAny &data);

protected slots:

    void onEvent(const QString &type,const PDAny &data);

private:

    QMap<QString,QList<PDEventHandle>> eventHandles;

    QMutex mutex;
};

#endif // PDEVENTFACADE_H
