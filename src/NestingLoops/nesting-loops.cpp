#include <iostream>

int main()
{
    bool alternate = true;

    for (int x = 0; x < 8; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            if (alternate)
            {
                std::cout << "X ";
                std::cout << "O ";

            }
            else
            {
                std::cout << "O ";
                std::cout << "X ";

            }
        }
        alternate = !alternate;

        std::cout << std::endl;
    }
}

// Output:
// X O X O X O X O
// O X O X O X O X
// X O X O X O X O
// O X O X O X O X
// X O X O X O X O
// O X O X O X O X
// X O X O X O X O
// O X O X O X O X
