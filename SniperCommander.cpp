//
// Created by abodi on 27/05/2020.
//

#include "SniperCommander.hpp"
void SniperCommander::special_move(std::vector<std::vector<Soldier*>>& vec,std::pair<int,int> pair)
{
    Sniper* allied_sniper=NULL;
    for (int i = 0; i <vec.size() ; ++i) {
        for (int j = 0; j <vec[i].size() ; ++j) {
            if(i!=pair.first&&j!=pair.second)
            {
                allied_sniper= dynamic_cast<Sniper*>(vec[i][j]);
                if(allied_sniper)allied_sniper->special_move(vec,{i,j});
            }
        }
    }
    Soldier* target=Sniper::find_healthiest(vec,pair);
    target->hit(SniperCommander::s_damage);
    return;
}