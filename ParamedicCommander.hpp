//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_PARAMEDICCOMMANDER_HPP
#define WARGAME_A_PARAMEDICCOMMANDER_HPP


#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic{
static const size_t s_max_health=200;
public:
    ParamedicCommander(size_t id):Paramedic(id,s_max_health){}
    virtual void special_move(std::vector<std::vector<Soldier*>>& vec, std::pair<int,int> a);
    virtual ~ParamedicCommander()=default;

};


#endif //WARGAME_A_PARAMEDICCOMMANDER_HPP
