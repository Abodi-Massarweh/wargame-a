//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_FOOTCOMMANDER_HPP
#define WARGAME_A_FOOTCOMMANDER_HPP


#include "FootSoldier.hpp"

class FootCommander: public FootSoldier {
int x;

public:
    FootCommander(int val=0):x(val){}

};


#endif //WARGAME_A_FOOTCOMMANDER_HPP
