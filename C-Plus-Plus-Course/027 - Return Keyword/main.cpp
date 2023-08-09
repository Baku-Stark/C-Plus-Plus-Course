#include <iostream>

double square(double length);
double cube(double length);

int main(){
    double length = 5.0;

    double area = square(length);
    std::cout << "Area: " << area << "cm^2" << std::endl;

    double area_3 = cube(length);
    std::cout << "Area: " << area_3 << "cm^3" << std::endl;
    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}