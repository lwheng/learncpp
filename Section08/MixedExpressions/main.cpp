#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    int total {0}, num1 {0}, num2 {0}, num3 {0};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;
    // average = (double) total / count; // This is old-style. static_cast is safer because it checks if it could be cast
    
    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum is: " << total << endl;
    cout << "The average is: " << average << endl;
    
    return 0;
}