#include <iostream>

int main()
{
    std::string response;
    std::cout << "Enter menu choise:" << std::endl << "More" << std::endl << "Quit" << std::endl;
    std::cin >> response;

    while (response != "Quit")
    {
        // Code to execute if Quit is not entered
        std::cout << "Additional information." << std::endl;
        // Prompt user again with menu choices until Quit is entered
        std::cout << "Enter menu choise:" << std::endl << "More" << std::endl << "Quit" << std::endl;
        std::cin >> response;
    }
}