//
// Created by hs on 2019/9/20.
//

#include "StrVec.h"
#include <algorithm>

std::pair<std::string *, std::string *> StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
    auto data = alloc.allocate(e - b);
    return {data, std::uninitialized_copy(elements, first_free, data)};
}

void StrVec::free()
{
    if (elements)
    {
        std::for_each(elements, first_free, [this](std::string &rhs) {alloc.destroy(&rhs);});
        for (auto p = first_free; p != elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap - elements);
    }
}

void StrVec::alloc_n_move(size_t new_cap)
{
    auto newdata = alloc.allocate(new_cap);
    auto dest = newdata;
    auto elem = elements;
    for(size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + new_cap;
}

void StrVec::reallocate()
{
    auto newcapacity = size() ? size() * 2 : 1;
    alloc_n_move(newcapacity);
}

StrVec::StrVec(const StrVec &orig)
{
    range_initialize(orig.begin(), orig.end());
}

StrVec &StrVec::operator=(const StrVec &rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

StrVec::~StrVec()
{
    free();
}

void StrVec::push_back(const std::string &s)
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

void StrVec::reserve(size_t n)
{
    if (capacity() >= n)
        return;
    alloc_n_move(n);
}

void StrVec::resize(size_t n)
{
    resize(n, std::string());
}

void StrVec::resize(size_t n, const std::string &s)
{
    if (n < size()) {
        for (auto p = elements + n; p != first_free;)
            alloc.destroy(p++);
    } else if (n > size()) {
        if (n > capacity())
            reserve(n * 2);
        for (auto p = first_free; p != elements + n;)
            alloc.construct(p++, s);
    }
    first_free = elements + n;
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
    range_initialize(il.begin(), il.end());
}

void StrVec::range_initialize(const std::string *first, const std::string *last)
{
    auto data = alloc_n_copy(first, last);
    elements = data.first;
    first_free = cap = data.second;
}

StrVec::StrVec(StrVec &&rhs) noexcept: elements(rhs.elements), first_free(rhs.elements), cap(rhs.elements)
{
    rhs.elements = rhs.first_free = rhs.cap = nullptr;
}

StrVec &StrVec::operator=(StrVec &&rhs) noexcept
{
    if(this != &rhs) {
        free();
        elements = rhs.elements;
        first_free = rhs.elements;
        cap = rhs.elements;

        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}
