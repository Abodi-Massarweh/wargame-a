//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_SOLDIER_HPP
#define WARGAME_A_SOLDIER_HPP

#include <cstdio>
#include <vector>
class Board;
class Soldier {

public:
    explicit Soldier(size_t id,int health):m_id(id),m_hp(health){}
    virtual void special_move(std::vector<std::vector<Soldier*>>& vec, std::pair<int,int> a)=0;
    void hit(int dmg){m_hp-=dmg;}
    virtual void heal(){}
    virtual ~Soldier(){}

    size_t m_id;
    size_t m_hp;
};


#endif //WARGAME_A_SOLDIER_HPP
