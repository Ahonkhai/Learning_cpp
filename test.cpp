#include <iostream>
#include <cstring>
#include <array>

int main()
{

    std::array<std::string, 2> name = {"David", "Jonathan"};
    std::cout << name[1] << '\n';

    std::string my_name;
    std::cout << "what is your name?" << '\n';

    std::getline(std::cin, my_name);

    std::cout << "nice to meet you " << my_name << '\n';
    std::cout << "how old are you" << '\n';

    int my_age;
    std::cin >> my_age;
    std::cout << "i see you are " << my_age << std::endl;

    return 0;
}