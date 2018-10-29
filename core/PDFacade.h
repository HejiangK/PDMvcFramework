#ifndef PDFACADE_H
#define PDFACADE_H

#include "utils/PDGlobal.h"
#include "interfaces/IFacade.h"

class IView;
class IModel;
class IController;

class PDMVC_EXPORT PDFacade : public IFacade
{
public:

    virtual ~PDFacade();

    static PDFacade &instance()
    {
        static PDFacade facade;

        return facade;
    }

    //-------------------------------observer--------------------------------

    /***
    * 注册察
    **/
    virtual void registObserver(const QString &notificationName,IObserver *observer) override;

    /***
    * 移除观察
    **/
    virtual void removeObserver(const QString &notificationName) override;

    /***
    * 通知观察者
    **/
    virtual void notifiObserver(INotification *notification) override;

    //-------------------------mediator-------------------

    /**
    * 注册view处理
    ***/
    virtual void registMediator(IMediator *mediator) override;

    /***
    * 移除view 处理
    **/
    virtual void removeMediator(IMediator *mediator) override;

    /**
    * 获取对应名字的mediator
    **/
    virtual IMediator *getMediator(const QString &mediatorName) override;


    //-------------------------------------Model------------------------

    /*
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


    //------------------------------command-------------

    /**
    * 注册command
    **/
    virtual void registCommand(const QString &notificationName,ICommand *command) override;

    /**
    * 一次command
    ***/
    virtual void removeCommand(const QString &notificationName) override;


private:

    PDFacade();

private:

    IView       *mView;
    IModel      *mModel;
    IController *mController;

};

#endif // PDFACADE_H
