#include <iostream>

double AreaofBox (double side) {
    //area = l*w
     return side * side;

}

double VolumeofBox(double side) {
    //volume = l*w*h
    return side*side*side;
}

int main() {
    std::cout << "Enter a value of a side for your square: " << std::endl;
    double side;
    std::cin >> side;

    double area = AreaofBox(side);
    double volume = VolumeofBox(side);

    std::cout << "Area of box: " << area << std::endl;
    std::cout << "Volume of box: " << volume << std::endl;

    return 0;
}