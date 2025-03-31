// SRC : POO/Marvel/SpiderMan.cpp
//

#include "SpiderMan.hpp"

void SpiderMan::attack(SuperHero& target) {
    target.takeDamage(baseAttack);
    if (rand() % 100 < 30) {
        cout << name << " immobilise " << target.getName() << " !" << endl;
    }
}

void SpiderMan::useSpecialAbility(SuperHero& target) {
    cout << name << " utilise un piège de toile sur " << target.getName() << endl;
    target.takeDamage(25);
}