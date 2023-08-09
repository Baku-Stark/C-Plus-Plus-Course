#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);

    std::cout << "$" << getTotal(prices, size) << std::endl;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}