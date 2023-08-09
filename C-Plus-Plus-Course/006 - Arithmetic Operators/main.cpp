#include<iostream>

int main(){
    int students = 20;

    // [SUM]
    students += 1; // or students ++;
    
    std::cout << students;
    // ============================================
    // [SUBTRACT]
    students -= 1; // or students --;

    std::cout << students;
    // ============================================
    // [MULTIPLY]
    students *= 2;

    std::cout << students;
    // ============================================
    // [DIVISION]
    students = students / 2; // or students /= 2;

    std::cout << students;

    return 0;
}