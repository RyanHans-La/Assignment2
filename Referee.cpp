#include "Referee.h"
#include<iostream>


Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    std::string p1move = player1->makeMove()->getName();
    std::string p2move = player2->makeMove()->getName();
    
    if (p1move == "Rock" && p2move == "Scissors") {
        return player1;
    }
    else if (p1move == "Rock" && p2move == "Paper") {
        return player2;
    }
    else if (p1move == "Scissors" && p2move == "Rock") {
        return player2;
    }
    else if (p1move == "Scissors" && p2move == "Paper") {
        return player1;
    }
    else if (p1move == "Paper" && p2move == "Rock") {
        return player1;
    }
    else if (p1move == "Paper" && p2move == "Scissors") {
        return player2;
    }
    else if (p1move == "Monkey" && p2move == "Robot") {
        return player2;
    }
    else if (p1move == "Robot" && p2move == "Ninja") {
        return player2;
    }
    else if (p1move == "Ninja" && p2move == "Zombie") {
        return player1;
    }
    else if (p1move == "Zombie" && p2move == "Monkey") {
        return player2;
    }
    else if (p1move == "Monkey" && p2move == "Zombie") {
        return player1;
    }
    else if (p1move == "Robot" && p2move == "Monkey") {
        return player1;
    }
    else if (p1move == "Ninja" && p2move == "Robot") {
        return player1;
    }
    else if (p1move == "Zombie" && p2move == "Ninja") {
        return player2;
    }
    else if(p1move==p2move)
    {
         Player* Tie = new Human("Tie");
         return Tie;
    }
    else if(p1move=="Pirate"&&p2move=="Robot"){
        return player1;
    }
    else if (p1move=="Pirate"&&p2move=="Monkey"){
        return player1;
    }
    else{
        return player2;
    }
    
    


    


    return player2;
}