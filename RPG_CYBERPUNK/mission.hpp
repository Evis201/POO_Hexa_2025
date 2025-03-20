#include "character.hpp"
#include <string>
#include <iostream>
#pragma once

class Mission {
private:
    std::string description;
    int difficulty;
    int cashReward;
    int reputationReward;

public:
    Mission(std::string description, int difficulty, int cashReward, int reputationReward);

    void generateMission();

    void executeMission(Character &character);
};