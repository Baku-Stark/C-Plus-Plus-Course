#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};


int main(){
    student student1;
    student1.name = "Wallace";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;

    return 0;
}