#include <iostream>

enum Day {
    sunday = 0, monday = 1, tuesday = 2,
    wednesday = 3, thursday = 4, friday = 5,
    saturday = 6
};

int main(){
    Day today = sunday;

    switch (today){
        case sunday: std::cout << "It's is Sunday" << std::endl;
            break;

        case monday: std::cout << "It's is Monday" << std::endl;
            break;

        case tuesday: std::cout << "It's is Tuesday" << std::endl;
            break;

        case wednesday: std::cout << "It's is Wednesday" << std::endl;
            break;

        case thursday: std::cout << "It's is Thursday" << std::endl;
            break;

        case friday: std::cout << "It's is Friday" << std::endl;
            break;

        case saturday: std::cout << "It's is Saturday" << std::endl;
            break;
    }
    return 0;
}