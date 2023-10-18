#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(int accNumber, std::string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        accountBalance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposit of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Balance for " << accountHolderName << " (Account #" << accountNumber << "): $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount(12345, "John Doe", 1000.00);

    // Test deposit and withdrawal
    myAccount.displayBalance();
    myAccount.deposit(500.00);
    myAccount.displayBalance();
    myAccount.withdraw(200.00);
    myAccount.displayBalance();
    myAccount.withdraw(1500.00); // Should display an error message
    myAccount.displayBalance();

    return 0;
      }