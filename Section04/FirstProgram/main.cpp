#include <iostream>

// Single line comment

/* This
 * is
 * a
 * multiple
 * line
 * comment
 */

using namespace std;

int main() {
    int favourite_number;
    cout << "Enter your favourite number between 1 to 100: ";
    cin >> favourite_number;
    
    if (1 <= favourite_number && favourite_number <= 100) {
        cout << "Amazing! That is my favourite number too!" << endl;
        cout << "Not really! " << favourite_number << " is my favourite number!" << endl;
        return 0;
    }
    else {
        cout << "Please, an integer between 1 to 100.";
        return 1;
    }
}