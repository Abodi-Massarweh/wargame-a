//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_SNIPER_HPP
#define WARGAME_A_SNIPER_HPP


#include <vector>
#include "Attacker.hpp"

class Sniper: public Attacker {
    static const int  s_full_health=100;
    static const int s_damage=50;

public:
    //Sniper():Attacker(s_damage,s_full_health){}
    Sniper(size_t id,size_t health=s_full_health,size_t damage=s_damage):Attacker(id,damage,health){}
    virtual void special_move(std::vector<std::vector<Soldier*>>& vec,std::pair<int,int> pair);
    static Soldier* find_healthiest(std::vector<std::vector<Soldier*>>& vec,std::pair<int,int >pair);
    virtual ~Sniper()=default;
    virtual void heal(){this->m_hp=s_full_health;}

};


#endif //WARGAME_A_SNIPER_HPP
