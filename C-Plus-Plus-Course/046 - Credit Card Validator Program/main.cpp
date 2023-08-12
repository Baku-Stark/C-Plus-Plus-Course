#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){
    std::string cardNumber;
    int result;

    std::cout << "Enter a credit card #: " << std::endl;
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    // Example: 6011000990139424

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid" << std::endl;
    }

    else{
        std::cout << cardNumber << " is not valid" << std::endl;
    }

    return 0;
}

int getDigit(const int number){
    return number % 10 +(number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
