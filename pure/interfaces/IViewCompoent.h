#ifndef IVIEWCOMPOENT_H
#define IVIEWCOMPOENT_H

#include <QString>

#include "pure/utils/PDAny.h"

class IViewCompoent
{
public:

    virtual void onMediatorHandle(const QString &type,const PDAny &data) = 0;

    /**
    * 获取具体类型的proxy
    **/
    template <typename ObjectType>
    ObjectType cast()
    {
        return dynamic_cast<ObjectType>(this);
    }
};

#endif // IVIEWCOMPOENT_H
