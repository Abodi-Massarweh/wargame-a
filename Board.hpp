//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_BOARD_HPP
#define WARGAME_A_BOARD_HPP
#include<vector>
#include "Soldier.hpp"
#include "Attacker.hpp"
#include "FootSoldier.hpp"
#include <stdexcept>
#include <iostream>

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
    bool has_soldiers(int val)
    {
        for (int i = 0; i <board.size() ; ++i) {
            for (int j = 0; j <board[i].size() ; ++j) {
                if(board[i][j]->m_id==val&&board[i][j]->m_hp>0)return true;
            }
        }
        return false;
    }
    enum MoveDIR{
        Up,
        Down,
        Left,
        Right
    };

    void move(int i,std::pair<int,int> a, MoveDIR dir)
    {
        int n_i=0;
        int n_j=0;
        if(board[a.first][a.second]->m_id!=i)
        {
            std::cout<<"this is not your soldier to move";
            return;
        }
        //else
        switch (dir) {
            case MoveDIR::Up :
                if(board[a.first+1][a.second]!=NULL)
                {
                    std::cout<<"place reserved";
                    return;
                }
                if(a.first+1>=board.size())
                {
                    std::cout<<"illegal placement";
                    return;
                }
                board[a.first+1][a.second]=board[a.first][a.second];
                board[a.first][a.second]=NULL;
                n_i=a.first+1;
                n_j=a.second;
                break;

            case MoveDIR::Down :
                if(board[a.first-1][a.second]!=NULL)
                {
                    std::cout<<"place reserved";
                    return;
                }
                if(a.first-1<0)
                {
                    std::cout<<"illegal placement";
                    return;
                }
                board[a.first-1][a.second]=board[a.first][a.second];
                board[a.first][a.second]=NULL;
                n_i=a.first-1;
                n_j=a.second;
                break;


            case MoveDIR::Left :
                if(board[a.first][a.second-1]!=NULL)
                {
                    std::cout<<"place reserved";
                    return;
                }
                if(a.second-1<0)
                {
                    std::cout<<"illegal placement";
                    return;
                }
                board[a.first][a.second-1]=board[a.first][a.second];
                board[a.first][a.second]=NULL;
                n_i=a.first;
                n_j=a.second-1;
                break;


            case MoveDIR::Right :
                if(board[a.first][a.second+1]!=NULL)
                {
                    std::cout<<"place reserved";
                    return;
                }
                if(a.second+1>=board[a.first].size())
                {
                    std::cout<<"illegal placement";
                    return;
                }
                board[a.first][a.second+1]=board[a.first][a.second];
                board[a.first][a.second]=NULL;
                n_i=a.first;
                n_j=a.second+1;
        }
        board[n_j][n_j]->special_move(this->board,{n_i,n_j});



    }
    ~Board(){


    }
};


#endif //WARGAME_A_BOARD_HPP
