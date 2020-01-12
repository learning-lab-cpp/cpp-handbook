#include <iostream>

inline void swap1(int & a, int & b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

inline void swap2(int & a, int & b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

int main()
{
    int a1 {1}, b1 {2};
    std::cout << "a1: " << a1 << "; b1: " << b1 << std::endl; // a1: 1; b1: 2
    swap1(a1, b1);
    std::cout << "a1: " << a1 << "; b1: " << b1 << std::endl << std::endl; // a1: 2; b1: 1

    int a2 {3}, b2 {4};
    std::cout << "a2: " << a2 << "; b2: " << b2 << std::endl; // a2: 3; b2: 4
    swap2(a2, b2);
    std::cout << "a2: " << a2 << "; b2: " << b2 << std::endl; // a2: 4; b2: 3
}

// Output:
// a1: 1; b1: 2
// a1: 2; b1: 1

// a2: 3; b2: 4
// a2: 4; b2: 3
