#include <iostream>
#include <cmath>

using namespace std;

namespace square_length {
    double length;
}

namespace volume_length {
    double length;
}

double square(double length); // Prototype function 🦆
double cube(double length);

int main() {
    square_length::length = 6.0; 
    double area = square(square_length::length); // sending function 🦆🦆

    cout << "The area is: " << area << " cm" << '\n';


    volume_length::length = 5.0;
    double vol = cube(volume_length::length);

    cout << "The volume is: " << vol << "cm" << '\n';

    return 0;
}

double square(double length) { // receiving function 🦆🦆
    return pow(length, 2);
}

double cube(double length) {
    return pow(length, 3);
}