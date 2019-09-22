//
// Created by hs on 2019/9/19.
//

#ifndef CPP_PRIMER_13_30_H
#define CPP_PRIMER_13_30_H

#include <string>
#include <iostream>

class HasPtr {
public:
    friend void swap(HasPtr&, HasPtr&);
    friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);

    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
    HasPtr &operator=(const HasPtr &hp)
    {
        auto new_p = new std::string(*hp.ps);
        delete ps;
        ps = new_p;
        i = hp.i;
        return *this;
    }
    void swap(HasPtr &rhs)
    {
        std::cout << "call swap(HasPtr &rhs)" << std::endl;
        using std::swap;
        swap(ps, rhs.ps);
        swap(i, rhs.i);
    }
    bool operator<(const HasPtr &hp)
    {
        return *ps < *hp.ps;
    }
    ~HasPtr() {
        delete ps;
    }

    void show() { std::cout << *ps << std::endl; }
private:
    std::string *ps;
    int i;
};

void swap(HasPtr& lhs, HasPtr& rhs)
{
    std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
    lhs.swap(rhs);
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs)
{
    return *lhs.ps > *rhs.ps;
}

#endif //CPP_PRIMER_13_30_H
