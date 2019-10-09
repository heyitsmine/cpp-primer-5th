//
// Created by hs on 2019/9/27.
//

#ifndef CPP_PRIMER_LIMITED_QUOTE_H
#define CPP_PRIMER_LIMITED_QUOTE_H

#include "Disc_quote.h"

class Limited_quote : public Disc_quote{
public:
    Limited_quote() = default;
    Limited_quote(const std::string &book, double p, std::size_t qty, double disc):
    Disc_quote(book, p, qty, disc) {}
    double net_price(std::size_t cnt) const override
    {
        if (cnt <= max_qty)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }

    void debug() const override
    {
        Quote::debug();
        std::cout << "max_qty= " << this->max_qty << " "
                  << "discount= " << this->discount<< " ";
    }

private:
    std::size_t max_qty = 0;
    double discount = 0.0;
};


#endif //CPP_PRIMER_LIMITED_QUOTE_H
