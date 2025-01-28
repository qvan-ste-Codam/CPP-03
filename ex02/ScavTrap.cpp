#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap{name, 100, 50, 20} {
    std::cout << "ScavTrap " + this->name + " enters the battlefield"
              << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap{other} {
    std::cout << "ScavTrap " + this->name + " enters the battlefield"
              << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " + this->name + " left the battlefield"
              << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->isHealthyandRested()) {
        std::cout << "ScavTrap " + this->name + " attacks " + target +
                         ",causing "
                  << this->ap << " points of damage!" << std::endl;
        this->sp--;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap" + this->name + " is in Gate Keeper mode"
              << std::endl;
}

