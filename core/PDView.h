#ifndef PDVIEW_H
#define PDVIEW_H

#include "interfaces/IView.h"

#include <QMap>

class PDView : public IView
{
public:

    virtual ~PDView();

    static PDView &instance()
    {
        static PDView view;

        return view;
    }

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

    /**
    * 获取对应名字的mediator
    **/
    virtual IMediator *getMediator(const QString &mediatorName) override;

    /***
    * 移除view 处理
    **/
    virtual void removeMediator(IMediator *mediator) override;

    /**
    * 是否包含mediator
    **/
    virtual bool isHasMediator(const QString &mediatorName) override;

private:

    PDView();


private:

    QMap<QString,IObserver*> observerMap;

    QMap<QString,IMediator*> mediatorMap;

};

#endif // PDVIEW_H
