//
// Created by 李安东 on 2018/3/14.
//

#ifndef WAR2_0_BOMB_H
#define WAR2_0_BOMB_H

#include "Weapon.h"
#include <string>
using namespace std;


class Bomb: public Weapon {
    string name;
public:

    Bomb();

    void Attack(Warriors *p) override;

};


#endif //WAR2_0_BOMB_H
