// SRC : POO/Marvel/DoctorStrange.hpp
//

#ifndef DOCTORSTRANGE_HPP
#define DOCTORSTRANGE_HPP

#include "SuperHero.hpp"

class DoctorStrange : public SuperHero {
    int healUses;
public:
    DoctorStrange(string name) : SuperHero(name, 100, 10), healUses(3) {}
    void attack(SuperHero& target);
    void useSpecialAbility(SuperHero& target);
};

#endif