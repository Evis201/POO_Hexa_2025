#include "game.hpp"
#include <iostream>
#include <fstream>

void Game::newGame() {
    std::cout << "Nouvelle partie commencée!" << std::endl;
}

void Game::loadGame() {
    std::ifstream saveFile("save.txt");
    if (saveFile.is_open()) {
        std::cout << "Partie chargée!" << std::endl;
        saveFile.close();
    } else {
        std::cout << "Aucune sauvegarde trouvée." << std::endl;
    }
}

void Game::saveGame() {
    std::ofstream saveFile("save.txt");
    saveFile << "Sauvegarde de la partie..." << std::endl;
    saveFile.close();
    std::cout << "Partie sauvegardée!" << std::endl;
}

void Game::menu() {
    std::cout << "Menu principal: 1. Nouvelle Partie 2. Charger Partie 3. Sauvegarder Partie" << std::endl;
}