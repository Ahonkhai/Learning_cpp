#include <iostream>
#include <cstring>

int main()
{

    std::cout << "Hello world" << '\n';

    std::string name;

    while (name.empty()) // while loop is like an if statements but it check for a conditions infinitely
    {
        std::cout << "Input name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';

    // Positive and negative number checker use while loops

    double number;
    // do the line of code then repeat if condition is true🦆
    do 
    {
        std::cout << "Input positive number: " << '\n';
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is " << number << '\n';
    

    return 0;
}