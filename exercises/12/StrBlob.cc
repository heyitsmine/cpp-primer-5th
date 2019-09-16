//
// Created by hs on 2019/9/14.
//

#include "StrBlob.h"
#include "StrBlobPtr.h"

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end()
{
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}
