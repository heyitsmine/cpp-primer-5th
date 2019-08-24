//
// Created by hs on 2019/8/24.
//

#include "7-23.h"
#include <iostream>
int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
    return 0;
}
