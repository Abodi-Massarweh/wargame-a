//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_SNIPERCOMMANDER_HPP
#define WARGAME_A_SNIPERCOMMANDER_HPP


#include "Sniper.hpp"

class SniperCommander: public Sniper {
    int x;

public:
    SniperCommander(int val=0):x(val){}

};


#endif //WARGAME_A_SNIPERCOMMANDER_HPP
