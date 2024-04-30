#include <iostream>

int main()
{

    for (int j = 0; j <= 3; j++)
    {
        for (int i = 0; i <= 10; i++)
        {
            std::cout << i << " ";
        }
        std::cout << '\n';
    }

    // symbol row and colum gen

    int row;
    int colum;
    char symbol;

    std::cout << "How many rows: ";
    std::cin >> row;

    std::cout << "How many colum's: ";
    std::cin >> colum;

    std::cout << "input symbol: ";
    std::cin >> symbol;

    for (int i = 0; i <= row; i++)
    {
        for (int a = 0; a <= colum; a++)
        {
            std::cout << symbol;
        }
            std::cout << '\n';
        
    }
    

    return 0;
}