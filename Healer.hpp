//
// Created by abodi on 05/06/2020.
//

#ifndef WARGAME_A_HEALER_HPP
#define WARGAME_A_HEALER_HPP


#include <cstdio>
#include "Soldier.hpp"

class Healer: public Soldier {
size_t m_heal_amount;
public: Healer(size_t heal_amount,size_t health):Soldier(health),m_heal_amount(heal_amount){}
virtual ~Healer()=default;
};


#endif //WARGAME_A_HEALER_HPP
