#include "mission.hpp"
#include <cstdlib>

Mission::Mission(std::string description, int difficulty, int cashReward, int reputationReward)
    : description(description), difficulty(difficulty), cashReward(cashReward), reputationReward(reputationReward) {}

void Mission::generateMission() {
    std::cout << "Mission générée: " << description << ", Difficulté: " << difficulty
              << ", Récompense: " << cashReward << " eurodollars, " << reputationReward << " points de réputation." << std::endl;
}

void Mission::executeMission(Character &character) {
    int successChance = rand() % 100;
    if (successChance > difficulty) {
        std::cout << "Mission réussie!" << std::endl;
        character.getMoney(cashReward);
        character.getReputation(reputationReward);
    } else {
        std::cout << "Mission échouée! Vous perdez des PV." << std::endl;
        character.receiveDamages(difficulty / 2);
    }
}