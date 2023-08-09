#include <iostream>

int main(){
    for(int i = 1; i <= 10; i++){
        std::cout << i << std::endl;

        if(i == 5){
            std::cout << "BREAK" << std::endl;
            break;
        }
    }
    std::cout << "HAPPY NEW YEAR!" << std::endl;
    return 0;
}