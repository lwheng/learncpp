#include "Account_Util.hpp"
#include <iostream>

void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ===" << std::endl;
    
    for (const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " into " << acc << std::endl;
        }
        else {
            std::cout << "Failed to deposit " << amount << " into " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrawn " << amount << " from " << acc << std::endl;
        }
        else {
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
        }
    }
}

void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings_Account ===" << std::endl;
    
    for (const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings_Account ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " into " << acc << std::endl;
        }
        else {
            std::cout << "Failed to deposit " << amount << " into " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings_Account ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrawn " << amount << " from " << acc << std::endl;
        }
        else {
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
        }
    }
}

void display(const std::vector<Checking_Account> &accounts) {
    std::cout << "\n=== Checking_Account ===" << std::endl;
    
    for (const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Checking_Account ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " into " << acc << std::endl;
        }
        else {
            std::cout << "Failed to deposit " << amount << " into " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Checking_Account ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrawn " << amount << " from " << acc << std::endl;
        }
        else {
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
        }
    }
}

void display(const std::vector<Trust_Account> &accounts) {
    std::cout << "\n=== Trust_Account ===" << std::endl;
    
    for (const auto &acc : accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Trust_Account ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " into " << acc << std::endl;
        }
        else {
            std::cout << "Failed to deposit " << amount << " into " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust_Account ===" << std::endl;
    
    for (auto &acc : accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrawn " << amount << " from " << acc << std::endl;
        }
        else {
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
        }
    }
}

