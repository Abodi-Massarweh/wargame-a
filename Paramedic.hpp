//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_PARAMEDIC_HPP
#define WARGAME_A_PARAMEDIC_HPP

#include "Soldier.hpp"
class Paramedic : public Soldier {
    int x;

public:
    Paramedic(int val=0):x(val){}

};


#endif //WARGAME_A_PARAMEDIC_HPP
