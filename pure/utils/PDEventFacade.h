#ifndef PDEVENTFACADE_H
#define PDEVENTFACADE_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QList>
#include <QMutex>

#include "PDAny.h"
#include "PDGlobal.h"

struct PDEventHandle;

class PDEventFacade : public QObject
{
    Q_OBJECT
public:
    PDEventFacade();

    virtual ~PDEventFacade();

    void notifiEventSync(const QString &type,const PDAny &data);

signals:

    void notifiEventQueued(const QString &type,const PDAny &data);

    void registEventHandle(const QString &type,const PDAny &handleData);

    void removeEventHandle(const QString &type,const PDAny &handleData);

protected slots:

    void onNotifiEvent(const QString &type,const PDAny &data);

    void onRegistEventHandle(const QString &type,const PDAny &handleData);

    void onRemoveEventHandle(const QString &type,const PDAny &handleData);

private:

    QMap<QString,QList<PDEventHandle>> eventHandles;

};

#endif // PDEVENTFACADE_H
