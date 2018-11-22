#ifndef PDANY_H
#define PDANY_H



#include <iostream>
#include <string>
#include <memory>
#include <typeindex>

#include "PDAny.h"
#include "PDAnyContent.h"
#include "PDGlobal.h"

using namespace std;


class PDMVC_EXPORT PDAny
{
public:
    PDAny():_content(nullptr)
    {

    }

    PDAny(const PDAny &other):_content(other.copy())
    {

    }

    template <typename T>PDAny(const T &t):_content(new PDAnyContent<T>(t)){}

    template <typename T>
    PDAny &operator=(const T &t)
    {
        if(_content != nullptr)
            delete _content;

        _content = new PDAnyContent<T>(t);

        return *this;
    }

    PDAny &operator=(const PDAny &other)
    {
        if(_content == other._content)
            return *this;

        _content = other.copy();

        return *this;
    }

    virtual ~PDAny()
    {
        if(_content != nullptr)
        {
            delete _content;

            _content = nullptr;
        }
    }

    PDBaseContent *copy() const
    {
        if(_content == nullptr)
            return nullptr;

        return _content->copy();
    }

    template <typename T> T cast() const
    {
        auto ptr = dynamic_cast<PDAnyContent<T>*>(_content);

        if(ptr == nullptr)
        {
            throw "error type";
        }

        return ptr->contentType;
    }

    bool isNull()
    {
        return _content == nullptr;
    }

private:

    PDBaseContent    *_content;
};

#endif // PDANY_H
