#include "SuperHero.hpp"

void SuperHero::displayInfo() const {
    cout << name << " PV = " << healthPoints << " | Ulti = " << (specialAvailable ? "Prêt" : "En rechargement") << endl;
}

void SuperHero::takeDamage(int amount) {
    healthPoints -= amount;
    if (healthPoints < 0) healthPoints = 0;
}

void SuperHero::restoreHealth(int amount) {
    healthPoints += amount;
    if (healthPoints > 100) healthPoints = 100;
}