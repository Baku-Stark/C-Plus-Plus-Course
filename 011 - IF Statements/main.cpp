#include <iostream>

int main(){
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "ADULT";
    }

    else if(age == 13 & age <= 17){
        std::cout << "TEEN";
    }

    else{
        std::cout << "CHILD";
    }

    return 0;
}