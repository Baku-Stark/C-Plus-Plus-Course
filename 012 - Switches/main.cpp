#include <iostream>

int main(){
    int mouth;
    std::cout << "Enter the mouth (1-12): ";
    std::cin >> mouth;

    switch (mouth){
        case 1:
            std::cout << "JANUARY";
            break;
        case 2:
            std::cout << "FEBRUARY";
            break;
        case 3:
            std::cout << "MARCH";
            break;
        case 4:
            std::cout << "APRIL";
            break;
        case 5:
            std::cout << "MAY";
            break;
        case 6:
            std::cout << "JUNE";
            break;
        case 7:
            std::cout << "JULY";
            break;
        case 8:
            std::cout << "AUGUST";
            break;
        case 9:
            std::cout << "SEPTEMBER";
            break;
        case 10:
            std::cout << "OCTOBER";
            break;
        case 11:
            std::cout << "NOVEMBER";
            break;
        case 12:
            std::cout << "DECEMBER";
            break;
        
        default: 
            std::cout << "This mouth don't exists...";
            break;
    }
    return 0;
}