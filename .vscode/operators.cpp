#include <iostream>

int main() {

    /* OPERATORS
    
    && = check if two conditions are true
    !! = check if at least one or two conditionsare true
    ! = reverse the logical state of it's operand 

     */

    double temp;
    std::cout << "What's the temprature" << '\n';
    std::cin >> temp;


    if (temp > 0 && temp < 30)
    {
        std::cout << "The temp is good lol" << '\n';
    }   else{
        std::cout << "The temp is bad" << '\n';
    }

    // Trying with ternary op
    std::cout << (temp > 0 && temp < 30 ? "good weather" : "bad weather") << '\n';
    // worked 🦆✌️


    



    return 0;

}