// SRC : POO/RPG_CYBERPUNK/character.hpp 
//
#include <iostream>
#include <string>
#pragma once

// Création de la classe Character

class Character {
protected:
    std::string firstName;
    std::string lastName;
    int lifePoints;
    int reputation;
    int money;

public:
    Character(std::string firstName, std::string lastName, int lifePoints, int reputation, int money);

    void displayStats() const;
    void receiveDamages(int damages);
    void getMoney(int amount);
    void getReputation(int amount);
    virtual void attack(Character &target) = 0;
    virtual ~Character();
};

