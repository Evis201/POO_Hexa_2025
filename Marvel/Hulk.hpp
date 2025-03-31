// SRC : POO/Marvel/Hulk.hpp
//

#ifndef HULK_HPP
#define HULK_HPP

#include "SuperHero.hpp"

class Hulk : public SuperHero {
    int rageTurns;
public:
    Hulk(string name) : SuperHero(name, 120, 30), rageTurns(0) {}
    void attack(SuperHero& target);
    void useSpecialAbility(SuperHero& target);
};

#endif