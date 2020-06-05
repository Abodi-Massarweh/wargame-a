//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_FOOTSOLDIER_HPP
#define WARGAME_A_FOOTSOLDIER_HPP

#include <utility>
#include <vector>
#include "Soldier.hpp"
#include "Attacker.hpp"
class FootSoldier:public Attacker{
private: static const int s_full_hp=100;
    static const int s_default_damage=10;
public:
    //FootSoldier():Attacker(s_default_damage,s_full_hp){}
    FootSoldier(size_t id,size_t health=100,size_t damage=10):Attacker(id,health,damage){}
    virtual void special_move(std::vector<std::vector<Soldier*>>& ,std::pair<int,int> a);
    virtual ~FootSoldier()=default;
    virtual void heal(){this->m_hp=s_full_hp;}
    Soldier *&find_closest(std::vector<std::vector<Soldier *>> board, std::pair<int, int> pair);
};


#endif //WARGAME_A_FOOTSOLDIER_HPP
