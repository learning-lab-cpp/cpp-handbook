#include <iostream>

int main()
{
    char response = 'y';
    switch (response)
    {
    case 'y':
        // Block of code executes if the value of response is y.
        break;
    case 'Y':
        // Block of code executes if the value of response is Y.
        break;
    case 'n':
        // Block of code executes if the value of response is n.
        break;
    default:
        // Block executes if none of the above conditions are met.
        break;
    }
}