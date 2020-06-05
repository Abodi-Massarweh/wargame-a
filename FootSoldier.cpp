//
// Created by abodi on 27/05/2020.
//

#include "FootSoldier.hpp"
#include <cmath>

 void FootSoldier::special_move(std::vector<std::vector<Soldier*>>& vec,std::pair<int,int> pair)
{

    Soldier* target=find_closest(vec, pair);
    target->hit(s_default_damage);
    return;
}

Soldier * FootSoldier::find_closest(std::vector<std::vector<Soldier*>>& board, std::pair<int, int> pair) {
    size_t i= pair.first;
    size_t j=pair.second;
    size_t distance=3000;
    Soldier* target=NULL;
    size_t my_id=board[i][j]->m_id;
    for (int k = 0; k <board.size() ; ++k) {
        for (int l = 0; l <board[k].size() ; ++l) {
                if(board[k][l]->m_id!=my_id)
                {
                    int current_distance=sqrt(pow(k-i,2)+pow(l-j,2));
                    if(current_distance<distance){
                        distance=current_distance;
                        target=board[k][l];
                    }
                }
        }
    }
    return target;
}
