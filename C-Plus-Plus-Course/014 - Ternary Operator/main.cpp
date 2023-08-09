#include <iostream>

int main(){
    // ternary operator : replacement to an if/else statement

    int grade = 70;

    // condition ? expression : expression 2;
    grade >= 60 ? std::cout << "You Pass!" << std::endl : std::cout << "You fail!!!" << std::endl;

    return 0;
}