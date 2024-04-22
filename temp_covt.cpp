#include <iostream>
#include <cmath>

int main()
{
    // TEMPERATURE CONVERTER 🦆🦆🦆🦆🦆🦆🦆🦆

    double temp;
    std::cout << "Temp converter" << '\n';
    std::cout << "F = Farienheit" << '\n';
    std::cout << "C = Celcuis" << '\n';
    std::cout << "what scale would you like to conver to" << '\n';
    char scale;
    std::cin >> scale;

    if (scale = "F" || "Fareinheit")
    {
        std::cout << "input temp in celcuis: " << '\n';
        std::cin >> temp;
        temp = (1.8 * temp) + 32.00;
        std::cout << temp << "F" << '\n';
    }
    else if (scale = "C" || "celcius")
    {
        std::cout << "input temp in farenheit: " << '\n';
        std::cin >> temp;
        temp = (temp - 32) * 5.0 / 9.0;
        std::cout << temp << "C" << '\n';
    }
    else
    {
        std::cout << "invalid scale input" << '\n';
    }
    // lol it works meh 🍎🍎🍎🍎🍎🍎🍎🍎🍎🍎🍎🍎

    return 0;
}