//
// Created by hs on 2019/9/20.
//

#ifndef CPP_PRIMER_STRING_H
#define CPP_PRIMER_STRING_H

#include <utility>
#include <memory>
#include <cstring>
#include <iostream>

class String {
    friend std::ostream &operator<<(std::ostream &os, const String &str);
public:
    String() : String("") {}
    String(const char *);
    String(const String&);
    String &operator=(const String&);

    String(String &&) noexcept;
    String &operator=(String &&) noexcept;

    size_t size() const { return first_free - elements;}
    size_t capacity() const { return cap - elements;}

    char *begin() const { return elements;}
    char *end() const { return cap;}

    ~String();

private:
    std::pair<char*, char*> alloc_n_copy(const char *, const char *);
    void free();             // destroy the elements and free the space
    void range_initialize(const char*, const char*);

    std::allocator<char> alloc; // allocates the elements
    char *elements;
    char *first_free;
    char *cap;
};

std::ostream &operator<<(std::ostream &os, const String &str);

#endif //CPP_PRIMER_STRING_H
