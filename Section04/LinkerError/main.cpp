#include <iostream>

// Purposely trying to reference something that 
// is not defined
extern int x;

int main() {
    std::cout << "Hello Testing!" << std::endl;
    
    std::cout << x;
    
    return 0;
}