#include <iostream>

void walk(int steps);

int main(){
    walk(100);
    return 0;
}

void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!" << std::endl;
        walk(steps - 1);
    }
}