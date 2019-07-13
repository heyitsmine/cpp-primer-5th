//
// Created by hs on 19-7-12.
//

#include <iostream>
#include <string>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data sum, data;
    double price = 0.0;
    while (std::cin >> data.bookNo >> data.units_sold >> price) {
        data.revenue = data.units_sold * price;
        sum.bookNo = data.bookNo;
        sum.units_sold += data.units_sold;
        sum.revenue += data.revenue;
    }
    std::cout << sum.bookNo << " " << sum.units_sold << " " << sum.revenue << std::endl;
    return 0;
}