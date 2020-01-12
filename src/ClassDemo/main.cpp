#include <iostream>
#include "Rectangle.h"

int main()
{
    Rectangle rectangle_a;
    Rectangle rectangle_b{};
    Rectangle rectangle_c{1, 2};

    Rectangle rectangle_d{};
    rectangle_d._width = 3;
    rectangle_d._height = 4;

    std::cout << rectangle_a._width << " " << rectangle_a._height << '\n'; // garbage garbage
    std::cout << rectangle_b._width << " " << rectangle_b._height << '\n'; // 0 0 
    std::cout << rectangle_c._width << " " << rectangle_c._height << '\n'; // 1 2 
    std::cout << rectangle_d._width << " " << rectangle_d._height << '\n'; // 3 4


}