//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_PARAMEDIC_HPP
#define WARGAME_A_PARAMEDIC_HPP

#include "Soldier.hpp"
#include "Healer.hpp"

class Paramedic : public Healer {
    static const size_t s_max_health=100;
    static const size_t s_health_amount=200;

public:
    virtual void special_move(std::vector<std::vector<Soldier*>>& vec, std::pair<int,int> a);
    Paramedic(size_t id,int max_health=100):Healer(id,s_health_amount,max_health){}
    virtual ~Paramedic(){}

};


#endif //WARGAME_A_PARAMEDIC_HPP
