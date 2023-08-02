#ifndef MOVE_H
#define MOVE_H
#include <string>
class Move
{
private:
    std::string name;
public:
    Move(std::string name){
        this->name=name;
    };
    std::string getName();
    
};













#endif