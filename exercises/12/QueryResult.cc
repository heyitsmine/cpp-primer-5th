//
// Created by hs on 2019/9/16.
//

#include "QueryResult.h"
#include "StrBlobPtr.h"

std::ostream &print(std::ostream &os, const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size()
       << (qr.lines->size() > 1 ? " times" : " time")
       << std::endl;

    for (auto line : *qr.lines) {
        os << "    " << "(line " << line + 1 << ") " << StrBlobPtr(*(qr.file), line).deref() << std::endl;
    }
    return os;
}
