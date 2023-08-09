#include <iostream>

int main(){
    std::string name;
    
    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name);

    if(name.length() > 12){
        std::cout << "Your name is long!" << std::endl;
    }

    else if (name.empty()){
        std::cout << "You didn't enter your name" << std::endl;
    }

    else{
        std::cout << "Welcome " << name << "!" << std::endl;
        std::cout << "Your email is: " << name.append("@outlook.com") << std::endl;
    }

    // clean variable
    name.clear();
    return 0;
}