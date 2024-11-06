#include "binary.cpp"

int main()
{
    int num;
    std::cout << "Enter a binary number: " << std::endl;
    std::cin >> num;
    std::cout << binaryToDecimal(num) << std::endl;
}