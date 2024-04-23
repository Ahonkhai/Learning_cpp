#include <iostream>

int main()
{
    // Declares a string variable to store the user's name
    std::string my_name;

    // Prompts the user to enter their name
    std::cout << "Enter your name: ";

    // Reads the user's input into the 'my_name' variable
    std::getline(std::cin, my_name);

    // Checks if the name is longer than 12 characters
    if (my_name.length() > 12) // .length is used to measure
    {
        // Informs the user that their name can't exceed 12 characters
        std::cout << "Your name can't be over 12 characters 😅" << '\n';
    }
    // Checks if the input name is empty
    else if (my_name.empty()) // self explanatory rn i used it to check if the input was empty
    {
        // Informs the user that they haven't inputted a name
        std::cout << "You haven't inputted a name 😕" << '\n';
    }
    else
    {
        // Greets the user with their name if it's within the limit
        std::cout << "Welcome, " << my_name << "! 🎉" << '\n';
    }

    // Inserts "@" character at the beginning of the name
    my_name.insert(0, "@"); // used to insert the number represents the position of insertion i dunno lol
    std::cout << "Modified name: " << my_name << '\n';

    // Finds the index of the character 'v' in the name
    std::cout << "Index of 'v' in the name: " << my_name.find("v") << '\n'; // Finds and shows index

    // Appends "@gmail.com" to the name
    my_name.append("@gmail.com"); // adds basically
    std::cout << "Your username is: " << my_name << '\n';

    // Accesses and prints the character at index 3 in the name
    std::cout << "Character at index 3: " << my_name.at(3) << '\n'; // it kinda acts as a substitute i dunno how to explain it

    // Clears the content of the name
    my_name.clear(); // Clears basically

    // Prints a greeting with the cleared name
    std::cout << "HEY " << my_name;

    return 0;
}
