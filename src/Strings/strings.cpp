#include <iostream>

int main()
{
    char isAString[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char isNotAString[5] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << isAString << std::endl; // Hello
    std::cout << isNotAString << std::endl; // HelloHello

    char isBString[6] = "Hello";
    char isAnotherString[] = "Array size is inferred";   
    std::cout << isBString << std::endl; // Hello
    std::cout << isAnotherString << std::endl; // Array size is inferred

    std::string myString = "Hello!";
    std::cout << myString; // Hello!
}