#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] << endl;
    cout << vowels.at(3) << endl;
    
    vector <int> test_scores (3, 100);
    
    cout << "Size of test_scores: " << test_scores.size() << endl;
    
    test_scores.push_back(30);
    
    cout << "Size of test_scores: " << test_scores.size() << endl;
    
    vector <vector<int>> movie_ratings
    {
      {1, 2, 3, 4}
    , {2, 3, 4, 5}
    , {3, 4, 5, 6}
    };
    
    cout << "movie_ratings.at(0).at(2): " << movie_ratings.at(0).at(2) << endl;
    
    return 0;
}