#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap " + this->name + " enters the battlefield"
              << std::endl;
};

ClapTrap::ClapTrap(std::string name) : name{name} {
    std::cout << "ClapTrap " + name + " enters the battlefield" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
    : name{rhs.name}, hp{rhs.hp}, sp{rhs.sp}, ap{rhs.ap} {
    std::cout << "ClapTrap " + name + " enters the battlefield" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " + this->name + " left the battlefield"
              << std::endl;
}

ClapTrap& ::ClapTrap::operator=(const ClapTrap & rhs) {
    if (this != &rhs) {
        this->name = rhs.name;
        this->hp = rhs.hp;
        this->sp = rhs.sp;
        this->ap = rhs.ap;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->hasSp()) {
        std::cout << "ClapTrap " + this->name + " attacks " + target +
                         ",causing "
                  << this->ap << " points of damage!" << std::endl;
        this->sp--;
    }
};

void ClapTrap::takeDamage(unsigned int amount) {
    this->hp -= amount;
    if (this->hp <= 0) {
        std::cout << "ClapTrap " + this->name + " died" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hasSp()) {
        std::cout << "ClapTrap " + this->name + " heals for " << amount
                  << " points of damage" << std::endl;
        this->sp--;
    };
}

bool ClapTrap::hasSp() const {
    if (this->sp <= 0) {
        std::cout << "ClapTrap " + this->name +
                         " doesn't have enrgy points left"
                  << std::endl;
        return false;
    }
    return true;
}
