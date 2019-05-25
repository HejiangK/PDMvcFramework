#ifndef PDMODEL_H
#define PDMODEL_H

#include <QMap>

#include "pure/interfaces/IModel.h"

class Model : public IModel
{
public:

    virtual ~Model();

    static Model &instance()
    {
        static Model model;

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

    Model();

private:

    QMap<QString,IProxy*> proxyMap;

};

#endif // PDMODEL_H
