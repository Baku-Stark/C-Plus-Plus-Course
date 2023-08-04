#include<iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
using text_t = std::string;

typedef int number_t;
using number_t = int;

int main(){
    pairlist_t pairlist;

    text_t firstName = "Baku";
    std::cout << firstName << '\n';

    number_t age = 23;
    std::cout << age << '\n';

    return 0;
}