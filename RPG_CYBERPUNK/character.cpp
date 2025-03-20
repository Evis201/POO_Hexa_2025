// SRC : POO/RPG_CYBERPUNK/character.cpp 
//
#include "character.hpp"

// Création de la classe Character

Character::Character(std::string firstName, std::string lastName, int lifePoints, int reputation, int money)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->lifePoints = lifePoints;
    this->reputation = reputation;
    this->money = money;
}

Character::~Character() {}

void Character::displayStats() const {
    std::cout << "Nom: " << firstName << " " << lastName
              << ", PV: " << lifePoints
              << ", Réputation: " << reputation
              << ", Argent: " << money << " eurodollars" << std::endl;
}

void Character::receiveDamages(int damages) {
    lifePoints -= damages;
    if (lifePoints < 0) lifePoints = 0;
}

void Character::getMoney(int amount) {
    money += amount;
    if (money < 0) money = 0;
}

void Character::getReputation(int amount) {
    reputation += amount;
    if (reputation < 0) reputation = 0;
}

