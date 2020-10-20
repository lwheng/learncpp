#include <iostream>
#include "Account.hpp"
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "Trust_Account.hpp"
#include "Account_Util.hpp"

#include <vector>

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
    
    Account *c = new Checking_Account;
    Account *s = new Savings_Account;
    Account *t = new Trust_Account("Leo", 10000, 2.6);
    
    vector<Account*> accounts {c, s, t};
    
    deposit(accounts, 5000);
    withdraw(accounts, 2000);
    display(accounts);
    
    delete c;
    delete s;
    delete t;
    
    return 0;
}