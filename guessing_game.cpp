#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    int number, guess; 
    int tries = 0;

    // Between 1-10 💀
    number = (rand() % 10) + 1;

    do
    {
        cout << "Enter a number between 1-10" << '\n';
        cin >> guess;
        tries++;

        if (guess > number)
        {
            cout << "Too high... Try again" << '\n';
        }
        else if (guess < number)
        {
            cout << "Too high... Try again" << '\n';
        }
        else
        {
            cout << "you're right the number is" << number << '\n'
                 << "you had " << tries << " tries" << '\n';
        }

    } while (guess != number);


// lol done 🦆
    return 0;
}