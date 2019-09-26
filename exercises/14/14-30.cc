//
// Created by hs on 2019/9/25.
//

#include "StrBlob.h"
#include <iostream>

int main()
{
    StrBlob sb1{ "a", "b", "c" };
    StrBlob sb2 = sb1;

    sb2[2] = "b";

    if (sb1 > sb2) {
        for (ConstStrBlobPtr iter = sb1.cbegin(); iter != sb1.cend(); ++iter)
            std::cout << *iter << " ";
        std::cout << std::endl;
    }

    ConstStrBlobPtr iter(sb2);
    iter.operator->()->size();
    std::cout << iter->size() << std::endl;
}
