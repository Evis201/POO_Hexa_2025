// SRC : POO/RPG_CYBERPUNK/mercenary.cpp 
//
#include "character.hpp"
#include <iostream>
#include <string>
#pragma once

// Création de la classe Mercenary

enum class MercenaryType { Solo, Netrunner, Techie, Charcudoc, Chasseur, Informateur };

class Mercenary : public Character {
private:
    MercenaryType type;

public:
    Mercenary(std::string firstName, std::string lastName, int lifePoints, int reputation, int money, MercenaryType type);

    void attack(Character &target) override;
    void displayStats() const override;
    MercenaryType getType() const;
};
