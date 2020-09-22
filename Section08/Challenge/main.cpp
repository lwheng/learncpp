#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    
    /*
     * In the US:
     * 1 dollar is 100 cents
     * 1 quarter is 25 cents
     * 1 dime is 10 cents
     * 1 nickel is 5 cents
     * 1 penny is 1 cent
     */
    
    int cents {0};
    cout << "Enter a number of cents: ";
    cin >> cents;
    
    int count {0};
    int remain {0};
    
    cout << "Your change is: " << endl;
    
    // dollar
    count = cents / dollar;
    remain = cents % dollar;
    cout << "dollars\t: " << count << endl;
    
    // quarter
    count = remain / quarter;
    remain = remain % quarter;
    cout << "quarters\t: " << count << endl;
    
    // dime
    count = remain / dime;
    remain = remain % dime;
    cout << "dimes\t: " << count << endl;
    
    // nickel
    count = remain / nickel;
    remain = remain % nickel;
    cout << "nickels\t: " << count << endl;
    
    // penny
    cout << "pennies\t: " << remain << endl;
    
    return 0;
}
