#include <iostream>

double DegreestoCelsius(double n) {
    double fdegrees = (n * (9.0/5)) + 32;
    return fdegrees;
}

double CelsiustoDegrees(double n) {
    double cdegrees = (n -32) * (5/9.0);
    return cdegrees;
}

int main() {
    std::cout << "Enter a temperature in Celsius!" << std::endl;
    double n;
    std::cin >> n;

    double fdegrees = DegreestoCelsius(n);
    std::cout << "Temperature in farenheit is: " << fdegrees << std::endl;

    std::cout << "Enter a temperature in degrees F" << std::endl;
    double c; 
    std::cin >> c;
    double cdegrees = CelsiustoDegrees(c);
    std::cout << "Temperature in celsius is: " << cdegrees << std::endl;
    return 0;
}