#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human(std::string name = "Human");
    Move* makeMove();
    std::string getName();
private:
    std::string name;
};

#endif // HUMAN_H