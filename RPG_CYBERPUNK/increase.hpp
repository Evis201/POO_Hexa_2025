// SRC : POO/RPG_CYBERPUNK/character.hpp 
//
#include "character.hpp"
#include <string>
#include <iostream>
#pragma once

// Création de la classe Increase

class Increase {
private:
    std::string name;
    std::string bonusType;
    int bonusValue;
    int price;

public:
    Increase(std::string name, std::string bonusType, int bonusValue, int price);

    void displayInformations() const;

    void applyEffect(Character &character);
};