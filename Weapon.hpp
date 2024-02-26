//
// Created by afcm on 26/02/24.
//

#include <string>

using namespace std;

#ifndef HEXAGONE_JEU_DE_ROLE_WEAPON_HPP
#define HEXAGONE_JEU_DE_ROLE_WEAPON_HPP


class Weapon {
private:
    string name;
    int dammages;

public:
    Weapon();
    Weapon(string newName, int newDammages);
    void update(string newName, int newDammages);
    void display();
    int getDammages() const;
};


#endif //HEXAGONE_JEU_DE_ROLE_WEAPON_HPP
