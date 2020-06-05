//
// Created by abodi on 05/06/2020.
//

#ifndef WARGAME_A_HEALER_HPP
#define WARGAME_A_HEALER_HPP


#include <cstdio>
#include <vector>
#include "Soldier.hpp"

class Healer: public Soldier {
size_t m_heal_amount;
virtual void special_move(std::vector<std::vector<Soldier*>>& vec, std::pair<int,int> a)=0;
public: Healer(size_t id,size_t heal_amount,size_t health):Soldier(id,health),m_heal_amount(heal_amount){}
virtual ~Healer()=default;
};


#endif //WARGAME_A_HEALER_HPP
