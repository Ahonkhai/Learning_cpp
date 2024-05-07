#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int sides;
    cout << "How many sides; ";
    cin >> sides;

    int rolls;
    cout << "How many rolls";
    cin >> rolls;

    for (int i = 0; i < rolls; i++)
    {
        int number = (rand() % 6) + 1;
        cout << number << '\n';
    }
    
    return 0;
}