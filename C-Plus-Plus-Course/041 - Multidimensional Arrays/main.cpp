#include <iostream>

int main(){
    std::string cars[][3] = {
        {"Mustang", "Escape", "F-150"},
        {"Corvette", "Equinox", "Silverado"},
        {"Challenger", "Durango", "Ram 1500"}
    };

    std::cout << cars[0][0] << std::endl;
    std::cout << cars[0][1] << std::endl;
    std::cout << cars[0][2] << std::endl;
    std::cout << "---" << std::endl;
    std::cout << cars[1][0] << std::endl;
    std::cout << cars[1][1] << std::endl;
    std::cout << cars[1][2] << std::endl;
    std::cout << "---" << std::endl;
    std::cout << cars[2][0] << std::endl;
    std::cout << cars[2][1] << std::endl;
    std::cout << cars[2][2] << std::endl;

    return 0;
}