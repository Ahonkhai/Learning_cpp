// i'm installing MSYS2 🦆🦆
#include <iostream>
#include <vector>

namespace first{
    int name_space = 10;
}

namespace second{
    int name_space = 15;
}

// typedef std::string text_t;
// typedef int number_n;
// 🍎🍎🍎🍎🍎🍎🍎🍎🍎🍎🍎🍎🍎

// ok so i can replace the "typedef" with using 💀💀💀

using text_t = std::string;
using number_n = int;
// lol wrong format 
// Fixed 🗿🗿🗿🗿🗿🗿

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

    bool student_test = false;
    bool power = false;
    bool for_sale = true;
    

    // Strings 🧵🧵🧵 lol (Take a look at line 53 and 54)

    std::string  last_name = "Mumbleson";

    std::cout << last_name << std::endl;


    // CONST 💪
    /* The const keyword specifies that a variable's value is constant and tells the compiler to prevent anything from modifying it */
    // (READ ONLY) 🔒

    // calculating the circumference of a circle ⭕⭕⭕

    const double PI = 3.14159;
    //  "PI = 24.5;"  I cannot change the value of a const variable's value, it shows an error 💀💀💀💀
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << '\n';

    // NAMESPACE 😕😕

    int name_space = 2;

    std::cout << name_space << std::endl;
    /*Reference namespace 🦆🦆🦆*/
    std::cout << first::name_space << '\n';

    /*Reference namespace 2nd way 💀💀💀*/
    using namespace second;

    std::cout << ::second::name_space << std::endl; 


    // TYPEDEF 🤔🤔🤔
    /* Reserved keyword used to create an additional name 
    (alias or nickname (kinda)) for another data type
    it's a new identifier for existing type, helps with 
    readability and reduces typos 💀*/
    /* only ise when theres a clear benefit ❗❗❗*/

    // quick test 

    text_t mood = "fine";

    std::cout << mood << std::endl;
    // success 🦆🦆🦆


    /* ok so apparently its better to use "using" rather then "typedef"
    ok i'm about to update the code lol (useless comment)*/
    
    number_n num = 5;

    std::cout << num << std::endl;

    // ARITHMETIC OPERATORS ➕➖➗✖️
    /*Return the result of a specific arithmetic operation 🦆🦆🦆 */

    int student = 20;

    student += 1;

    std::cout << student << std::endl;

    // SUCCESS ✅✅✅





    return 0;
}