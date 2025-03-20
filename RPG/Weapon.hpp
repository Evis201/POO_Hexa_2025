// SRC : POO/Weapon.hpp
//
#include <string>
#include <iostream>
#pragma once

// Création de la classe Weapon

class Weapon {
private:
    std::string name;
    int dammages;

public:
    Weapon();
    Weapon(std::string newName, int newDammages);
    void update(std::string newName, int newDammages);
    void display();
    int getDammages() const;
};
