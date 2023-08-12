#include <iostream>

int main(){
    std::string name = "Wallace";
    int age = 23;
    std::string freePizzas[5] = {
        "pizza1", "pizza2",
        "pizza3", "pizza4",
        "pizza5"
    };

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << pFreePizzas << std::endl;

    return 0;
}