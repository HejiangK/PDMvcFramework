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

    //-------------------------------view--------------------------------

    /***
    * 注册察
    **/
    virtual void registObserver(const QString &notificationName,IObserver *observer) override;

    /***
    * 移除观察
    **/
    virtual void removeObserver(const QString &notificationName) override;

    /***
    * 是否包含该notification的观察者
    **/
    virtual bool isHasObserver(const QString &notificationName) override;

    /***
    * 通知观察者
    **/
    virtual void notifiObserver(INotification *notification) override;

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

    /**
    * 是否包含mediator
    **/
    virtual bool isHasMediator(const QString &mediatorName) override;

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

    //------------------------------control-------------

    /**
    * 注册command
    **/
    virtual void registCommand(const QString &notificationName,ICommand *command) override;

    /**
    * 一次command
    ***/
    virtual void removeCommand(const QString &notificationName) override;

    /**
    * 执行command
    ***/
    virtual void excuteCommand(INotification *notification) override;



private:

    PDFacade();

private:

    IView       *mView;
    IModel      *mModel;
    IController *mController;

};

#endif // PDFACADE_H
