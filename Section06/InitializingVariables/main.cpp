#include <iostream>

using namespace std;

// This program wiill calculate the area of a room in square feet

int main() {
    int room_width {0};
    cout << "Enter the width of the room: ";
    cin >> room_width;
    
    int room_length {0};
    cout << "Enter the length of the room: ";
    cin >> room_length;
    
    cout << "The area of the room is " << room_length * room_width << " square feet." << endl;
    
    return 0;
}