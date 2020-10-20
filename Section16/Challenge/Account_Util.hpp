#ifndef ACCOUNT_UTIL_HPP
#define ACCOUNT_UTIL_HPP

#include "Account.hpp"
#include <vector>

void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);

#endif // ACCOUNT_UTIL_HPP
