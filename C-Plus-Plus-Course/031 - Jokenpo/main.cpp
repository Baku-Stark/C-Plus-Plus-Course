#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    std::cout << "===== JOKENPO GAME =====" << std::endl;
    char player;
    char computer;

    player = getUserChoice();
    showChoice(player);
    
    computer = getComputerChoice();
    std::cout << "Computer's choice: " << computer << std::endl;

    chooseWinner(player, computer);
    return 0;
}

char getUserChoice(){
    char player;
    
    do{
        std::cout << "========================" << std::endl;
        std::cout << "'r' - for rock" << std::endl;
        std::cout << "'p' - for paper" << std::endl;
        std::cout << "'s' - for scissor" << std::endl;
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char getComputerChoice(){
    srand(time(0));
    int choice = rand() % 3 + 1;

    switch (choice){
        case 1:
            return 'r';
            break;

        case 2:
            return 'p';
            break;

        case 3:
            return 's';
            break;
    }

    return 0;
}

void showChoice(char choice){
    switch (choice){
        case 'r':
            std::cout << "Your choice: Rock" << std::endl;
            break;

        case 'p':
            std::cout << "Your choice: PAPER" << std::endl;
            break;

        case 's':
            std::cout << "Your choice: SCISSOR" << std::endl;
            break;
            
        default:
            break;
    }
}

void chooseWinner(char player, char computer){
    switch (player){
        case 'r':
            if(computer == 'r'){
                std::cout << "It's a tie!" << std::endl;
            }
            if(computer == 'p'){
                std::cout << "You lose..." << std::endl;
            }
            else{
                std::cout << "You win" << std::endl;
            }
            break;

        case 'p':
            if(computer == 'p'){
                std::cout << "It's a tie!" << std::endl;
            }
            if(computer == 's'){
                std::cout << "You lose..." << std::endl;
            }
            else{
                std::cout << "You win" << std::endl;
            }
            break;

        case 's':
            if(computer == 's'){
                std::cout << "It's a tie!" << std::endl;
            }
            if(computer == 'r'){
                std::cout << "You lose..." << std::endl;
            }
            else{
                std::cout << "You win" << std::endl;
            }
            break;
    }
}