#include "Rectangle.h"

int main()
{
    Rectangle rectangle_1;
    rectangle_1.display();
    // Output:
    // Class id: 0
    // Width: 0; Height: 0

    Rectangle rectangle_2{};
    rectangle_2.display();
    // Output:
    // Class id: 0
    // Width: 0; Height: 0

    Rectangle rectangle_3{100, 200};
    rectangle_3.display();
    // Output:
    // Class id: 0
    // Width: 100; Height: 200

    Rectangle rectangle_4{1, 300, 400};
    rectangle_4.display();
    // Output:
    // Class id: 1
    // Width: 300; Height: 400 

    return 0;
}