#include <iostream>
#include<cmath>

int main(){
    // for more examples: https://cplusplus.com/reference/cmath/
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << "Highest value: " << z << "\n";
    
    z = std::min(x, y);
    std::cout << "Lower value: " << z << "\n";

    z = pow(2, 4);
    std::cout << "Raised to " << "4: " << z << "\n";

    z = sqrt(9);
    std::cout << "Square Root " << 9 << ": " << z << "\n";

    z = round(3.5);
    std::cout << "Round " << 3.5 << ": " << z << "\n";

    z = ceil(3.99);
    std::cout << "Ceil " << 3.99 << ": " << z << "\n";

    z = floor(3.99);
    std::cout << "Floor " << 3.99 << ": " << z << "\n";

    return 0;
}