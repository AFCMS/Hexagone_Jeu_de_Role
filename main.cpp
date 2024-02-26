#include "Character.hpp"

int main() {
    Weapon epee1("Épée en bois", 10);
    Weapon epee2("Épée en fer", 20);

    Character geralt("Geralt", 100, 100, epee1);
    Character yennefer("Yennefer", 100, 100, epee2);

    geralt.display();
    yennefer.display();

    geralt.attack(yennefer);
    geralt.attack(yennefer);
    geralt.switchWeapon("Épée en argent", 30);

    yennefer.display();
    yennefer.switchWeapon("Bâton", 5);

    for (int i = 0; i < 10; ++i) {
        yennefer.attack(geralt);
    }

    geralt.display();

    geralt.takeLifePotion(50);
    geralt.display();

    yennefer.switchWeapon("Météorite", 100);
    yennefer.attack(geralt);
    geralt.display();
    return 0;
}
