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
    FootCommander(size_t id):FootSoldier(id,s_initial_health,s_damage_per){}
    virtual void heal(){this->m_hp=s_initial_health;}
    virtual~FootCommander(){}
    virtual void special_move(std::vector<std::vector<Soldier*>>& ,std::pair<int,int> a);

};


#endif //WARGAME_A_FOOTCOMMANDER_HPP
