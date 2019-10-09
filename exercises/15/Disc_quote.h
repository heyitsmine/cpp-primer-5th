//
// Created by hs on 2019/10/5.
//

#ifndef CPP_PRIMER_DISC_QUOTE_H
#define CPP_PRIMER_DISC_QUOTE_H

#include "Quote.h"

class Disc_quote : public Quote{
public:
    Disc_quote() { std::cout << "default constructing Disc_quote\n"; }

    Disc_quote(const std::string &book, double price, std::size_t qty, double disc) :
            Quote(book, price), quantity(qty), discount(disc)
    {
        std::cout << "Disc_quote : constructor taking 4 parameters.\n";
    }

    // copy constructor
    Disc_quote(const Disc_quote& dq) :
            Quote(dq), quantity(dq.quantity), discount(dq.discount)
    {
        std::cout << "Disc_quote : copy constructor.\n";
    }

    // move constructor
    Disc_quote(Disc_quote&& dq) noexcept :
            Quote(std::move(dq)), quantity(std::move(dq.quantity)), discount(std::move(dq.discount))
    {
        std::cout << "Disc_quote : move constructor.\n";
    }

    // copy =()
    Disc_quote& operator =(const Disc_quote& rhs)
    {
        Quote::operator =(rhs);
        this->quantity = rhs.quantity;
        this->discount = rhs.discount;

        std::cout << "Disc_quote : copy =()\n";

        return *this;
    }

    // move =()
    Disc_quote& operator =(Disc_quote&& rhs) noexcept
    {
        if (*this != rhs)
        {
            Quote::operator =(std::move(rhs));
            this->quantity = std::move(rhs.quantity);
            this->discount = std::move(rhs.discount);
        }
        std::cout << "Disc_quote : move =()\n";

        return *this;
    }

    virtual double net_price(std::size_t) const = 0;
    ~Disc_quote()
    {
        std::cout << "destructing Dis_quote\n";
    }
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};


#endif //CPP_PRIMER_DISC_QUOTE_H
