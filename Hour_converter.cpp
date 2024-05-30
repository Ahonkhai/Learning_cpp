#include <iostream>
#include <string>

using namespace std;

void power_converter()
{
    double voltage, current, power;

    cout << "Power converter running..." << '\n';
    cout << "What are you converting to?\n"
         << "1. Power (Watts)\n"
         << "2. Voltage (Volts)\n"
         << "3. Current (Amperes)\n";
    string reply;
    getline(cin, reply);

    if (reply == "1" || reply == "Power" || reply == "watts")
    {
        cout << "Converting to power...\n";
        cout << "Input voltage: ";
        cin >> voltage;
        cout << "Input current: ";
        cin >> current;
        power = voltage * current;
        cout << "The power is: " << power << " Watts" << endl;
    }
    else if (reply == "2" || reply == "Voltage" || reply == "volts")
    {
        cout << "Converting to voltage...\n";
        cout << "Input power: ";
        cin >> power;
        cout << "Input current: ";
        cin >> current;
        voltage = power / current;
        cout << "The voltage is: " << voltage << " Volts" << endl;
    }
    else if (reply == "3" || reply == "Current" || reply == "amperes")
    {
        cout << "Converting to current...\n";
        cout << "Input power: ";
        cin >> power;
        cout << "Input voltage: ";
        cin >> voltage;
        current = power / voltage;
        cout << "The current is: " << current << " Amperes" << endl;
    }
    else
    {
        cout << "Invalid option selected!" << endl;
    }
}

void hour_converter()
{
    double hour, second;

    cout << "Hour converter running..." << '\n';
    cout << "What are you converting to?\n"
         << "1. Hour\n"
         << "2. Second\n";
    string reply;
    getline(cin, reply);

    if (reply == "1" || reply == "Hour")
    {
        cout << "Converting hour to second...\n";
        cout << "Input hour: ";
        cin >> hour;
        second = hour * 3600;
        cout << hour << " hours converted to seconds is: " << second << " seconds" << endl;
    }
    else if (reply == "2" || reply == "Second")
    {
        cout << "Converting second to hour...\n";
        cout << "Input seconds: ";
        cin >> second;
        hour = second / 3600;
        cout << second << " seconds converted to hours is: " << hour << " hours" << endl;
    }
    else
    {
        cout << "Invalid option selected!" << endl;
    }
}

void triangle_edge()
{
    cout << "This function is not implemented yet." << '\n';
}

void remainder()
{
    cout << "This function is not implemented yet." << '\n';
}

void perimeter_of_rectangle()
{
    double length, width, perimeter;
    cout << "Input length: ";
    cin >> length;
    cout << "Input width: ";
    cin >> width;
    perimeter = 2 * (length + width);
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
}

int main()
{
    cout << "Welcome to Liam's assignment" << '\n';
    cout << "Input your name: ";
    string name;
    getline(cin, name);

    cout << "Hello " << name << ", what assignment would you like to run?\n"
         << "1. Power converter\n"
         << "2. Hour converter\n"
         << "3. Triangle edge\n"
         << "4. Remainder of two numbers\n"
         << "5. Perimeter of rectangle\n";
    string reply;
    getline(cin, reply);

    if (reply == "1" || reply == "Power converter")
    {
        power_converter();
    }
    else if (reply == "2" || reply == "Hour converter")
    {
        hour_converter();
    }
    else if (reply == "3" || reply == "Triangle edge")
    {
        triangle_edge();
    }
    else if (reply == "4" || reply == "Remainder of two numbers")
    {
        remainder();
    }
    else if (reply == "5" || reply == "Perimeter of rectangle")
    {
        perimeter_of_rectangle();
    }
    else
    {
        cout << "Invalid option selected!" << endl;
    }

    return 0;
}
