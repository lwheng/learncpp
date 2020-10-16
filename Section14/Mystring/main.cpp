#include <iostream>
#include "Mystring.hpp"

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
//    Mystring empty;             // No args constructor
//    Mystring larry {"Larry"};    // Overloaded constructor
//    Mystring stooge {larry};    // Copy constructor
//    
//    empty.display();
//    larry.display();
//    stooge.display();

//    Mystring a {"Hello"}; // Overloaded constructor
//    Mystring b;           // No args
//    
//    b = a; // copy assignment
//           // b.operator=(a)
//    
//    b = "This is a test"; // b.operator=("This is a test")
    
//    Mystring c {"Hello"}; // Overloaded constructor
//    c = Mystring {"Hola"}; // Overloaded constructor + move assignment
//    c = "Bonjour"; // Overloaded constructor + move assignment

//    Mystring larry {"Larry"};
//    Mystring moe {"Moe"};
//    
//    Mystring stooge = larry;
//    larry.display();
//    moe.display();
//    
//    cout << (larry == moe) << endl;
//    cout << (larry == stooge) << endl;
//    
//    larry.display();
//    Mystring larry2 = -larry;
//    larry2.display();
//    
//    Mystring stooges = larry + "Moe";
//    // Mystring stooges = "Larry" + moe // Compiler error
//    
//    Mystring two_stooges = moe + " " + "Larry";
//    two_stooges.display();

    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;
    
    cout << "Enter the third stooge's first name: ";
    cin >> curly;
    
    cout << "curly's name is " << curly << endl;
    return 0;
}