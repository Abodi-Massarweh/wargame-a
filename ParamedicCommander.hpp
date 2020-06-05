//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_PARAMEDICCOMMANDER_HPP
#define WARGAME_A_PARAMEDICCOMMANDER_HPP


#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic{
static const size_t s_max_health=200;
public:
    ParamedicCommander():Paramedic(s_max_health){}
    virtual ~ParamedicCommander()=default;

};


#endif //WARGAME_A_PARAMEDICCOMMANDER_HPP
