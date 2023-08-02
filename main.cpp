#include "Human.h"
#include "Computer.h"
#include "Referee.h"

#include <iostream>
#include "Move.h"

int main() {
    Player* player1 = new Human("Mei");
    Player* player2 = new Computer();
    Move* MOVE=new Move("gh");
    std::cout<<MOVE->getName();
    Referee referee;
    Player* winner = referee.refGame(player1, player2);
    std::cout<<winner->getName();
    
    
    return 0;
}
