//
// Created by abodi on 27/05/2020.
//

#ifndef WARGAME_A_SOLDIER_HPP
#define WARGAME_A_SOLDIER_HPP


class Soldier {
size_t m_hp;
public:
    explicit Soldier(int health):m_hp(health){}
    virtual ~Soldier(){}
};


#endif //WARGAME_A_SOLDIER_HPP
