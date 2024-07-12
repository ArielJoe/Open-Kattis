#include <iostream>
#include <iomanip>

int main() {
    double height, base;
    std::cin >> height >> base;

    double area = 0.5 * base * height;

    std::cout << std::fixed << std::setprecision(7) << area << std::endl;

    return 0;
}
