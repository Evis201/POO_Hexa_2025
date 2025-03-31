// SRC : POO/Marvel/main.cpp
//

#include "SpiderMan.hpp"
#include "IronMan.hpp"
#include "Hulk.hpp"
#include "DoctorStrange.hpp"
#include "CombatSystem.hpp"
#include "Artefact.hpp"

int main() {
    SpiderMan spidey("Spider-Man");
    IronMan tony("Iron Man");
    SpaceStone stone;
    BrokenGlove glove;
    
    stone.applyEffect(spidey);
    glove.applyEffect(tony);
    
    CombatSystem::battle(spidey, tony);
    
    return 0;
}
