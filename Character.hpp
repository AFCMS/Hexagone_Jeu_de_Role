//
// Created by afcm on 26/02/24.
//

#ifndef HEXAGONE_JEU_DE_ROLE_CHARACTER_HPP
#define HEXAGONE_JEU_DE_ROLE_CHARACTER_HPP

#include <string>

#include "Weapon.hpp"

class Character {
private:
    std::string name;
    int life;
    int mana;
    Weapon equipedWeapon;
public:
    Character();
    Character(std::string newName, int newLife, int newMana, Weapon newEquipedWeapon);
    ~Character();
    void receiveDammages(int dammages);
    void attack(Character &target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(std::string weaponName, int weaponDammages);
    bool isAlive();
    void display();
};


#endif //HEXAGONE_JEU_DE_ROLE_CHARACTER_HPP
