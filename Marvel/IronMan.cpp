// SRC : POO/Marvel/IronMan.cpp
//

#include "IronMan.hpp"

void IronMan::attack(SuperHero& target) {
    target.takeDamage(baseAttack);
}

void IronMan::useSpecialAbility(SuperHero& target) {
    if (cooldown == 0) {
        cout << name << " lance une salve de missiles !" << endl;
        target.takeDamage(15);
        cooldown = 2;
    } else {
        cout << name << " ne peut pas encore utiliser sa capacité spéciale" << endl;
    }
}