#ifndef _MOVIES_HPP_
#define _MOVIES_HPP_

#include <vector>
#include <string>
#include "Movie.hpp"

class Movies
{
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();

    void display() const;
    
    bool add_movie(std::string, std::string rating, int watched);
    bool increment_watched(std::string name);
};

#endif // _MOVIES_HPP_
