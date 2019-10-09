//
// Created by hs on 2019/9/27.
//

#ifndef CPP_PRIMER_QUOTE_H
#define CPP_PRIMER_QUOTE_H
#include <string>
#include <iostream>

class Quote {
    friend bool operator !=(const Quote& lhs, const Quote& rhs);
public:
    Quote() { std::cout << "default constructing Quote\n"; }
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price)
    { std::cout << "Quote : constructor taking 2 parameters\n"; }

    Quote(const Quote &rhs) : bookNo(rhs.bookNo), price(rhs.price)
    {
        std::cout << "Quote(const Quote &rhs)" << std::endl;
    }

    Quote(Quote &&rhs) : bookNo(std::move(rhs.bookNo)), price(std::move(rhs.price))
    {
        std::cout << "Quote(const Quote &rhs)" << std::endl;
    }

    Quote &operator=(const Quote &rhs)
    {
        if(*this != rhs) {
            bookNo = rhs.bookNo;
            price = rhs.price;
        }
        std::cout << "Quote &operator=(const Quote &rhs)" << std::endl;
    }

    Quote &operator=(Quote &&rhs) noexcept
    {
        if(*this != rhs) {
            bookNo = std::move(rhs.bookNo);
            price = std::move(rhs.price);
        }
        std::cout << "Quote &operator=(Quote &&rhs)" << std::endl;
    }

    // clone self
    virtual Quote* clone() const & { return new Quote(*this); }
    virtual Quote* clone() &&      { return new Quote(std::move(*this)); }

    std::string isbn() const { return bookNo; }

    // returns the total sales price for the specified number of items
    // derived classes will override and apply different discount algorithms
    virtual double net_price(std::size_t n) const
    {
        return n * price;
    }

    virtual void debug() const
    {
        std::cout << "data members of this class:" << std::endl
                  << "bookNo= " << this->bookNo << " "
                  << "price= " << this->price << " ";
    }

    virtual ~Quote() // dynamic binding for the destructor
    {
        std::cout << "destructing Quote\n";
    }
private:
    std::string bookNo; // ISBN number of this item
protected:
    double price = 0.0; // normal, undiscounted price
};

bool inline operator!=(const Quote &lhs, const Quote &rhs)
{
    return lhs.bookNo != rhs.bookNo || lhs.price != rhs.price;
}

// non-member
double print_total(std::ostream &os, const Quote &item, size_t n);

#endif //CPP_PRIMER_QUOTE_H
