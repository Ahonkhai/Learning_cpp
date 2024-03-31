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

    int student = 19;

    student+=1;
    // student++; can also be used if its a single increment  same goes for student--; (decrements)

    std::cout << student << std::endl;

    int remainder; 

    remainder = student % 2; 

    std::cout << remainder << '\n';

    // SUCCESS ✅✅✅


    // TYPE CONVERSION 💀💀💀 = converting a value of one data type to another 
    /*types : implicit = automatic
              explicit =  precode value with new data type (int)*/

    
    double a = 2.50;

    double b = (int) 1.50;

    std::cout << a << '\n';
    std::cout << b << std::endl;

    // basically just changes data types 🦆


    // CHALLENGES 

    // challenge 1 🦆🦆🦆🦆🦆🦆🦆🦆

    /*For the first challenge, which is calculating the area of a circle, here's a breakdown of what you'll need to do ⭕⭕⭕:
    Prompt User Input: Ask the user to input the radius of the circle.
    Define PI Constant: Use the const keyword to define the value of PI as 3.14159.
    Calculate Area: Use the formula for calculating the area of a circle, which is area = PI * radius * radius.
    Display Result: Print out the calculated area of the circle.*/

    std::cout << "let's calculate the area of a circle" << '\n';

    const double PI_area = 3.14159;

    double radius_area;

    std::cout << "provide the radius: " << '\n';
    std::cin >> radius_area;


    double area = PI_area * radius_area * radius_area;
    std::cout << PI_area << " " << "x" << " " << radius_area << " " << "*" << " " << radius_area << '\n';
    std::cout << area << std::endl;  

    //  CORRECT ✅✅✅

    // Quick name test 🤔🤔🤔

    std::string my_name;

    std::cout << "what is your name?" << '\n';
    std::cin >> my_name;
    std::cout <<"nice to meet you " << my_name << std::endl;

    // challenge 2 💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀

    /* Certainly! The intermediate challenge involves creating a simple login system. Here's a step-by-step explanation of how you can approach this challenge:
    Prompt User for Input: Display a message asking the user to enter their username.
    Receive Username Input: Use std::cin to receive the username input from the user.
    Prompt User for Password: Display a message asking the user to enter their password.
    Receive Password Input: Use std::cin to receive the password input from the user.
    Check Credentials: Compare the entered username and password with predefined values (for example, "David" for username and "OpenAI" for password).
    Print Result: If the entered username and password match the predefined values, print "Login successful". Otherwise, print "Login failed".*/


    // uhhhh quick note: i'm using only js knowledge on this and nothing else, i haven't learned c++ if statements and stuff 😋😋😋

    std::string correct_username = "Ahonkhai";
    std::string correct_password = "Ahonkhai14@";


    // input username 😋😋😋
    std::string username;

    std::cout << "input username: " << '\n';
    std::cin >> username;

    // input password 💀💀💀
    std::string password;

    std::cout << "input password: " << '\n';
    std::cin >> password;

    // if statements time lets go 🦆🦆🦆🦆🦆🦆🦆
    if (username == correct_username && password == correct_password) {
        std::cout << "login successful" << std::endl;
    } else {
        std::cout << "login Failed1" << std::endl;
    }

    // LoL i got it correct first try 🦆🦆🦆🦆😋

    //  Challenge 3 💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀💀

    /*Great! Let's move on to the next challenge. Since you're continuing with JavaScript-inspired approaches, let's explore a challenge related to handling user input and 
    performing calculations.

    Advanced Challenge: Simple Calculator
    Create a simple calculator program that performs basic arithmetic operations (+, -, *, /) on two numbers entered by the user. The program should prompt the user to enter 
    two numbers and an operator, perform the calculation, and then display the result.

    Here's how you can approach this challenge:

    Prompt the user to enter the first number.
    Receive the first number input from the user.
    Prompt the user to enter the second number.
    Receive the second number input from the user.
    Prompt the user to enter an operator (+, -, *, /).
    Receive the operator input from the user.
    Perform the calculation based on the operator and the two numbers.
    Display the result to the user.
    You can continue using std::cin for user input and implement if statements or switch statements to handle different arithmetic operations.*/

    std::cout << "Welcome to simple c++ calculator" << '\n';

    // First number 🦆
    std::cout << "Enter first number: " << '\n';

    double first_number;
    std::cin >> first_number;

    // Second number 🦆🦆
    std::cout << "Enter second number" << '\n';

    double second_number;
    std::cin >> second_number;

    // Arithmetic operator i think 💪😋
    std::cout << "Enter the operator (+, -, *, /)" << '\n';

    char op;
    std::cin >> op;

     // Perform the calculation based on the operator
    double result;
    switch(op) {
        case '+':
            result = first_number + second_number;
            break;
        case '-':
            result = first_number - second_number;
            break;
        case '*':
            result = first_number * second_number;
            break;
        case '/':
            if (second_number != 0) {
                result = first_number / second_number;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1; // Exit program with error code
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            return 1; // Exit program with error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    

    return 0;
}