// SRC : POO/Marvel/Artefact.hpp
//

#ifndef ARTEFACT_HPP
#define ARTEFACT_HPP

#include <string>
#include "SuperHero.hpp"

class Artefact {
protected:
    std::string name;
public:
    Artefact(std::string name) : name(name) {}
    virtual ~Artefact() {}
    virtual void applyEffect(SuperHero& hero) = 0;
};

class SpaceStone : public Artefact {
public:
    SpaceStone() : Artefact("Caillou de fou") {}
    void applyEffect(SuperHero& hero);
};

class BrokenGlove : public Artefact {
public:
    BrokenGlove() : Artefact("Gant en lane tricot") {}
    void applyEffect(SuperHero& hero);
};

#endif