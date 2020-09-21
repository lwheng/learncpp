#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << endl;
    
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const double tax_rate {0.06};
    const int valid_days {30};
    
    cout << "How many small rooms would you like cleaned? ";
    int num_of_small_rooms {0};
    cin >> num_of_small_rooms;
    cout << "How many large rooms would you like cleaned? ";
    int num_of_large_rooms {0};
    cin >> num_of_large_rooms;
    
    cout << endl;
    
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << num_of_small_rooms << endl;
    cout << "Number of large rooms: " << num_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    
    double cost {num_of_large_rooms * price_per_large_room + num_of_small_rooms * price_per_small_room};
    cout << "Cost: $" << cost << endl;
    cout << "Tax : $" << cost * tax_rate << endl;
    cout << "=====================================" << endl;
    cout << "Total Estimate: $" << cost * (1 + tax_rate) << endl;
    cout << "This estimate is valid for " << valid_days << " days" << endl;
    
    cout << endl;
    return 0;
}