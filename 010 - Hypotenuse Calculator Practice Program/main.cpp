#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double hip;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    hip = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Hypotenuse: " << hip;

    return 0;
}