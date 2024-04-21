#include <iostream>

int main()
{
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
    }
    else
    {
        std::cout << "You failed lol" << '\n'; // 😭🙏
    }

    // Boolean test with ternary op
    bool hungry = false;

    hungry ? std::cout << "You are hungry" << '\n' : std::cout << "You are full" << '\n';

    // ALso works like so
    hungry = true;
    std::cout << (hungry ? "You are hungry" : "You are full") << '\n';

    // Check if a number is even or odd with the ternary opp 💀💀💀

    int num = 6;

    num % 2 == 1 ? std::cout << "ODD" << '\n' : std::cout << "EVEN" << '\n';

    return 0;
}