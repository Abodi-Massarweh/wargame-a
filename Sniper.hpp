//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_SNIPER_HPP
#define WARGAME_A_SNIPER_HPP


#include "Attacker.hpp"

class Sniper: public Attacker {
    static const int  s_full_health=100;
    static const int s_damage=50;

public:
    Sniper():Attacker(s_damage,s_full_health){}
    Sniper(size_t health=s_full_health,size_t damage=s_damage):Attacker(damage,health){}
    virtual ~Sniper()=default;

};


#endif //WARGAME_A_SNIPER_HPP
