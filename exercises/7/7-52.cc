//
// Created by hs on 2019/8/26.
//
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

int main()
{
    Sales_data item = {"123", 25, 15.99};
    return 0;
}
