#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    vector<int> my_list {};
    char selection {};
    do {
        cout << endl << "-----------------------------------" << endl;
        cout << "Please tell me what you want to do:" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl << endl;
        
        cout << "Enter your choice: ";
        cin >> selection;
        
        if (selection == 'P' || selection == 'p') {
            if (my_list.size() == 0) {
                cout << "The list is empty!" << endl;
            }
            else {
              cout << "[ ";
              for (auto v : my_list) {
                cout << v << " ";
              }
              cout << "]" << endl;
            }
        }
        else if (selection == 'A' || selection == 'a') {
            int num {0};
            cout << "Enter a number: ";
            cin >> num;
            my_list.push_back(num);
            cout << num << " added!" << endl;
        }
        else if (selection == 'M' || selection == 'm') {
            if (my_list.size() == 0) {
                cout << "The list is empty!" << endl;
            }
            else if (my_list.size() == 1) {
                cout << "The mean is " << my_list.at(0) << endl;
            }
            else {
                double sum {0};
                for (auto v : my_list) {
                    sum += v;
                }
                cout << "The mean is " << sum / my_list.size() << endl;
            }
        }
        else if (selection == 'S' || selection == 's') {
            int min {INT_MAX};
            for (auto v : my_list) {
                if (v < min) {
                    min = v;
                }
            }
            
            if (min == INT_MAX) {
                cout << "The list is empty!" << endl;
            }
            else {
                cout << "The smallest number is: " << min << endl;
            }
        }
        else if (selection == 'L' || selection == 'l') {
            int max {INT_MIN};
            for (auto v : my_list) {
                if (v > max) {
                    max = v;
                }
            }
            
            if (max == INT_MIN) {
                cout << "The list is empty!" << endl;
            }
            else {
                cout << "The largest number is: " << max << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q') {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'Q' && selection != 'q');
    return 0;
}