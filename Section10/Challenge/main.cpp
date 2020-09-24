#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    const int key {3};
    
    string secret {};
    cout << "Enter your secret message: ";
    getline(cin, secret);
    
    string encrypted = secret;
    for (size_t i {0}; i<encrypted.length(); ++i) {
        encrypted.at(i) = encrypted.at(i) + key;
    }
    
    string decrypted = encrypted;
    for (size_t i {0}; i<decrypted.length(); ++i) {
        decrypted.at(i) = decrypted.at(i) - key;
    }
    
    cout << secret << endl;
    cout << encrypted << endl;
    cout << decrypted << endl;
    return 0;
}