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

    return 0;
}