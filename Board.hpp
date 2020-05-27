//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_BOARD_HPP
#define WARGAME_A_BOARD_HPP
#include<vector>
#include "Soldier.hpp"
class Board {
    std::vector<std::vector<Soldier*>> board;
public:
    Soldier*& operator[]( std::pair<int,int> a)
    {

        return board[a.first][a.second];
    }
    Board(int col,int row):board(row,std::vector<Soldier*>(col, nullptr))
    {
    }
   // void move(){}
    bool has_soldiers(int val){return false;}
    enum MoveDIR{
        Up,
        Down,
        Left,
        Right
    };

    void move(int i,std::pair<int,int> a, MoveDIR dir) {
        return;
    }
    ~Board(){
        board.clear();
    }
};


#endif //WARGAME_A_BOARD_HPP
