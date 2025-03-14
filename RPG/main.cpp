// SRC : POO/main.cpp
//
#include "Character.cpp"
#include "Weapon.cpp"

int main() {
    Weapon cosmoWeapon("Épée", 30);
    Weapon tornadeWeapon("Bâton", 25);

    Character cosmo("Cosmo", 100, 100, cosmoWeapon);
    Character tornade("Tornade", 100, 100, tornadeWeapon);

    cosmo.display();
    tornade.display();

    cosmo.attack(tornade);

    cosmo.display();
    tornade.display();

    tornade.takeLifeCroquette(20);

    cosmo.display();
    tornade.display();

    tornade.switchWeapon("Petit Baton", 10);
    tornade.attack(cosmo);

    cosmo.display();
    tornade.display();

    cosmo.switchWeapon("Très gros baton", 30);
    cosmo.attack(tornade);

    cosmo.display();
    tornade.display();

    cosmo.takeLifeCroquette(20);
    tornade.attack(cosmo);

    cosmo.display();
    tornade.display();

    tornade.switchWeapon("un Arbre", 60);
    tornade.attack(cosmo);

    cosmo.display();
    tornade.display();

    cosmo.takeLifeCroquette(20);

    cosmo.display();
    tornade.display();

    tornade.attack(cosmo);

    cosmo.display();
    tornade.display();

    return 0;
}
