#include <iostream>
#include <cmath>
#include <vector>

int main() {
    
    double first_number;
    double second_number;
    char math_operator;
    

    std::cout << "input first number" << '\n';
    std::cin >> first_number;

    std::cout << "input operator" << '\n';
    std::cin >> math_operator;

    std::cout << "Input second number" << '\n';
    std::cin >> second_number;

    
    // ADD

    double result;
    switch (math_operator) {
        case '+':
            result = first_number + second_number;
            std::cout << result << '\n';
            break;
        case '-':
            result = first_number - second_number;
            std::cout << result << '\n';
            break;
        case '*':
            result = first_number * second_number;
            std::cout << result << '\n';
            break;
        case '/':
            if (second_number == 0)
            {
                std::cout << "cannot be divided by 0" << '\n';
            }   else{
                    result = first_number / second_number;
                    std::cout << "The result it: " << result << '\n';
                }   
            break;
        default:
            std::cout << "Invalid operator" << '\n';
            break;
    }


    return 0;
}