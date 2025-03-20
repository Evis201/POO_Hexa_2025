// SRC : POO/Character.cpp 
//
#include "Character.hpp"

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
        std::cout << name << " Bah non on attaque pas en étant mort ?" << std::endl;
    }
}

void Character::magicAttack(Character &target, int manaCost, int magicDammages)
{
    if (!isAlive()) {
        std::cout << name << " Bah non pas de spell en étant mort.. " << std::endl;
        return;
    }

    if (mana < manaCost) {
        std::cout << name << " No mana help this guys pls." << std::endl;
        return;
    }
    
    mana -= manaCost;
    std::cout << name << " lance un sort magique sur " << target.name << " en lui faisant " << magicDammages << " dégâts magiques." << std::endl;
    target.receiveDammages(magicDammages);
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