#include <iostream>
#include "Movies.hpp"

using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

void increment_watched(Movies &movies, string name) {
    if (movies.increment_watched(name)) {
        cout << name << " watch incremented!" << endl;
    }
    else {
        cout << name << " not found!" << endl;
    }
}

void add_movie(Movies &movies, string name, string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        cout << name << " added to the collection!" << endl;
    }
    else {
        cout << name << " already exists!" << endl;
    }
}

int main() {
    cout << "Hello World!" << endl;
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Star Wars", "PG-13", 0);
    increment_watched(my_movies, "Star Wars");
    
    my_movies.display();
    
    add_movie(my_movies, "Star Wars", "PG-13", 0);
    increment_watched(my_movies, "Star Trek");
    
    my_movies.display();
    return 0;
}