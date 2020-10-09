#ifndef _MOVIE_HPP_
#define _MOVIE_HPP_

#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;
public:
    // Constructor
    Movie(std::string name, std::string rating, int watched);
    
    // Move Constructor
    Movie(const Movie &source);
    
    // Destructor
    ~Movie();
    
    void set_name(std::string name) { this->name = name; }
    void set_rating(std::string rating) { this->rating = rating; }
    void set_watched(int watched) { this->watched = watched; }
    
    std::string get_name() const { return name; }
    std::string get_rating() const { return rating;}
    int get_watched() const { return watched; }
    
    void increment_watched() { ++watched; }
    
    void display() const;
};

#endif // _MOVIE_HPP_
