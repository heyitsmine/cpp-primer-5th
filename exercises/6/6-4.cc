//
// Created by hs on 2019/8/14.
//

#include <iostream>
#include <string>

int fact(int n)
{
    if (n < 0 || n > 12)
        return -1;
    return n > 1 ? n * fact(n - 1) : 1;
}

void interactive_fact()
{
    std::string prompt("Enter a number within [1, 13)\n");
    std::string out_of_range("Out of range, please try again.\n");
    for(int n; std::cout << prompt, std::cin >> n;) {
        if (n < 1 || n > 12) {
            std::cout << out_of_range;
            continue;
        }
        std::cout << fact(n) << std::endl;
    }
}

int main()
{
    for (std::cout << 1; std::cout << 2; std::cout << 3)
    {
        std::cout << 4;
        break;
    }

    interactive_fact();
    return 0;
}
