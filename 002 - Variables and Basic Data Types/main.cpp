#include <iostream>

int main(){
    
    int x; // declarar e tipar variável [número inteiro]
    x = 10;

    int y;
    y = 10;

    int z;
    z = x + y;

    // INTEGER (WHOLE NUMBER)
    int age = 21;
    int year = 2023;
    int days = 7;

    // DOUBLE (NUMBER INCLUDING DECIMAL)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // SINGLE CHARACTER
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    // BOOLEAN (TRUE OR FALSE)
    bool student = true;
    bool power = false;
    bool forSale = true;

    std::string name = "Wallace";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You're " << age << " years old";

    return 0;
}