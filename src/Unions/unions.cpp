#include <iostream>

int main()
{
    union numericUnion
    {
        int intValue;
        long longValue;
        double doubleValue;
    };

    numericUnion myUnion;
    myUnion.intValue = 3;
    std::cout << myUnion.intValue << std::endl; // 3
    myUnion.doubleValue = 4.5;
    std::cout << myUnion.doubleValue << std::endl; // 4.5
    std::cout << myUnion.intValue;  // 0
}