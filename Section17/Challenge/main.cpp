#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
    int data;
public:
    Test () : data{0} {
        cout << "Test constructor (" << data << ")" << endl;
    }
    
    Test (int data) : data{data} {
        cout << "Test constructor (" << data << ")" << endl;
    }
    
    int get_data() const {
        return data;
    }
    
    ~Test () {
        cout << "Test destructor (" << data << ")" << endl;
    }
};

unique_ptr<vector<shared_ptr<Test>>> make() {
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num) {
    int x;
    for (int i = 1; i <= num; i++) {
        cout << "Enter data point [" << i << "]: ";
        cin >> x;
        vec.push_back(make_shared<Test>(x));
    }
}

void display(const vector<shared_ptr<Test>> &vec) {
    cout << "Display vector data" << endl;
    cout << "===================" << endl;
    for (const auto &sp : vec) {
        cout << sp->get_data() << endl;
    }
    cout << "===================" << endl;
}



int main() {
    cout << "Hello World!" << endl;
    
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}
