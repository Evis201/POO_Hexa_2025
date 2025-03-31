// SRC : POO/Marvel/CombatSystem.cpp
//

#include "CombatSystem.hpp"
#include <iostream>

void CombatSystem::battle(SuperHero& hero1, SuperHero& hero2) {
    cout << " Le combat commence entre " << hero1.getName() << " et " << hero2.getName();
    
    while (hero1.isAlive() && hero2.isAlive()) {
        hero1.attack(hero2);
        if (!hero2.isAlive()) break;
        hero2.attack(hero1);
    }
    
    cout << (hero1.isAlive() ? hero1.getName() : hero2.getName()) << " a gagne la game\n";
}