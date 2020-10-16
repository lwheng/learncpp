#ifndef MYSTRING_HPP
#define MYSTRING_HPP

#include <iostream>

class Mystring
{
    // friend bool operator==(const Mystring &lhs, const Mystring &rhs); // If you want to overload as non-member function
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
private:
    char *str; // point to a char[] that holds C-style string
public:
    Mystring();                         // No args constructor
    Mystring(const char *);             // Overloaded constructor
    Mystring(const Mystring &source);   // Copy constructor
    Mystring(Mystring &&source);        // Move constructor
    ~Mystring();                        // Destructor
    
    Mystring &operator=(const Mystring &rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs); // Move assignment
    
    Mystring operator-() const; // make lowercase
    Mystring operator+(const Mystring &rhs) const; // concatenate
    bool operator==(const Mystring &rhs) const; // check equal
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_HPP
