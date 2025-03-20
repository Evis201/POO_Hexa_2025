// SRC : POO/RPG_CYBERPUNK/character.hpp 
//
#include "increase.hpp"

Increase::Increase(std::string name, std::string bonusType, int bonusValue, int price)
    : name(name), bonusType(bonusType), bonusValue(bonusValue), price(price) {}

void Increase::displayInformations() const {
    std::cout << "Implant: " << name << ", Type de bonus: " << bonusType
              << ", Valeur du bonus: " << bonusValue << ", Prix: " << price << " eurodollars" << std::endl;
}

void Increase::applyEffect(Character &character) {
    if (bonusType == "PV") {
        character.receiveDamages(-bonusValue);
    } else if (bonusType == "Reputation") {
        character.getReputation(bonusValue);
    } else if (bonusType == "Argent") {
        character.getMoney(bonusValue);
    }
    std::cout << "Effet de l'implant " << name << " appliqué." << std::endl;
}