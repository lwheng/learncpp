#include <iostream>
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Account_Util.hpp"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
    
    // Accounts
    vector <Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    // Savings_Account
    vector <Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {});
    sav_accounts.push_back(Savings_Account {"Clark Kent"});
    sav_accounts.push_back(Savings_Account {"Bruce Wayne", 2000});
    sav_accounts.push_back(Savings_Account {"Diana Prince", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    // Checking_Account
    vector <Checking_Account> chk_accounts;
    chk_accounts.push_back(Checking_Account {});
    chk_accounts.push_back(Checking_Account {"Steve Rogers"});
    chk_accounts.push_back(Checking_Account {"Tony Stark", 2000});
    chk_accounts.push_back(Checking_Account {"Peter Parker", 5000});
    
    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);
    
    // Trust_Account
    vector <Trust_Account> trt_accounts;
    trt_accounts.push_back(Trust_Account {});
    trt_accounts.push_back(Trust_Account {"Athos", 10000, 5.0});
    trt_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0});
    trt_accounts.push_back(Trust_Account {"Aramis", 30000});
    
    display(trt_accounts);
    deposit(trt_accounts, 1000);
    withdraw(trt_accounts, 3000);
    
    for (int i=0; i<5; i++) {
        withdraw(trt_accounts, 1000);
    }
    return 0;
}