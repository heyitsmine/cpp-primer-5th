//
// Created by hs on 2019/9/27.
//

#include "Bulk_quote.h"

Bulk_quote::Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) :
        Disc_quote(book, p, qty, disc)
{
    std::cout << "Bulk_quote : constructor taking 4 parameters\n";
}

double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= quantity)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}
