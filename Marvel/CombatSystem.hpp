// SRC : POO/Marvel/CombatSystem.hpp
//

#ifndef COMBATSYSTEM_HPP
#define COMBATSYSTEM_HPP

#include "SuperHero.hpp"
#include <vector>

class CombatSystem {
public:
    static void battle(SuperHero& hero1, SuperHero& hero2);
};

#endif