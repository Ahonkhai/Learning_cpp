#include <iostream>
#include <cmath>



int main() {

    double first_number;
    double second_number;
    char math_operator;
    double result;


    std::cout << "Input first number" << '\n';
    std::cin >> first_number;

    std::cout << "Input operator" << '\n';
    std::cin >> math_operator;

    std::cout << "Input seecond number" << '\n';
    std::cin >> second_number;


    switch (math_operator)
    {
    case '+':
        result = first_number + second_number;
        std::cout << "The result is: " << result << '\n';
        break;
    case '-':
        result = first_number - second_number;
        std::cout << "The result is: " << result << '\n';
        break;
    case '*':
        result = first_number * second_number;
        std::cout << "The result is: " << result << '\n';
        break;
    case '/':
        if (second_number != 0 )
        {
            result = first_number / second_number;
            std::cout << "The result is: " << result << '\n';
        }   else{
                std::cout << "Invalid Equation: not divisible by zero" << '\n';
        }  
        break;
    
    default:
        std::cout << "Invalid operator" << '\n';
        break;
        
    }

// SADLY TOOK LIKE @ MINUTES 🦆🦆🦆🦆 

    return 0;
}