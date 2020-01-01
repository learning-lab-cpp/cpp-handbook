#include <iostream>

int main()
{
    int myInt{1};    
    long myLong = long(myInt);
    std::cout << myLong << std::endl; // 1

    char ch;
    int i = 65;
    float f = 2.5;
    double dbl;
    ch = static_cast<char>(i);   // int to char
    dbl = static_cast<double>(f);   // float to double
    std::cout << ch << std::endl; // A
    std::cout << dbl; // 2.5
}