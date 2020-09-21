#include <iostream>

using namespace std;

int age {21}; // GLobal variable

int main() {
    int age {18}; // Local variable
    
    cout << age << endl;
    
    return 0;
}