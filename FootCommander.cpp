//
// Created by abodi on 27/05/2020.
//

#include "FootCommander.hpp"
 void FootCommander::special_move(std::vector<std::vector<Soldier*>>& vec,std::pair<int,int> a)
{
    FootSoldier* fsp= NULL;
    for (int i = 0; i <vec.size() ; ++i) {
        for (int j = 0; j <vec[i].size() ; ++j) {
            if (i != a.first && j != a.second) {
            fsp = dynamic_cast<FootSoldier *>(vec[i][j]);
            std::pair<int, int> current(i, j);
            if (fsp) vec[i][j]->special_move(vec, current);
        }
        }
    }
    Soldier* target=FootSoldier::find_closest(vec,a);
    target->hit(this->s_damage_per);
    return;
}