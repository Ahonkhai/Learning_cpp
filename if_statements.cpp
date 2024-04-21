
// IF STATEMENTS YAYYYYYY ✌️✌️✌️✌️✌️✌️✌️✌️
/* if condition set is true then do it if not dont 🦆 (Thats basically it) */

#include <iostream>

int main()
{

    // make an app that asks for your age if you're above 18 you are allowed into the club if not the console logs out "Too young"

    std::cout << "How old are you" << '\n';
    int age;
    std::cin >> age;

    std::string welcome = "welcome to the club";

    if (age >= 30)
    {
        std::cout << "You're too old to have fun." << '\n';
    }
    else if (age <= 0)
    {
        std::cout << "That age seems unlikely. Are you trolling?" << '\n';
    }
    else if (age >= 18)
    {
        std::cout << "Welcome!" << '\n';
    }
    else
    {
        std::cout << "You're still young! Enjoy this time." << '\n';
    }

    return 0;
}