// SRC : POO/Marvel/Hulk.cpp
//

#include "Hulk.hpp"

void Hulk::attack(SuperHero& target) {
    target.takeDamage(baseAttack);
    healthPoints -= healthPoints * 0.05;
}

void Hulk::useSpecialAbility(SuperHero& target) {
    rageTurns = 2;
    cout << name << " entre en mode Pps content ces les attaques sont doublées pendant 2 tours" << endl;
}
