#include <iostream>

int main(){
    char unit;
    double temp;

    std::cout << "***** TEMPERATURE CONVERSION *****" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: " << std::endl;
    std::cin >> unit;


    switch (unit){
        case 'F':
            std::cout << "Enter te temperature in Celsius" << std::endl;
            std::cin >> temp;
            temp = (1.8 * temp) + 32.0;

            std::cout << "Temperature is: " << temp << "F";
            break;
        
        case 'C':
            std::cout << "Enter te temperature in Fahrenheit: " << std::endl;
            std::cin >> temp;
            temp = (temp - 32)/ 1.8;
            
            std::cout << "Temperature is: " << temp << "C";
            break;

        default:
            std::cout << "Please enter in only C or F." << std::endl;
            break;
    }
    return 0;
}