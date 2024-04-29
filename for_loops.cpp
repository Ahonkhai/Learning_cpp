#include <iostream>

int main()
{
    // Write a program that prints the numbers from 1 to 100. But for multiples of three,
    // print "Fizz" instead of the number, and for the multiples of five, print "Buzz". For numbers that are multiples of both three and five, print "FizzBuzz".

    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz" << '\n';
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz" << '\n';
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz" << '\n';
        }
        else
        {
            std::cout << i << '\n';
        }
    }

    for (double i = 0; i <= 100; i++)
    {
        std::cout << i << '\n';
    }

    return 0;
}