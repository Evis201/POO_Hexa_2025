// SRC : POO/Character.hpp 
//
#include "Weapon.hpp"
#include <iostream>
#include <string>
#pragma once

// Création de la classe Character
class Character {
private:
    std::string name;
    int life;
    int mana;
    Weapon equipedWeapon;

public:
    Character();
    Character(std::string newName, int newLife, int newMana, Weapon newEquipedWeapon);
    ~Character();

    void receiveDammages(int dammages);
    void attack(Character &target);
    void takeLifeCroquette(int lifePoints);
    void switchWeapon(std::string weaponName, int weaponDammages);
    bool isAlive();
    void display();
    void magicAttack(Character &target, int manaCost, int magicDammages);
};