#include "Movies.hpp"
#include <iostream>

Movies::Movies() {
}
Movies::~Movies() {
}

void Movies::display() const {
    std::cout << "==============================" << std::endl;
    if (movies.size() == 0) {
        std::cout << "No movies in the collection!" << std::endl;
    }
    else {
        for (auto m : movies) {
        m.display();
    }
    }
    std::cout << "==============================" << std::endl;
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (const Movie &m : movies) {
        if (m.get_name() == name) {
            return false;
        }
    }
    movies.push_back(Movie(name, rating, watched));
    return true;
}
bool Movies::increment_watched(std::string name) {
    for (Movie &m : movies) {
        if (m.get_name() == name) {
            m.increment_watched();
            return true;
        }
    }
    return false;
}

