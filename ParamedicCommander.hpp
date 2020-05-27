//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_PARAMEDICCOMMANDER_HPP
#define WARGAME_A_PARAMEDICCOMMANDER_HPP


#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic{
    int x;

public:
    ParamedicCommander(int val=0):x(val){}

};


#endif //WARGAME_A_PARAMEDICCOMMANDER_HPP
