#include <iostream>

int main()
{
    int arrName[10] = {1, 2, 3};
    for(int i = 0; i < 10; i++)
        std::cout << arrName[i] << " "; // 1 2 3 0 0 0 0 0 0 0 

    std::cout << std::endl << arrName[10]; // data found at the next memory address location
}