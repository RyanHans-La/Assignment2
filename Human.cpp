#include "Human.h"
#include <iostream>

Human::Human(std::string name) {
    this->name = name;
}

Move* Human::makeMove() {
    std::string move;
   int y=1;
   while (y!=0)
   {
    std::cout << "Enter move: ";
    
    
    std::cin >> move;
    if (move=="Rock"||move=="Paper"||move=="Scissors"||move=="Robot"||move=="Monkey"||move=="Pirate"||move=="Ninja"||move=="Zombie")
    {
        y=0;
    }
    
   }
   
    
    
    Move* OP=new Move(move);
    return OP;
}

std::string Human::getName() {
    return name;
}