#include "Movie.hpp"
#include <iostream>

// Constructor
Movie::Movie(std::string name, std::string rating, int watched)
    : name{name}, rating{rating}, watched{watched} {
}

// Move Constructor
Movie::Movie(const Movie &source)
    : Movie(source.name, source.rating, source.watched) {
}

// Destructor
Movie::~Movie() {
}

void Movie::display() const {
    std::cout << name << "\t" << rating << "\t" << watched << std::endl;
}
