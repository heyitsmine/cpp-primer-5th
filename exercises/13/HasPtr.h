//
// Created by hs on 2019/9/17.
//

#ifndef CPP_PRIMER_HASPTR_H
#define CPP_PRIMER_HASPTR_H

#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}

    HasPtr(const HasPtr &orig) : ps(new std::string(*orig.ps)), i(orig.i), use(orig.use) { ++*use; }

    HasPtr& operator=(const HasPtr &orig)
    {
        ++*orig.use;
        if(--*use == 0)
        {
            delete ps;
            delete use;
        }
        ps = orig.ps;
        i = orig.i;
        use = orig.use;
        return *this;
    }
    ~HasPtr()
    {
        if(--*use == 0)
        {
            delete ps;
            delete use;
        }
    }
private:
    std::string *ps;
    int i;
    std::size_t *use;
};

#endif //CPP_PRIMER_HASPTR_H
