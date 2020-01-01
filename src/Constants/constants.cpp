#include <iostream>

int main()
{
    const int a{1};
    int const b = 2;

    std::cout << a << std::endl;
    std::cout << b;
}