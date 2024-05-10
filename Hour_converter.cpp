#include <iostream>
#include <cmath>

using namespace std;

int power_converter()
{
    double voltage, current, power;

    cout << "Power converter running..." << '\n';
    cout << "What are you converting to" << '\n'
         << "1. Power(Watts)" << '\n'
         << "2. voltage (volts)" << '\n'
         << "3. current(amperes)" << '\n';
    string reply;
    getline(cin, reply);

    if (reply == "Power" || reply == "watts")
    {
        cout << "converting to power" << '\n';
        cout << "input voltage: ";
        cin >> voltage;
        cout << "input current: ";
        cin >> current;
        power = voltage * current;
        cout << "The power is: " << power << endl;
    }
    else if (reply == "voltage" || reply == "volts")
    {
        cout << "converting to voltage" << '\n';
        cout << "input power: ";
        cin >> voltage;
        cout << "input current: ";
        cin >> current;
        voltage = power / current;
        cout << "The voltage is: " << voltage << endl;
    }
    else if (reply == "current" || reply == "amperes")
    {
        cout << "converting to current" << '\n';
        cout << "input power: ";
        cin >> voltage;
        cout << "input voltage: ";
        cin >> current;
        current = power / voltage;
        cout << "The current is: " << current << endl;
    }

    return 0;
}

int hour_converter()
{
    double hour;
    double second;

    string name;

    cout << "Hour converter running..." << '\n';
    cout << "What are you converting to" << '\n';
    cin >> name;

    if (name == "hour" || name == "hr")
    {
        cout << "----- Converting hour to second -----" << '\n';
        cout << "Input hour: ";
        cin >> hour;
        second = hour * 3600;
        cout << hour << " converted to seconds iss: " << second << endl;
    }
    else if (name == "second" || name == "sec")
    {
        cout << "----- Converting second to hour -----" << '\n';
        cout << "Input seconds: ";
        cin >> second;
        hour = second / 3600;
        cout << hour << " converted to seconds is: " << second << endl;
    }

    return 0;
}

int triangle_edge()
{
    cout << "i dont know the formula lol" << '\n';
    return 0;
}

int remainder()
{
    cout << "i also dont know the formula" << '\n';
    return 0;
}

int perimeter_of_triangle()
{
    double perimeter, length, width;
    cout << "input length: ";
    cin >> length;
    cout << "input width: ";
    cin >> width;
    perimeter = 2 * (length + width);
    cout << "The perimeter is: " << perimeter << endl;
    return 0;
}

int main()
{
    cout << "Welcome to liam's assignment" << '\n';
    cout << "input name" << '\n';
    string name;
    getline(cin, name);

    cout << "Hello " << name << " What assignment would you like to run?" << '\n';
    cout << "1. Power converter" << '\n'
         << "2. hour converter" << '\n'
         << "3. triangle edge" << '\n'
         << "4. Remainder of two number" << '\n'
         << "5. perimeter of Rectangle" << '\n';
    string reply;
    getline(cin, reply);

    if (reply == "Power converter" || reply == "1")
    {
        cout << "----- POWER CONVERTER -----" << '\n';
        power_converter();
    }
    else if (reply == "Hour converter" || reply == "2")
    {
        cout << "----- HOUR CONVERTER -----" << '\n';
        hour_converter();
    }
    else if (reply == "Triangle edge" || reply == "3")
    {
        cout << "----- Triangle edge -----" << '\n';
        triangle_edge();
    }
    else if (reply == "Remainder of two numbers" || reply == "4")
    {
        cout << "----- Remainder -----" << '\n';
        remainder();
    }
    else if (reply == "Perimeter of rectangle" || reply == "5")
    {
        cout << "----- Rectangle perimeter -----" << '\n';
         perimeter_of_triangle();
    }

    return 0;
}
