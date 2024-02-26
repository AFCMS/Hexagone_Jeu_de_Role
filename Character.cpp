//
// Created by afcm on 26/02/24.
//

#include "Character.hpp"

#include <iostream>
#include <utility>

Character::Character() {
    name = "";
    life = 100;
    mana = 100;
}

Character::Character(std::string newName, int newLife, int newMana, Weapon newEquipedWeapon) {
    name = std::move(newName);
    life = newLife;
    mana = newMana;
    equipedWeapon = std::move(newEquipedWeapon);
}

Character::~Character() = default;

void Character::receiveDammages(int dammages) {
    life -= dammages;
}

void Character::attack(Character &target) {
    target.receiveDammages(equipedWeapon.getDammages());
}

void Character::takeLifePotion(int lifePoints) {
    life += lifePoints;
}

void Character::switchWeapon(std::string weaponName, int weaponDammages) {
    equipedWeapon.update(std::move(weaponName), weaponDammages);
}

bool Character::isAlive() {
    return life > 0;
}

void Character::display() {
    std::cout << "==============" << std::endl;
    std::cout << "Nom : " << name << std::endl;
    std::cout << "Vie : " << life << std::endl;
    std::cout << "Mana : " << mana << std::endl;
}