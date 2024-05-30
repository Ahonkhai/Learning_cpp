#include <iostream>
#include <cstring>

using namespace std;

// Defined namespace nameA with a variable name 🦆
namespace nameA {
    string name = "David";
}

// Defined namespace nameB with a variable name 🦆🦆
namespace nameB {
    string name = "mercy";
}

// Function prototype for happy_birthday 🦆🦆🦆
void happy_birthday(string name);

int main() {
    // Demonstrate accessing variables from different namespaces 🦆🦆🦆🦆
    cout << nameA::name << " and " << nameB::name << '\n'; // Output: john and mercy 🦆🦆🦆🦆🦆

    // Declare a variable name inside the main function 🦆🦆🦆🦆🦆🦆
    string name = "david";

    // Call the happy_birthday function with the local variable name 🦆🦆🦆🦆🦆🦆🦆
    happy_birthday(name); // sent string

    return 0;
}

// Definition of the happy_birthday function 🦆🦆🦆🦆🦆🦆🦆🦆 received the string
void happy_birthday(string name) {
    // Print a birthday message using the provided name 🦆🦆🦆🦆🦆🦆🦆🦆🦆 
    cout << "Happy birthday " << name << '\n';
} 
