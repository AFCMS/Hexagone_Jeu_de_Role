//
// Created by afcm on 26/02/24.
//

#include "Weapon.hpp"

#include <iostream>
#include <utility>

Weapon::Weapon() {
    name = "Épée en bois";
    dammages = 10;
}

Weapon::Weapon(std::string newName, int newDammages) {
    name = std::move(newName);
    dammages = newDammages;
}

void Weapon::update(std::string newName, int newDammages) {
    name = std::move(newName);
    dammages = newDammages;
}

void Weapon::display() {
    std::cout << "Nom : " << name << std::endl;
    std::cout << "Dammages : " << dammages << std::endl;
}

int Weapon::getDammages() const {
    return dammages;
}