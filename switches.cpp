#include <iostream>

int main() {
    // Month number (SWITCHES, CASES, BREAKS) its meant to replace else if more efficiently 

    int month;
    std::cout << "Enter the month number" << '\n';
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "it is january" << '\n';
        break;
    case 2:
        std::cout << "it is Febuary" << '\n';
        break;
    case 3:
        std::cout << "it is March" << '\n';
        break;
    case 4:
        std::cout << "it is April" << '\n';
        break;
    case 5:
        std::cout << "it is May" << '\n';
        break;
    case 6:
        std::cout << "it is June" << '\n';
        break;
    case 7:
        std::cout << "it is july" << '\n';
        break;
    case 8:
        std::cout << "it is August" << '\n';
        break;
    case 9:
        std::cout << "it is September" << '\n';
        break;
    case 10:
        std::cout << "it is October" << '\n';
        break;
    case 11:
        std::cout << "it is November" << '\n';
        break;
    case 12:
        std::cout << "it is December" << '\n';
        break;
    default:
        std::cout << "Please only input numbers from 1-12" <<'\n';
    }




    // Grade chacker lol 

    char grade;
    std::cout << "Please input grade" << '\n';
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Congratulations you got an A" << '\n';
        break; 
    case 'B':
        std::cout << "Good job, you got a B!" << '\n';
        break;
    case 'C':
        std::cout << "You earned a C." << '\n';
        break;
    case 'D':
        std::cout << "You passed with a D." << '\n';
        break;
    case 'F':
        std::cout << "Unfortunately, you got an F." << '\n';
        break;
    default:
        std::cout << "please only input your grade from A-F" << '\n';
        break;
    }

    return 0; 
}