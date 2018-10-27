#ifndef PDFACADE_H
#define PDFACADE_H

#include "utils/PDGlobal.h"
#include "interfaces/IFacade.h"

class PDView;

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
    * 是否包含mediator
    **/
    virtual bool isHasMediator(const QString &mediatorName) override;

private:

    PDFacade();

private:

    PDView *mView;

};

#endif // PDFACADE_H
