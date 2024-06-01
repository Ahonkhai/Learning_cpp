#include <iostream>
#include <cmath>
#include <string>

using namespace std;

namespace square_length
{
    double length;
}

namespace volume_length
{
    double length;
}

double square(double length); // Prototype function 🦆
double cube(double length);
string string_merge(string string1, string string2);

int main()
{
    square_length::length = 6.0;
    double area = square(square_length::length); // sending function 🦆🦆

    cout << "The area is: " << area << " cm" << '\n';

    volume_length::length = 5.0;
    double vol = cube(volume_length::length);

    cout << "The volume is: " << vol << "cm" << '\n';

    // Functions that gets full name by using strings
    string first_name;
    cout << "Provide first name: " << '\n';
    getline(cin, first_name);

    string last_name;
    cout << "Provide last name: " << '\n';
    getline(cin, last_name);

    string full_name = string_merge(first_name, last_name);
    cout << "Hello " << full_name << '\n';

    return 0;
}

string string_merge(string string1, string string2)
{
    return string1 + " " + string2;
}

double square(double length)
{ // receiving function 🦆🦆
    return pow(length, 2);
}

double cube(double length)
{
    return pow(length, 3);
}