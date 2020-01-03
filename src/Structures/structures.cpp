#include <iostream>

int main()
{
    struct coffeeBean
    {
        std::string name;
        std::string country;
        int strength;
    };

    coffeeBean myBean = {"Strata", "Colombia", 10};

    coffeeBean newBean;
    newBean.name = "Flora";
    newBean.country = "Mexico";
    newBean.strength = 9;

    std::cout << "Coffee bean " + myBean.name + " is from " + myBean.country + ". It's strength is " << myBean.strength << "." << std::endl;
    std::cout << "Coffee bean " + newBean.name + " is from " + newBean.country + ". It's strength is " << newBean.strength << "." << std::endl;

    // Output:
    // Coffee bean Strata is from Colombia. It's strength is 10.
    // Coffee bean Flora is from Mexico. It's strength is 9.
}