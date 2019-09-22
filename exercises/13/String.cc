//
// Created by hs on 2019/9/20.
//

#include "String.h"

String::String(const char *pc)
{
    size_t sz = std::strlen(pc);
    range_initialize(pc, pc + sz + 1);
}

String::String(const String &rhs)
{
    std::cout << "String(const String &)" << std::endl;
    range_initialize(rhs.begin(), rhs.end());
}

String &String::operator=(const String &rhs)
{
    std::cout << "String &operator=(const String &rhs)" << std::endl;
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}


std::pair<char *, char *> String::alloc_n_copy(const char *first, const char *last)
{
    auto str = alloc.allocate(last - first);
    return {str, std::uninitialized_copy(first, last, str)};
}

void String::range_initialize(const char *first, const char *last)
{
    auto data = alloc_n_copy(first, last);
    elements = data.first;
    first_free = cap = data.second;
}

void String::free()
{
    if (elements) {
        for (auto p = first_free; p != elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap - elements);
    }
}

String::~String()
{
    free();
}

String::String(String &&rhs) noexcept:elements(rhs.elements), first_free(rhs.first_free), cap(rhs.first_free)
{
    rhs.elements = rhs.first_free = rhs.cap = nullptr;
    std::cout << "String(String &&rhs)" << std::endl;
}

String &String::operator=(String &&rhs) noexcept
{
    if (this != &rhs) {
        free();
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;

        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    std::cout << "String::operator=" << std::endl;
    return *this;
}
