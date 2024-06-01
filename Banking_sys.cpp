#include <iostream>

void show_balance(double balance);
void withdraw(double& balance);
void deposit(double& balance);

int main(){
    double balance = 0.0;
    int choice;

    do {
        std::cout << "*************************" << '\n';
        std::cout << "What would you like to do?" << '\n';
        std::cout << "*************************" << '\n';
        std::cout << "1. Show balance" << '\n';
        std::cout << "2. Withdraw" << '\n';
        std::cout << "3. Deposit" << '\n';
        std::cout << "4. Exit" << '\n';
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            show_balance(balance);
            break;
        case 2:
            withdraw(balance);
            break;
        case 3:
            deposit(balance);
            break;
        case 4:
            std::cout << "Exiting..." << '\n';
            break;
        default:
            std::cout << "Invalid choice, please try again." << '\n';
        }
    } while (choice != 4);

    return 0;
}

void show_balance(double balance){
    std::cout << "Your balance is: " << balance << '\n';
}

void withdraw(double& balance){
    std::cout << "How much would you like to withdraw: ";
    double amount;
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds!" << '\n';
    } else {
        balance -= amount;
        std::cout << "You've successfully withdrawn: " << amount << '\n';
        std::cout << "New balance is: " << balance << '\n';
    }
}

void deposit(double& balance){
    std::cout << "How much would you like to deposit: ";
    double amount;
    std::cin >> amount;

    balance += amount;
    std::cout << "You've successfully deposited: " << amount << '\n';
    std::cout << "New balance is: " << balance << '\n'; 
}
