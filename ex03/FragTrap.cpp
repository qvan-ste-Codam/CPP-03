#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap{} {
    std::cout << "FragTrap " + this->name + " enters the battlefield"
              << std::endl;
    this->name = name;
    this->hp = 100;
    this->sp = 100;
    this->ap = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap{other} {
    std::cout << "FragTrap " + this->name + " enters the battlefield"
              << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " + this->name + " left the battlefield"
              << std::endl;
}

FragTrap& ::FragTrap::operator=(const FragTrap & other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::highFiveGuys() { std::cout << "High five guys?" << std::endl; }
