/*
 * Given an std::string, print out a Letter Pyramid
 * 
 * E.g. Given "ABC":
 *   A  
    ABA 
   ABCBA

 * Given "ABCDE":
 *     A    
      ABA   
     ABCBA  
    ABCDCBA 
   ABCDEDCBA
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter your string: ";
    string input {};
    getline(cin, input);
    
    string space {};
    string left {};
    string right {};
    for (size_t i {0}; i<input.length(); ++i) {
        space = string(input.length() - (i+1), ' ');

        left = input.substr(0, i);
        
        // Reverse the string
        right = left;
        for (size_t i {0}; i<left.length(); ++i) {
            right.at(left.length()-(i+1)) = left.at(i);
        }
        
        cout << space << left << input.at(i) << right << space << endl;
    }
    return 0;
}