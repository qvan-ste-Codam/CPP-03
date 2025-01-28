#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap{name + "_clap_name"}, name{name} {
    std::cout << "DiamondTrap " + this->name + " enters the battlefield"
              << std::endl;
    this->hp = FragTrap::hp;
    this->sp = ScavTrap::sp;
    this->ap = FragTrap::ap;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap{other}, FragTrap{other}, ScavTrap{other} {
    std::cout << "DiamondTrap " + this->name + " enters the battlefield"
              << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " + this->name + " left the battlefield"
              << std::endl;
}

DiamondTrap& ::DiamondTrap::operator=(const DiamondTrap & other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap: " << this->name << " ClapTrap " << ClapTrap::name
              << std::endl;
}

void DiamondTrap::printStats() const {
    std::cout << this->name << " HP: " << this->hp << " SP: " << this->sp
              << " AP: " << this->sp << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}
