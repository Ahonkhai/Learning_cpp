// Random number generator from a die

#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    int sides;
    cout << "How many sides on this die: ";
    cin >> sides;

    int rolls;
    cout << "How many rolls: ";
    cin >> rolls;

    // Now lets try using loops to add number of rolls

    for (int i = 0; i < rolls; i++)
    {
        int number = (rand() % sides) + 1;
        cout << number << '\n';
    }

    // Lol it's working? 💀🙏
    return 0;
}