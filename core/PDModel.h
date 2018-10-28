#ifndef PDMODEL_H
#define PDMODEL_H

#include "interfaces/IModel.h"

#include <QMap>

class PDModel : public IModel
{
public:

    virtual ~PDModel();

    static PDModel &instance()
    {
        static PDModel model;

        return model;
    }

    /**
    * 注册proxy
    **/
    virtual void registProxy(IProxy *proxy) override;

    /***
    * 移除proxy
    **/
    virtual void removeProxy(IProxy *proxy) override;

    /**
    * 获取对应proxy
    **/
    virtual IProxy *getProxy(const QString &proxyName) override;

private:

    PDModel();

private:

    QMap<QString,IProxy*> proxyMap;

};

#endif // PDMODEL_H
