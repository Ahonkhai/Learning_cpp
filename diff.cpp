#include <iostream>
#include <cmath>
#include <string>

namespace convert_from
{
    std::string scale;
}

namespace convert_to
{
    std::string scale;
}

int main()
{
    double temp;
    std::cout << "Temp converter" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';
    std::cout << "K = Kelvin" << '\n';
    std::cout << "what scale would you like to convert from and to" << '\n';
    std::cout << "Converting from: ";
    std::cin >> convert_from::scale;
    std::cout << "Converting to: ";
    std::cin >> convert_to::scale;

    if (convert_from::scale == "F" || convert_from::scale == "Fahrenheit")
    {
        if (convert_to::scale == "C" || convert_to::scale == "Celsius")
        {
            std::cout << "Input temp in Fahrenheit: " << '\n';
            std::cin >> temp;
            temp = (temp - 32) * 5.0 / 9.0;
            std::cout << temp << "C" << '\n';
        }
        else if (convert_to::scale == "K" || convert_to::scale == "Kelvin")
        {
            std::cout << "Input temp in Fahrenheit: " << '\n';
            std::cin >> temp;
            temp = (temp - 32) * 5.0 / 9.0 + 273.15;
            std::cout << temp << "K" << '\n';
        }
    }
    else if (convert_from::scale == "C" || convert_from::scale == "Celsius")
    {
        if (convert_to::scale == "F" || convert_to::scale == "Fahrenheit")
        {
            std::cout << "Input temp in Celsius: " << '\n';
            std::cin >> temp;
            temp = (temp * 9.0 / 5.0) + 32.0;
            std::cout << temp << "F" << '\n';
        }
        else if (convert_to::scale == "K" || convert_to::scale == "Kelvin")
        {
            std::cout << "Input temp in Celsius: " << '\n';
            std::cin >> temp;
            temp = temp + 273.15;
            std::cout << temp << "K" << '\n';
        }
    }
    else if (convert_from::scale == "K" || convert_from::scale == "Kelvin")
    {
        if (convert_to::scale == "C" || convert_to::scale == "Celsius")
        {
            std::cout << "Input temp in Kelvin: " << '\n';
            std::cin >> temp;
            temp = temp - 273.15;
            std::cout << temp << "C" << '\n';
        }
        else if (convert_to::scale == "F" || convert_to::scale == "Fahrenheit")
        {
            std::cout << "Input temp in Kelvin: " << '\n';
            std::cin >> temp;
            temp = (temp - 273.15) * 9.0 / 5.0 + 32.0;
            std::cout << temp << "F" << '\n';
        }
    }
    else
    {
        std::cout << "Invalid scale input" << '\n';
    }

    return 0;
}
