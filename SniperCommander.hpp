//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_SNIPERCOMMANDER_HPP
#define WARGAME_A_SNIPERCOMMANDER_HPP


#include "Sniper.hpp"

class SniperCommander: public Sniper {
    static const size_t s_health=120;
    static  const  size_t  s_damage=100;

public:
    SniperCommander():Sniper(s_health,s_damage){}
    virtual ~SniperCommander()=default;

};


#endif //WARGAME_A_SNIPERCOMMANDER_HPP
