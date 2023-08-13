#include <iostream>
template <typename T>

int max(int x, int y){
    return (x > y) ? x : y;
}

T max(T x, T y){
    return (x > y) ? x : y;
}

int main(){
    std::cout << max(1, 2) << std::endl;
    return 0;
}