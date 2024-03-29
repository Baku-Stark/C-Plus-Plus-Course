#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withDraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;

    do{  
        std::cout << "***********************" << std::endl;
        std::cout << "Enter you choice: " << std::endl;
        std::cout << "***********************" << std::endl;
        std::cout << "[1] - Show Balance" << std::endl;
        std::cout << "[2] - Deposit Money" << std::endl;
        std::cout << "[3] - Withdraw Money" << std::endl;
        std::cout << "[4] - Exit" << std::endl;
        // ---
        std::cin >> choice;

        switch (choice){
            case 1:
                showBalance(balance);
                break;

            case 2:
                balance += deposit();
                break;

            case 3:
                balance -= withDraw(balance);
                break;

            case 4:
                std::cout << "Thanks for visiting!" << std::endl;
                break;
            
            default:
                std::cout << "Invalid choice..." << std::endl;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit(){
    double amount = 0;
    std::cout << "ENter amount to be deposited: " << std::endl;
    std::cin >> amount;

    if(amount > 0){
        return amount; 
    }
    else{
        std::cout << "That's not a valid amount" << std::endl;
        return 0;
    }
}

double withDraw(double balance){
    double amount = 0;
    std::cout << "ENter amount to be withdraw: " << std::endl;
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insuficient funds" << std::endl;
        return 0;
    }

    else if(amount < 0){
        std::cout << "That's not a valid amount" << std::endl;
        return 0;
    }
    
    else{
        return amount;
    }
}