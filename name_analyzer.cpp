#include <iostream>

int main()
{

    /* Name Analyzer

       This program will take a user's full name as input and perform various analyses:

       Nickname Extraction:

       Ask the user for their full name (first and last name).
       Extract the first initial of the user's first name and combine it with the first letter of their last name.
       Print the user's nickname as the first initial followed by the last name's first letter (e.g., John Smith -> J.S).
       Middle Name Check:

       Check if the user's name contains a middle name (more than two words separated by spaces).
       If a middle name exists, print a message indicating it. */

    std::cout << "Name analyzer" << '\n';

    std::string first_name;
    std::string last_name;

    std::cout << "input first name: ";
    // Ask's for first name
    std::getline(std::cin, first_name);

    std::cout << "input last name: ";
    // Ask's for last name
    std::getline(std::cin, last_name);

    std::cout << first_name.at(0) << "." << last_name.at(0) << '\n';


    std::cout << first_name << " " << last_name << '\n';

    return 0;
}