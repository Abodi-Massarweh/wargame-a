//
// Created by abodi on 27/05/2020.
//

#include "Paramedic.hpp"
 void Paramedic::special_move(std::vector<std::vector<Soldier*>>& vec, std::pair<int,int> a)
 {
     for (int i =a.first-1; (i <=a.first+1&&(i>=0)&&i<vec.size()) ; ++i)
     {
         for (int j = a.second-1; (j <=a.second+1&&j<vec[i].size()&&j>=0) ; ++j) {
             if(((i!=a.first)&&(j!=a.second)) &&(vec[i][j]->m_id==vec[a.first][a.second]->m_id)){
                 vec[i][j]->heal();
             }
         }
     }
 }
