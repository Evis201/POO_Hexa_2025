// SRC : POO/Marvel/Artefact.cpp
//

#include "Artefact.hpp"
#include <iostream>

void SpaceStone::applyEffect(SuperHero& hero) {
    hero.restoreHealth(30);
    std::cout << hero.getName() << " a lecher le caillou et a régénerer 30 PV...\n";
}

void BrokenGlove::applyEffect(SuperHero& hero) {
    std::cout << hero.getName() << " met les gants de grand-mere et gagne un effet de fou\n";
}