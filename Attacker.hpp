//
// Created by abodi on 05/06/2020.
//

#ifndef WARGAME_A_ATTACKER_HPP
#define WARGAME_A_ATTACKER_HPP

#include <cstdio>
#include "Soldier.hpp"
class Attacker: public Soldier
{
    size_t m_damage;

public: Attacker(size_t dmg,size_t health):m_damage(dmg), Soldier(health){}
    virtual ~Attacker(){}
};



#endif //WARGAME_A_ATTACKER_HPP
