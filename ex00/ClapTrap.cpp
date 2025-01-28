#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name) : name{name} {
    std::cout << "ClapTrap " + name + " enters the battlefield" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name{other.name}, hp{other.hp}, sp{other.sp}, ap{other.ap} {
    std::cout << "ClapTrap " + name + " enters the battlefield" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " + this->name + " left the battlefield"
              << std::endl;
}

ClapTrap& ::ClapTrap::operator=(const ClapTrap & other) {
    if (this != &other) {
        this->name = other.name;
        this->hp = other.hp;
        this->sp = other.sp;
        this->ap = other.ap;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->isHealthyandRested()) {
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
    if (this->isHealthyandRested()) {
        std::cout << "ClapTrap " + this->name + " heals for " << amount
                  << " points of damage" << std::endl;
        this->sp--;
    };
}

bool ClapTrap::isHealthyandRested() const {
    if (this->hp <= 0) {
        std::cout << "ClapTrap " + this->name + " is already dead" << std::endl;
        return false;
    }
    if (this->sp <= 0) {
        std::cout << "ClapTrap " + this->name +
                         " doesn't have enrgy points left"
                  << std::endl;
        return false;
    }
    return true;
}
