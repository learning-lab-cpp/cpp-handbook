#include <iostream>

int main()
{
    char response = 'y';
    if (response == 'y' || response == 'Y')
    {
        std::cout << "Positive response received" << std::endl;
    }

    // if else Statements
    std::string strResponse;
    if (strResponse == "connection_failed")
    {
        // Block of code executes if the value of the response variable is "connection_failed".
    }
    else
    {
        // Block of code executes if the value of the response variable is not "connection_failed".
    }


    // else if Statements
    std::string newResponse;
    if (newResponse == "connection_failed")
    {
        // Block of code executes if the value of the response variable is "connection_failed".
    }
    else if (newResponse == "connection_error")
    {
        // Block of code executes if the value of the response variable is "connection_error".
    }
    else
    {
        // Block of code executes if the value of the response variable is neither above responses.
    }
}