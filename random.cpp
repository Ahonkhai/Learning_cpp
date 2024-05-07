#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int sides;
    cout << "How many sides: " << '\n';
    cin >> sides;

    int rolls;
    cout << "How many rolls: " <<  '\n';
    cin >> rolls;

    for (int i = 0; i <= rolls; i++)
    {
        int number_d = (rand() % sides) + 1; 
        cout << number_d << '\n';
    }

    // int number;
    // number = (rand() % 5) + 1;
    // cout << number << '\n';


    // Now do a die throw and let it generate a random number
    
    return 0;
}