#include <iostream>

int main() {
    // Ternary operaor ?: = Replacement to the if/else statement 
    // condition ? expression_if_true : expression_if_false



    //  Ternary ?? lol
    int score = 60;

    score >= 50 ? std::cout << "You pass" << '\n' : std::cout << "You fail" << '\n';



    // Quick test with if statements 
    score = 50;

    if (score >= 60)
    {
        std::cout << "You pass ✌️" << '\n';
    }   else {
        std::cout << "You failed lol 😭🙏" << '\n';
    }
    


    return 0;
}