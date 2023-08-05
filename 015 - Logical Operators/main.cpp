#include <iostream>

int main(){
    // && - check if two condition are true
    // !! - check if at least one of two condition is true
    // ! - reverse the logical state of it's operand

    int temp;
    std::cout << "Enter the temperature: " << std::endl;
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is cold!" << std::endl;
    }

    else if(temp > 0 || temp >= 30){
        std::cout << "The temperature is hot!" << std::endl;
    }

    else{
        std::cout << "The temperature is good!" << std::endl;
    }
    return 0;
}