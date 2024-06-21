#include <iostream>
#include <cstring>
#include <array>
#include <vector>

using namespace std;

namespace array_lol
{
    array<string, 12> month = {"January", "February", "March", "April", "May", "June",
                               "July", "August", "September", "October", "November", "December"};
}

namespace vector_lol{
    vector<string> month = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

}

int main()
{

    cout << "******** Array version ********" << '\n'; 
    for (size_t i = 0; i < array_lol::month.size(); i++)
    {
        cout << array_lol::month[i] << '\n';
    }

    cout << "******** Vector version ********" << '\n';

    for (size_t i = 0; i < vector_lol::month.size(); i++)
    {
        cout << vector_lol::month[i] << '\n';
    }

    return 0;
}