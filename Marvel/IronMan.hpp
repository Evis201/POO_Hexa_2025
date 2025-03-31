// SRC : POO/Marvel/IronMan.hpp
//

#ifndef IRONMAN_HPP
#define IRONMAN_HPP

#include "SuperHero.hpp"

class IronMan : public SuperHero {
    int cooldown;
public:
    IronMan(string name) : SuperHero(name, 100, 20), cooldown(0) {}
    void attack(SuperHero& target);
    void useSpecialAbility(SuperHero& target);
};

#endif