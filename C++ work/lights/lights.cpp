#include <iostream>

int main() {
    bool red_light = true;
    bool green_light = false;

    if(red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "GO!" << std::endl;
    }

    if (green_light) {
        std::cout << "GO!" << std::endl;
    }
    else {
        std::cout << "The light is not green!" << std::endl;
    }

    return 0;
}