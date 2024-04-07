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

    
    
    
    
    
    return 0;
}