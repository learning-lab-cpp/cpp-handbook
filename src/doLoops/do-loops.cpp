#include <iostream>

int main()
{
    std::string response;

    do
    {        
        std::cout << "Enter menu choice " << std::endl << "More" << std::endl << "Quit" << std::endl;
        std::cin >> response;

        // Process the data.
        std::cout << "Process the data." << std::endl; 

    } while (response != "Quit");
}