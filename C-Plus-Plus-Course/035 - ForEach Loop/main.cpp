#include <iostream>

int main(){
    std::string students[] = {"Luffy", "Zoro", "Aokiji", "Ace"};

    for(std::string student : students){
        std::cout << student << std::endl;
    }

    return 0;
}