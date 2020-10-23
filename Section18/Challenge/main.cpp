#include <iostream>
#include "Account.hpp"
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "Trust_Account.hpp"
#include "Account_Util.hpp"

#include "IllegalBalanceException.hpp"
#include "InsufficientFundsException.hpp"

#include <vector>

#include <memory>

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
    
    unique_ptr<Account> negBalance;
    unique_ptr<Account> notEnough;
    
    try {
        negBalance = make_unique<Savings_Account>("Savings account", -10);
        negBalance->deposit(100);
    }
    catch (IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }
    
    try {
        notEnough = make_unique<Savings_Account>("Not enough", 100);
        notEnough->withdraw(2000);
    }
    catch (InsufficientFundsException &ex) {
        cerr << ex.what() << endl;
    }
    
    return 0;
}