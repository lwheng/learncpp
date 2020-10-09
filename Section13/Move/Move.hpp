#ifndef _MOVE_HPP_
#define _MOVE_HPP_

class Move
{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; };
    int get_data_value() { return *data; };
    
    Move (int d);
    Move(const Move &source);
    Move(Move &&source);
    ~Move();

};

#endif // _MOVE_HPP_
