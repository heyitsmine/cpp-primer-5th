//
// Created by hs on 2019/9/14.
//

#ifndef CPP_PRIMER_STRBLOBPTR_H
#define CPP_PRIMER_STRBLOBPTR_H

#include "StrBlob.h"
class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
    std::string& deref() const
    {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];  // (*p) is the vector to which this object points
    }
    StrBlobPtr& incr()       // prefix version
    {
        // if curr already points past the end of the container, can't increment it
        check(curr, "increment past end of StrBlobPtr");
        ++curr;       // advance the current state
        return *this;
    }
private:
    // check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<std::string>> check(std::size_t i, const std::string& msg) const
    {
        auto ret = wptr.lock();   // is the vector still around?
        if (!ret)
            throw std::runtime_error("unbound StrBlobPtr");
        if (i >= ret->size())
            throw std::out_of_range(msg);
        return ret; // otherwise, return a shared_ptr to the vector
    }
    // store a weak_ptr, which means the underlying vector might be destroyed
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;      // current position within the array
};
#endif //CPP_PRIMER_STRBLOBPTR_H
