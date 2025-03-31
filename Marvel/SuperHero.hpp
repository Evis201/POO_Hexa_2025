// SRC : POO/Marvel/SuperHero.hpp
//

#ifndef SUPERHERO_HPP
#define SUPERHERO_HPP

#include <iostream>
#include <string>
using namespace std;

class SuperHero {
protected:
    string name;
    int healthPoints;
    int baseAttack;
    bool specialAvailable;

public:
    SuperHero(string name, int hp, int baseAttack) : name(name), healthPoints(hp), baseAttack(baseAttack), specialAvailable(false) {}
        
    virtual void displayInfo() const;
    virtual void attack(SuperHero& target) = 0;
    virtual void useSpecialAbility(SuperHero& target) = 0;
    bool isAlive() const { return healthPoints > 0; }
    void takeDamage(int amount);
    void restoreHealth(int amount);
    
    string getName() const { return name; }
};

#endif