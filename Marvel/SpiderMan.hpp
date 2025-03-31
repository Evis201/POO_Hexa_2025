// SRC : POO/Marvel/SpiderMan.hpp
//

#ifndef SPIDERMAN_HPP
#define SPIDERMAN_HPP

#include "SuperHero.hpp"
#include <cstdlib>

class SpiderMan : public SuperHero {
public:
    SpiderMan(string name) : SuperHero(name, 100, 15) {}
    void attack(SuperHero& target);
    void useSpecialAbility(SuperHero& target);
};

#endif