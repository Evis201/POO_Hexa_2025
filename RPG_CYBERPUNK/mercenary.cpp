// SRC : POO/RPG_CYBERPUNK/mercenary.cpp 
//
#include "mercenary.hpp"

// Création de la classe Mercenary

Mercenary::Mercenary(std::string firstName, std::string lastName, int lifePoints, int reputation, int money, MercenaryType type)
    : Character(firstName, lastName, lifePoints, reputation, money), type(type) {}

void Mercenary::attack(Character &target) {
    int damage = 10;
    if (type == MercenaryType::Solo) {
        damage += 5;
    } else if (type == MercenaryType::Netrunner) {
        std::cout << firstName << " utilise ses compétences de hacking" << std::endl;
    } else if (type == MercenaryType::Techie) {
        damage += 3;
    } else if (type == MercenaryType::Charcudoc) {
        std::cout << firstName << " utilise ses compétences de charcudoc" << std::endl;
    } else if (type == MercenaryType::Chasseur) {
        damage += 5;
    } else if (type == MercenaryType::Informateur) {
        std::cout << firstName << " utilise ses compétences d'informateur" << std::endl;
    }
    target.receiveDamages(damage);
    std::cout << firstName << " attaque et inflige " << damage << " dégâts." << std::endl;
}

void Mercenary::displayStats() const {
    Character::displayStats();
    std::cout << "Type de mercenaire: ";
    if (type == MercenaryType::Solo) {
        std::cout << "Solo" << std::endl;
    } else if (type == MercenaryType::Netrunner) {
        std::cout << "Netrunner" << std::endl;
    } else if (type == MercenaryType::Techie) {
        std::cout << "Techie" << std::endl;
    } else if (type == MercenaryType::Charcudoc) {
        std::cout << "Charcudoc" << std::endl;
    } else if (type == MercenaryType::Chasseur) {
        std::cout << "Chasseur de Prime" << std::endl;
    } else if (type == MercenaryType::Informateur) {
        std::cout << "Informateur" << std::endl;
    }
}

MercenaryType Mercenary::getType() const {
    return type;
}

