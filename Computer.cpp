#include "Computer.h"

Move* Computer::makeMove() {
    Move* ip=new Move("Rock");
    return ip; // always plays rock
}

std::string Computer::getName() {
    return "Computer";
}