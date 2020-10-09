#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_

#include <string>

class Account
{
private:
  // attributes
  std::string name;
  double balance;
  
public:
  // Constructors
//  Account();
//  Account(std::string n);
  Account(std::string n = "None", double b = 0.0);
  
  // Copy constructor
  Account(const Account &source);
  
  // Destructor
  ~Account();

  // methods
  void set_balance(double bal) { balance = bal; }
  double get_balance() { return balance; }
  
  void set_name(std::string n);
  std::string get_name();
  
  bool deposit(double amount);
  bool withdraw(double amount);
};

#endif // _ACCOUNT_H_
