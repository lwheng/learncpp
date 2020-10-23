#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <string>
#include "I_Printable.hpp"

class Account : public I_Printable
{
protected:
    std::string name;
    double balance;
public:
    Account (std::string name = "Unnamed Account", double balance = 0.0);
    
    virtual bool deposit (double amount) = 0;
    virtual bool withdraw (double amount) = 0;
    virtual ~Account() = default;

    virtual void print(std::ostream &os) const override;
};

#endif // ACCOUNT_HPP
