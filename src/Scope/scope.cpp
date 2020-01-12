#include <iostream>

int main()
{
    int total = 0;
    for(int i = 1; i <= 10; i++)
    {
         total += i;
    }
    std::cout << "The sum of the numbers 1 to 10 is " << total << std::endl;
//    std::cout << "Current value of i is " << i << std::cout; // compiler error
    return 0;
}