#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP

#include <iostream>
#include <string>
#include "Account.hpp"

class Checking_Account : public Account
{
private:
    const double withdrawal_fee {1.5};
public:
    Checking_Account(std::string name = "Unnamed Checking Account", double balance = 0.0);
    virtual bool deposit (double amount) override;
    virtual bool withdraw (double amount) override;
    virtual ~Checking_Account() = default;
    
    virtual void print(std::ostream &os) const override;
};

#endif // CHECKING_ACCOUNT_HPP
