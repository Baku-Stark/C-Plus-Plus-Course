#include <iostream>

int main(){
    char expression;
    double num_1;
    double num_2;

    std::cout << "***** CALCULATOR *****" << "\n";
    std::cout << "Enter either (+, -, *, /)r: ";
    std::cin >> expression;
    std::cout << "\n";

    std::cout << "Enter #1: ";
    std::cin >> num_1;
    std::cout << "Enter #2: ";
    std::cin >> num_2;
    switch (expression){
        case '+':
            std::cout << num_1 << " + " << num_2 << " = " << num_1+num_2;
            break;

        case '-':
            std::cout << num_1 << " - " << num_2 << " = " << num_1-num_2;
            break;

        case '*':
            std::cout << num_1 << " * " << num_2 << " = " << num_1*num_2;
            break;

        case '/':
            std::cout << num_1 << " / " << num_2 << " = " << num_1/num_2;
            break;
        
        default:
            std::cout << "Bro, wtf????";
            break;
    }
    std::cout << "\n**********************";



    return 0;
}