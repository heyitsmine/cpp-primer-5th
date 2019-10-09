//
// Created by hs on 2019/10/8.
//

#include <iostream>
#include <string>

#include "Quote.h"
#include "Bulk_quote.h"
#include "Limited_quote.h"
#include "Disc_quote.h"


int main()
{
    Bulk_quote bq1;
    std::cout << std::endl;

    Bulk_quote bq2("ss", 2.05, 12, 0.3);
    std::cout << std::endl;

    bq2 = std::move(bq1);
    std::cout << std::endl;

    return 0;
}
