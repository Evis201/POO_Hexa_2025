// SRC : POO/Marvel/DoctorStrange.cpp
//

#include "DoctorStrange.hpp"

void DoctorStrange::attack(SuperHero& target) {
    target.takeDamage(rand() % 16 + 10);
}

void DoctorStrange::useSpecialAbility(SuperHero& target) {
    if (healUses > 0) {
        int healAmount = rand() % 16 + 15;
        target.restoreHealth(healAmount);
        healUses--;
        cout << name << " soigne " << target.getName() << " de " << healAmount << " PV" << endl;
    }
}