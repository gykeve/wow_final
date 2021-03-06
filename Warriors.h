//
// Created by 李安东 on 2018/3/11.
//

#ifndef WAR2_0_WARRIORS_H
#define WAR2_0_WARRIORS_H


#include "Weapon.h"
#include "Sword.h"
#include "Bomb.h"
#include "Arrow.h"


class Warriors {

protected:
    int serial_num;   //编号
    int strength;     //生命值
    Weapon** weapon; //武器

public:
    Warriors(int serial_num, int strength);
    virtual void fightback(Warriors *p); //反击函数
    virtual void Hurted(int a);  //受伤函数
    virtual void attack(Warriors *p); //攻击函数
    int get_lives();

    virtual ~Warriors();

};


#endif //WAR2_0_WARRIORS_H
