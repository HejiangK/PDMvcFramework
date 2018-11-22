#ifndef PDANYCONTENT_H
#define PDANYCONTENT_H

class PDBaseContent
{
public:

    PDBaseContent() {}

    virtual ~PDBaseContent() {}

    virtual PDBaseContent *copy() = 0;
};

template <typename ContentType>
class PDAnyContent : public PDBaseContent
{
public:
    PDAnyContent(const ContentType &contentType):contentType(contentType) {}

    virtual ~PDAnyContent() {}

    PDBaseContent *copy() override
    {
        return new PDAnyContent<ContentType>(this->contentType);
    }

    ContentType     contentType;

};

#endif // PDANYCONTENT_H
