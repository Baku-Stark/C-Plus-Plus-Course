#include <iostream>

int main(){
    int number;

    do{
        std::cout << "Enter a positive number: " << std::endl;
        std::cin >> number;
    }while(number < 0);

    std::cout << "Your number: " << number << std::endl;
    return 0;
}