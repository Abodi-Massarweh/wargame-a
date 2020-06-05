//
// Created by abodi on 27/05/2020.
//

#include "ParamedicCommander.hpp"
void ParamedicCommander::special_move(std::vector<std::vector<Soldier*>>& vec, std::pair<int,int> a)
{
    for (int i =a.first-1; (i <=a.first+1&&(i>=0)&&i<vec.size()) ; ++i)
    {
        for (int j = a.second-1; (j <=a.second+1&&j<vec[i].size()&&j>=0) ; ++j) {
            if(((i!=a.first)&&(j!=a.second)) &&(vec[i][j]->m_id==vec[a.first][a.second]->m_id)){
                vec[i][j]->heal();
            }
        }
    }
    Paramedic* allied=NULL;
    for (int i = 0; i <vec.size() ; ++i) {
        for (int j = 0; j <vec[i].size() ; ++j) {
            if(i!=a.first&&j!=a.second&&vec[i][j]->m_id==this->m_id)
            {
                allied= dynamic_cast<Paramedic*>(vec[i][j]);
                if(allied)special_move(vec,{i,j});
            }
        }
    }
    return;
}