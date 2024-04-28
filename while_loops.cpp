#include <iostream>
#include <cstring>

int main() {


    std::cout << "Hello world" << '\n';

    std::string name;


    while (name.empty()) // while loop is like an if statements but it check for a conditions infinitely
    {   
        std::cout << "Input name: ";
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello " << name << '\n';

    

    return 0;
}