// ARRAYS 🦆🦆🦆🦆🦆🦆🦆🦆

#include <iostream>
#include <array>
#include <vector>
#include <array>

using namespace std;

namespace array_n
{
    array<string, 5> name = {"David", "Jonathan", "Mercy", "john", "iyobosa"};
}
namespace vector_n
{
    vector<string> name = {"daniel", "Jonah", "Maggi", "conor", "iy"};
}

int main()
{
    // Trying both array methods
    // ARRAY
    cout << array_n::name[4] << '\n';
    // VECTORS
    cout << vector_n::name[2] << '\n';

    // LOL WORKED 😭🙏

    /* ok i wanna try month sin a year 💀*/

    array<string, 12> month = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

    for (const auto& month : month)
    {
        cout << month << '\n';
    }

    // Another test
        int choice;
    do
    {
        cout << "Pick a month\n"
             << "From 1-12" << '\n';
        cin >> choice;
    } while (choice < 1 || choice > 12);

    switch (choice)
    {
    case 1:
        cout << month[0] << " 1st month" << '\n';
        break;
    case 2:
        cout << month[1] << " 2nd month" << '\n';
        break;
    case 3:
        cout << month[2] << " 3rd month" << '\n';
        break;
    case 4:
        cout << month[3] << " 4th month" << '\n';
        break;
    case 5:
        cout << month[4] << " 5th month" << '\n';
        break;
    case 6:
        cout << month[5] << " 6th month" << '\n';
        break;
    case 7:
        cout << month[6] << " 7th month" << '\n';
        break;
    case 8:
        cout << month[7] << " 8th month" << '\n';
        break;
    case 9:
        cout << month[8] << " 9th month" << '\n';
        break;
    case 10:
        cout << month[9] << " 10th month" << '\n';
        break;
    case 11:
        cout << month[10] << " 11th month" << '\n';
        break;
    case 12:
        cout << month[11] << " !2th month" << '\n';
        break;
    }

    return 0;
}