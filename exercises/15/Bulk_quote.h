//
// Created by hs on 2019/9/27.
//

#ifndef CPP_PRIMER_BULK_QUOTE_H
#define CPP_PRIMER_BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote { // Bulk_quote inherits from Quote
public:
    using Disc_quote::Disc_quote;
    Bulk_quote() { std::cout << "default constructing Bulk_quote\n"; }
    Bulk_quote(const std::string &, double, std::size_t, double);

    // copy constructor
    Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq)
    { std::cout << "Bulk_quote : copy constructor\n"; }

    // move constructor
    //page 535, " In a constructor, noexcept appears between the parameter list and the : that begins the constructor initializer list"
    Bulk_quote(Bulk_quote&& bq) noexcept : Disc_quote(std::move(bq))
    {
        std::cout << "Bulk_quote : move constructor\n";
    }

    // copy =()
    Bulk_quote& operator =(const Bulk_quote& rhs)
    {
        Disc_quote::operator =(rhs);
        std::cout << "Bulk_quote : copy =()\n";

        return *this;
    }


    // move =()
    Bulk_quote& operator =(Bulk_quote&& rhs) noexcept
    {
        Disc_quote::operator=(std::move(rhs));
        std::cout << "Bulk_quote : move =()\n";

        return *this;
    }

    // clone self
    virtual Bulk_quote* clone() const & { return new Bulk_quote(*this); }
    virtual Bulk_quote* clone() &&      { return new Bulk_quote(std::move(*this)); }

    // overrides the base version in order to implement the bulk purchase discount policy
    double net_price(std::size_t) const override;

    void debug() const override
    {
        Quote::debug();
        std::cout << "min_qty= " << this->quantity << " "
                  << "discount= " << this->discount<< " ";
    }
    ~Bulk_quote() override
    {
        std::cout << "destructing Bulk_quote\n";
    }
};

#endif //CPP_PRIMER_BULK_QUOTE_H
