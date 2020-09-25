#include <iostream>
#include <vector>
#include <string>

using namespace std;

void prompt (char &sel);

void add_a_number (vector<int> &numbers);

void handle_unknown ();

void say_goodbye ();

void print_list (const vector<int> &numbers);

void display_list (const vector<int> &numbers);

void display_mean (const vector<int> &numbers);

void display_smallest (const vector<int> &numbers);

void display_largest (const vector<int> &numbers);

bool quit(const char c);

int main() {
    cout << "Hello World!" << endl;
    
    vector<int> my_list {};
    char selection {};
    do {
        prompt(selection);
        
        switch (selection) {
            case 'P':
                print_list(my_list);
                break;
            case 'A':
                add_a_number(my_list);
                break;
            case 'M':
                display_mean(my_list);
                break;
            case 'S':
                display_smallest(my_list);
                break;
            case 'L':
                display_largest(my_list);
                break;
            case 'Q':
                say_goodbye();
                break;
            default:
                handle_unknown();
        }
    } while (!quit(selection));
    return 0;
}

void prompt (char &sel) {
    cout << endl << "-----------------------------------" << endl;
    cout << "Please tell me what you want to do:" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl << endl;
        
    cout << "Enter your choice: ";
    cin >> sel;
    sel = toupper(sel);
}

void handle_unknown () {
    cout << "Unknown selection, please try again" << endl;
}

void say_goodbye () {
    cout << "Goodbye!" << endl;
}

void print_list (const vector<int> &numbers) {
    if (numbers.size() == 0) {
        cout << "The list is empty!" << endl;
    }
    else {
        display_list(numbers);
    }
}

void display_list (const vector<int> &numbers) {
    cout << "[ ";
    for (auto v : numbers) {
        cout << v << " ";
    }
    cout << "]" << endl;
}

void add_a_number (vector<int> &numbers) {
    int num {0};
    cout << "Enter a number: ";
    cin >> num;
    
    numbers.push_back(num);
    cout << num << " added!" << endl;
}

void display_mean (const vector<int> &numbers) {
    if (numbers.size() == 0) {
        cout << "The list is empty!" << endl;
    }
    else if (numbers.size() == 1) {
        cout << "The mean is " << numbers.at(0) << endl;
    }
    else {
        double sum {0};
        for (auto v : numbers) {
            sum += v;
        }
        cout << "The mean is " << sum / numbers.size() << endl;
    }
}

void display_smallest (const vector<int> &numbers) {
    int min {INT_MAX};
    for (auto v : numbers) {
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

void display_largest (const vector<int> &numbers) {
    int max {INT_MIN};
    for (auto v : numbers) {
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

bool quit(const char c) {
    return (c == 'Q');
}