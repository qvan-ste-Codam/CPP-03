#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap{"Default Scavtrap"} {
    std::cout << "ScavTrap " + this->name + " enters the battlefield"
              << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap{name} {
    std::cout << "ScavTrap " + this->name + " enters the battlefield"
              << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& rhs)
    : ClapTrap{rhs.name}, hp{rhs.hp}, sp{rhs.sp}, ap{rhs.ap} {
    std::cout << "ScavTrap " + this->name + " enters the battlefield"
              << std::endl;
}

ScavTrap::~ScavTrap() {}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
        std::cout << "ScavTrap " + this->name + " assigned" << std::endl;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->hasSp()) {
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

void ScavTrap::printStats() const {
    std::cout << "HP: " << this->hp << " SP: " << this->sp
              << " AP: " << this->sp << std::endl;
}
