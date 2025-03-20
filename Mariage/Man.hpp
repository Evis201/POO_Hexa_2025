// SRC : POO/Mariage/Man.hpp
//
#include "Person.hpp"
#pragma once

class Man : public Person {
protected:
    Person* partner;

public:
    Man(std::string firstName, std::string lastName, int age);
    bool isSingle();
    Person* getPartner();
    void setPartner(Person* newPartner);
    void display() override;
};