#include <iostream>
#include <ctime>

using namespace std;

char get_user_choice();
char get_computer_choice();
void show_choice(char choice);
void Choose_winner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = get_user_choice();
    computer = get_computer_choice();

    show_choice(player);
    show_choice(computer);

    Choose_winner(player, computer);

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}

char get_user_choice()
{
    char player;

    do
    {
        cout << "Rock, Paper, Scissors" << '\n';
        cout << "******************" << '\n';
        cout << "Choose your option" << '\n';
        cout << "******************" << '\n';
        cout << "'R' for Rock \n'P' for Paper \n'S' for Scissors \n";
        cin >> player;
    } while (player != 'R' && player != 'P' && player != 'S');

    return player;
}

char get_computer_choice()
{
    srand(time(0));
    int number = rand() % 3 + 1;

    char computer;
    switch (number)
    {
    case 1:
        computer = 'R';
        break;
    case 2:
        computer = 'P';
        break;
    case 3:
        computer = 'S';
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
        cout << "You win! Rock crushes Scissors." << endl;
    }
    else if (player == 'S' && computer == 'R')
    {
        cout << "You lose! Rock crushes Scissors." << endl;
    }
    else if (player == 'P' && computer == 'R')
    {
        cout << "You win! Paper covers Rock." << endl;
    }
    else if (player == 'R' && computer == 'P')
    {
        cout << "You lose! Paper covers Rock." << endl;
    }
    else if (player == 'S' && computer == 'P')
    {
        cout << "You win! Scissors cut Paper." << endl;
    }
    else if (player == 'P' && computer == 'S')
    {
        cout << "You lose! Scissors cut Paper." << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
}
