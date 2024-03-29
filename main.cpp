// i'm installing MSYS2 🦆🦆
#include <iostream>

int main() {
    // 🦆🦆🦆
    std::cout << "i like pizza! 🍕" << std::endl; // ok so "<< std::endl" and "<< '\n'"
    std::cout << "it's somewhat good, lol" << '\n';
    std::cout << "testing another line" << '\n';

    
    int x; // Declaration 💪
    x = 5; // Assignment 📑
    int  y = 10; // Declaration and assignment 🤯 
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << x + y << '\n';
    std::cout << "sum is" << " " << sum << std::endl;

    // Intergers (Whole numbers) 💪💪💪
    int age = 18;
    int year = 2005;
    int days = 20.5;

    std::cout << age << '\n';
    std::cout << days << '\n'; 
    /*intergers dont work with whole numbers, 😒 its just gonna output whats behind the decimal */

    /* Just solved my first issue on c++ lol 🦆🦆🦆🦆
    turns out you can't start a new line without ending the last one lol */

    // Double (Decimal numbers) 🍎🍎🍎🍎
    double decimal_test = 20.5;

    std::cout << decimal_test << '\n';

    // Char (single characters) 🦆🦆🦆


    /*DOESN'T WORK 💀💀💀💀*/
    // char first_name = 'David';
    // char surname = 'Ahonkhai';

    char initials = '$';

    std::cout << initials << '\n';


    // quick test 💀💀💀💀
    // ok fix time lol

    std::string first_name = "David";
    std::string surname = "Ahonkhai";

    std::cout << "Hello, my name is" << " " << first_name << " " << surname << " " << "i am " << age << "years old" << '\n';
    // ok char is actually single characters like "n" and stuff like that 💀💀💀 lol


    // BOOLEAN (TRUE/FALSE) 👍/👎

    bool student = false;
    bool power = false;
    bool for_sale = true;
    

    // Strings 🧵🧵🧵 lol (Take a look at line 53 and 54)

    std::string  last_name = "Mumbleson";

    std::cout << last_name << std::endl;



    return 0;
}