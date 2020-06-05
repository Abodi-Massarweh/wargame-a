//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_FOOTCOMMANDER_HPP
#define WARGAME_A_FOOTCOMMANDER_HPP


#include "FootSoldier.hpp"

class FootCommander: public FootSoldier {
static const size_t s_initial_health=150;
    static const size_t s_damage_per=20;

public:
    FootCommander():FootSoldier(s_initial_health,s_damage_per){}
    virtual~FootCommander(){}

};


#endif //WARGAME_A_FOOTCOMMANDER_HPP
