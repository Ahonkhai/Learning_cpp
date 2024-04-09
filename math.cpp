#include <iostream>
#include <vector>
#include <cmath> /* REMEMBER TO PUT THIS IF YOU"RE GONNA DO MATH EQUATIONS*/

namespace first{
    double test_number = 20;
}

namespace second{
    double test_number = 10;
}

int main () {
    
    double w;
    double x = 2;
    double y = 10;
    double z;
    double z_pow;
    double z_sqrt;
    double z_abs;

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
    std::cout << z_abs << '\n';
    
    return 0;
}