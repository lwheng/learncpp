#include "Move.hpp"
#include <iostream>

Move::Move(int d)
{
    std::cout << "Constructor called for: " << d << std::endl;
    data = new int;
    *data = d;
}

Move::Move(const Move &source) {
    std::cout << "Copy constructor called" << std::endl;
    data = new int;
    *data = *source.data;
}

Move::Move(Move &&source)
    :data{source.data} {
    std::cout << "Move constructor called" << std::endl;
    source.data = nullptr;
}

Move::~Move()
{
    if (data != nullptr) {
        std::cout << "Destructor freeing data: " << *data << std::endl;
    }
    else {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
}

