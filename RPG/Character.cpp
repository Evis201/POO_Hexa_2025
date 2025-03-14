// SRC : POO/Character.cpp 
//
#include "Character.hpp"
#include <iostream>

// Création de la classe Character
Character::Character()
{
    name = "";
    life = 100;
    mana = 100;
}

Character::Character(std::string newName, int newLife, int newMana, Weapon newEquipedWeapon)
{
    name = newName;
    life = newLife;
    mana = newMana;
    equipedWeapon = newEquipedWeapon;
}

Character::~Character() {}

void Character::receiveDammages(int dammages)
{
    life -= dammages;
    if (life < 0)
        life = 0;
}

void Character::attack(Character &target)
{
    if (isAlive()) {
        std::cout << name << " attaque " << target.name << " qui a infligé " << equipedWeapon.getDammages() << " dégats." << std::endl;
        target.receiveDammages(equipedWeapon.getDammages());
    } else {
        std::cout << name << " Bah non on attaque pas un mort ?" << std::endl;
    }
}

void Character::takeLifeCroquette(int lifePoints)
{
    life += lifePoints;
    if (life > 100)
        life = 100;
    std::cout << name << " a prit des croquettes de survie et a régéner " << lifePoints << " point de vie." << std::endl;
}

void Character::switchWeapon(std::string weaponName, int weaponDammages)
{
    equipedWeapon.update(weaponName, weaponDammages);
    std::cout << name << " a changer d'arme avec " << weaponName << " qui fait " << weaponDammages << " damage." << std::endl;
}

bool Character::isAlive()
{
    return life > 0;
}

void Character::display()
{
    std::cout << "Nom: " << name << ", Point de vie: " << life << ", Mana: " << mana << std::endl;
}