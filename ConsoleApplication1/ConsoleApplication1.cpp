#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name plz" << std::endl;
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Your name is: " << name << std::endl;

    std::cout << "Enter how many time you want your name repeated: " << std::endl;
    int input;
    std::cin >> input;

    for (size_t i = 0; i < input; i++)
    {
        std::cout << name << std::endl;
    }
    return 0;
}
