#include "Mystring.hpp"
#include <cstring>
#include <iostream>

// No arg constructor
Mystring::Mystring()
  : str {nullptr} {
  str = new char[1];
  *str = '\0';      
}

// Overloaded constructor
Mystring::Mystring(const char *s)
  : str {nullptr} {
  if (s == nullptr) {
      str = new char[1];
      *str = '\0';
  }
  else {
      str = new char[std::strlen(s)+1];
      std::strcpy(str, s);
  }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
  : str {nullptr} {
  str = new char[std::strlen(source.str)+1];
  std::strcpy(str, source.str);
}

// Move constructor
Mystring::Mystring(Mystring &&source)
  : str (source.str) {
  source.str = nullptr;
  std::cout << "Move constructor used" << std::endl;  
}


Mystring::~Mystring()
{
    if (str == nullptr) {
      std::cout << "Calling destructor for Mystring : nullptr" << std::endl;    
    }
    else {
      std::cout << "Calling destructor for Mystring : " << str << std::endl; 
    }
    delete [] str;
}

// Display
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Length getter
int Mystring::get_length() const {
    return std::strlen(str);
}

// String getter
const char* Mystring::get_str() const {
    return str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Move assignment" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    
    return *this;
}

bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

// Make lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concat
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &obj) {
    os << obj.str; // Only possible because friend
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring {buff};
    delete [] buff;
    return in;
}
