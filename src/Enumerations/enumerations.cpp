#include <iostream>

int main()
{
    enum Day {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    Day payDay;
    payDay = Thursday;
    std::cout << payDay << std::endl; // 5
}