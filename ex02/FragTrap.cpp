#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap{name, 100, 100, 30} {
    std::cout << "FragTrap " + this->name + " enters the battlefield"
              << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap{other} {
    std::cout << "FragTrap " + this->name + " enters the battlefield"
              << std::endl;
}

FragTrap::~FragTrap() {}

FragTrap& ::FragTrap::operator=(const FragTrap & other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::highFiveGuys() { std::cout << "High five guys?" << std::endl; }
