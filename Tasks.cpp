#include <iostream>
#include <cmath>



int main() {

// Based on the code you've provided, how about a task to create a simple program that calculates the area of a rectangle? You can utilize what you've learned about user input, variables, and basic arithmetic operations to accomplish this task.

// Here's a breakdown of the steps you can follow:

// Prompt the user to input the length and width of the rectangle.
// Receive the length and width inputs from the user.
// Calculate the area of the rectangle using the formula: area = length * width.
// Display the calculated area to the user with an appropriate message.
// You can implement error handling to ensure that the user inputs valid positive numbers for the length and width.


double width;
double length;
double area_of_rectangle;


std::cout << "Input width: ";
std::cin >> width;
std::cout << "The width is: " << width << '\n';


std::cout << "Input length: ";
std::cin >> length;
std::cout << "The length is: " << length << '\n';


area_of_rectangle = length * width;

std::cout << "The area of a rectangle is: " << area_of_rectangle << '\n';


    return 0;
}