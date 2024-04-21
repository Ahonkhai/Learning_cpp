#include <iostream>
#include <vector>
#include <cmath> /* REMEMBER TO PUT THIS IF YOU"RE GONNA DO MATH EQUATIONS*/

namespace first
{
    double test_number = 20;
}

namespace second
{
    double test_number = 10;
}

// The next three namespaces is for the max/min task
namespace number_one
{
    double number;
}

namespace number_two
{
    double number;
}

namespace number_three
{
    double number;
}

int main()
{

    double w;
    double x = 2;
    double y = 10;
    double z;
    double z_pow;
    double z_sqrt;
    double z_abs;
    double z_round;
    double z_ceil;
    double z_floor;

    z = std::max(x, y); /* This functions shows the max number between variables 😈🙏*/
    w = std::min(x, y); /* This function shows the min number between variables 😈🙏*/

    std::cout << "The maximum value is: " << z << '\n';
    std::cout << "The minimum value is: " << w << '\n';

    z_pow = pow(2, 4); /* This function is meant for power*/
    std::cout << "The power is: " << z_pow << '\n';

    z_sqrt = sqrt(9); /* This function is meant for square root's */
    std::cout << "Square root is:  " << z_sqrt << '\n';

    // quick namespace test 🦆🦆🦆
    std::cout << first::test_number << '\n';
    std::cout << second::test_number << '\n';

    //  another test 😈🙏
    double age = 18;
    std::cout << age << '\n';

    age = 15;
    std::cout << age << '\n';

    /* Assignment is a fundamental concept in programming, particularly in languages like C++ and many others. It refers to the act of storing a value in a variable.
    In C++ (and in many other programming languages), the assignment operator = is used to assign a value to a variable. for example : ln 41 - 45 💪🦆
    Assignment allows you to store data in variables so that you can manipulate and work with that data in your program. */

    z_abs = abs(-10);
    /* function is used to return the absolute value of a number. The absolute value of a number is its value without regard to its sign.
    In other words, it returns the distance of the number from zero on the number line. */
    std::cout << z_abs << '\n';

    z_round = round(3.14);
    std::cout << z_round << '\n';

    // Its rounder the number to the nearest integer
    // Quick Round test 🦆🦆🦆

    double negative_round = round(0.4);
    double positive_round = round(0.6);

    std::cout << "THe negative would be: " << negative_round << '\n';
    std::cout << "THe Positive would be: " << positive_round << '\n';

    z_ceil = ceil(10.5);
    std::cout << z_ceil << '\n';
    // The ceil function in C++ is used to round a number up to the nearest integer, always rounding away from zero. It's part of the

    z_floor = floor(3.99);
    std::cout << z_floor << '\n';
    // The floor function in C++ is the counterpart to ceil. It rounds a number down to the nearest integer, always rounding towards zero. (ceil's counterpart)

    /* Task: Find the Minimum and Maximum of Three Numbers

    User Input: Write code to prompt the user to enter three separate numbers. You can use a loop or separate prompts for each number.

    Finding Minimum and Maximum:

    There are two approaches:
    Nested std::max and std::min functions: You can utilize these functions to find the maximum between the first two numbers and then compare that result with the third number. Similarly, find the minimum between the first two and then compare it with the third number.
    Chained Comparisons: Implement logic to compare each number with a current minimum and maximum value. If a number is greater than the current maximum, update the maximum. If a number is smaller than the current minimum, update the minimum.
    Output: Display the calculated minimum and maximum values using std::cout.

    Bonus:

    Try incorporating namespaces to organize your code. You could create a separate namespace for user input functionalities. */

    // FIRST NUMBER 1️⃣1️⃣1️⃣
    // The console asks for the users input(number)
    std::cout << "Enter first number: " << '\n';
    // User input 🦆
    std::cin >> number_one::number;
    // console outputs users input 💀💀💀
    std::cout << "First number is: " << number_one::number << '\n';

    //  SECOND NUMBER 2️⃣2️⃣2️⃣
    std::cout << "Enter second number: " << '\n';
    std::cin >> number_two::number;
    std::cout << "second number is: " << number_two::number << '\n';

    // 😈😈😈 lol it's working

    // THiRD NUMBER
    std::cout << "Enter third number: " << '\n';
    std::cin >> number_three::number;
    std::cout << "Third number is: " << number_three::number << '\n';

    // std::cout << "first number is: " << first_number << std::endl;
    // 😈😈🙏 lol ok

    // NESTED CALL
    double max_number = std::max(number_one::number, std::max(number_two::number, number_three::number));
    std::cout << "The max number would be: " << max_number << '\n';

    double min_number = std::min(number_one::number, std::min(number_two::number, number_three::number));
    std::cout << "The min number would be: " << min_number << '\n';

    // EZ PZ 💪🦆✌️

    /* Task: Calculate the Average of Three User-Entered Numbers
    Objective: Enhance your code to not only find the minimum and maximum values but also calculate the average of three user-entered numbers.

    Steps:
    Maintain Existing Functionality: Ensure your code continues to work as intended, prompting the user for three numbers, storing them in separate namespaces, and finding the minimum and maximum values using std::max and std::min.

    Calculate the Average:
    After finding the minimum and maximum, implement the average calculation using the formula:
    average = (number_one::number + number_two::number + number_three::number) / 3.0
    This formula sums all three numbers represented by their respective namespace-prefixed variables. Dividing by 3.0 ensures a floating-point result for the average.

    Display the Average:
    Add another std::cout statement to print the calculated average with a descriptive message:

    Success Criteria:
    Your code should successfully take three separate user inputs for numbers.
    It should determine and display the minimum and maximum values using the existing logic.
    Additionally, it should calculate and display the average of the three numbers using the formula mentioned above.

    Bonus Challenge:
    Try modifying your code to find the median (the middle value) of the three numbers, along with the minimum, maximum, and average. You can use sorting or conditional statements to achieve this. */

    double average = (number_one::number + number_two::number + number_three::number) / 3.0;
    std::cout << "The average is: " << average << std::endl;

    //  done i guess tho thats just like 2 lines of code 😭😭😭

    /* Objective: Write a C++ program that calculates the hypotenuse of a right-angled triangle.


    Requirements:

    Input:
    The program should prompt the user to enter the lengths of the two non-hypotenuse sides (base and height) of a right-angled triangle.
    Assume the user will enter valid positive numbers.
    Calculation:

    Use the Pythagorean theorem to calculate the hypotenuse: hypotenuse = sqrt(side1^2 + side2^2), where side1 and side2 are the lengths of the two non-hypotenuse sides.
    Output:

    The program should display the calculated hypotenuse of the triangle with an appropriate message.

    Bonus:
    Enhance the program to handle potential errors like negative input for side lengths. You can display an error message and exit the program gracefully. */

    std::cout << "lets calculate the hypotenuse of a triangle" << '\n';

    double a, b, hypotenuse;

    // BASE
    std::cout << "Provide the base: " << '\n';
    std::cin >> a;

    // HEIGHT
    std::cout << "Provide the height: " << '\n';
    std::cin >> b;

    hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse is: " << hypotenuse << std::endl;

    return 0;
}
