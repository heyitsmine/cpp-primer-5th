//
// Created by hs on 2019/9/20.
//

#ifndef CPP_PRIMER_STRVEC_H
#define CPP_PRIMER_STRVEC_H

#include <string>
#include <utility>
#include <memory>
#include <initializer_list>

class StrVec {
public:
    StrVec(): elements(nullptr), first_free(nullptr), cap(nullptr) { }
    StrVec(const StrVec&);            // copy constructor
    StrVec(std::initializer_list<std::string> il);
    StrVec &operator=(const StrVec&); // copy assignment

    StrVec(StrVec &&) noexcept;
    StrVec &operator=(StrVec &&) noexcept;

    ~StrVec();                        // destructor
    void push_back(const std::string&);  // copy the element
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }
    void reserve(size_t n);
    void resize(size_t n);
    void resize(size_t n, const std::string&);
    // std::string& at(size_t pos) { return *(elements + pos); }
    const std::string& at(size_t pos) const { return *(elements + pos); }
private:
    void chk_n_alloc()
    { if (size() == capacity()) reallocate(); }
    // utilities used by the copy constructor, assignment operator, and destructor
    std::pair<std::string*, std::string*> alloc_n_copy (const std::string*, const std::string*);
    void free();             // destroy the elements and free the space
    void reallocate();       // get more space and copy the existingelements
    void alloc_n_move(size_t new_cap);
    void range_initialize(const std::string*, const std::string*);

    std::allocator<std::string> alloc; // allocates the elements
    // used by the functions that add elements to the StrVec
    std::string *elements;   // pointer to the first element in the array
    std::string *first_free; // pointer to the first free element in the array
    std::string *cap;        // pointer to one past the end of the array
};


#endif //CPP_PRIMER_STRVEC_H
