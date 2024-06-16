#include <iostream>
#include <ctime>

using namespace std;

char get_user_choice();                         // Function to get the user's choice
char get_computer_choice();                     // Function to get the computer's choice
void show_choice(char choice);                  // Function to display the chosen option
void Choose_winner(char player, char computer); // Function to determine the winner

int main()
{
    char player;   // Variable to store the player's choice
    char computer; // Variable to store the computer's choice

    player = get_user_choice();       // Get the user's choice
    computer = get_computer_choice(); // Get the computer's choice

    show_choice(player);   // Show the user's choice
    show_choice(computer); // Show the computer's choice

    Choose_winner(player, computer); // Determine the winner

    cout << "Press Enter to exit...";
    cin.ignore(); // Ignore any leftover input
    cin.get(); // Wait for user to press Enter before closing
    return 0; // End the program
}

char get_user_choice()
{
    char player;

    do
    {
        cout << "Rock, Paper, Scissors" << '\n'; // Game title 🎮
        cout << "******************" << '\n';
        cout << "Choose your option" << '\n'; // Prompt user to choose an option
        cout << "******************" << '\n';
        cout << "'R' for Rock \n'P' for Paper \n'S' for Scissors \n";
        cin >> player; // Get the user's input
    } while (player != 'R' && player != 'P' && player != 'S'); // Validate input

    return player;
}

char get_computer_choice()
{
    srand(time(0));              // Seed the random number generator 🌱
    int number = rand() % 3 + 1; // Generate a random number between 1 and 3 🎲

    char computer;
    switch (number)
    {
    case 1:
        computer = 'R'; // Computer picks Rock
        break;
    case 2:
        computer = 'P'; // Computer picks Paper
        break;
    case 3:
        computer = 'S'; // Computer picks Scissors
        break;
    }

    return computer;
}

void show_choice(char choice)
{
    switch (choice)
    {
    case 'R':
        cout << "Picked Rock " << '\n';
        break;
    case 'P':
        cout << "Picked Paper " << '\n';
        break;
    case 'S':
        cout << "Picked Scissors " << '\n';
        break;
    default:
        cout << "Invalid choice " << endl;
        break;
    }
}

void Choose_winner(char player, char computer)
{
    if (player == 'R' && computer == 'S')
    {
        cout << "You win!  Rock crushes Scissors." << endl;
    }
    else if (player == 'S' && computer == 'R')
    {
        cout << "You lose!  Rock crushes Scissors." << endl;
    }
    else if (player == 'P' && computer == 'R')
    {
        cout << "You win!  Paper covers Rock." << endl;
    }
    else if (player == 'R' && computer == 'P')
    {
        cout << "You lose!  Paper covers Rock." << endl;
    }
    else if (player == 'S' && computer == 'P')
    {
        cout << "You win!  Scissors cut Paper." << endl;
    }
    else if (player == 'P' && computer == 'S')
    {
        cout << "You lose! Scissors cut Paper." << endl;
    }
    else
    {
        cout << "It's a tie!" << endl; // Handle the tie situation
    }
}
