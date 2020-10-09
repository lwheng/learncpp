#include <iostream>
#include "Account.hpp"

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    Account acc {"Barry's Account"};
    cout << acc.get_name() << endl;
    acc.set_balance(1000.0);
    cout << "Deposit outcome: " << acc.deposit(100.0) << endl;

    cout << "Withdraw outcome: " << acc.withdraw(500) << endl;
    cout << "Withdraw outcome: " << acc.withdraw(5000) << endl;
    
    Account copy {acc};
    copy.set_name("Bruce's Account");
    return 0;
}