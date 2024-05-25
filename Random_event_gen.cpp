#include <iostream>
#include <ctime>


using namespace std;

int main() {

    srand(time(0));


    int random_number = rand() % 5 + 1;
    cout << random_number < " ";
    // Nice 🦆

    switch (random_number)
    {
    case 1:
        cout << "You win first place" << '\n';
        break;
    case 2:
        cout << "You win second place" << '\n';
        break;
    case 3:
        cout << "You win third place" << '\n';
        break;
    case 4:
        cout << "You win fourth place" << '\n';
        break;
    case 5:
        cout << "You win fifth place" << '\n';
        break;
    }

    





    return 0;
}