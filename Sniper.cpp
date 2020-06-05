//
// Created by abodi on 27/05/2020.
//

#include "Sniper.hpp"
Soldier*& Sniper::find_healthiest(std::vector<std::vector<Soldier*>>& vec,std::pair<int,int >pair)
{
    size_t health=0;
    Soldier* healthiest=NULL;
    size_t my_id=vec[pair.first][pair.second]->m_id;
    for (int i = 0; i <vec.size() ; ++i) {
        for (int j = 0; j <vec[i].size() ; ++j) {
            if((i!=pair.first)&&(j!=pair.second)&&(vec[i][j]->m_id!=my_id))
            {
                if(vec[i][j]->m_hp>health){
                    health=vec[i][j]->m_hp;
                    healthiest=vec[i][j];
                }
            }
        }
    }
    return healthiest;
}
void Sniper::special_move(std::vector<std::vector<Soldier*>>& vec,std::pair<int,int> pair)
{
    Soldier* target=find_healthiest(vec,pair);
    target->hit(Sniper::s_damage);
    return;

}
