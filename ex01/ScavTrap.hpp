#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &rhs);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &rhs);
    void attack(const std::string &target) override;
    void guardGate();
    void printStats() const;

   private:
    int hp = 100;
    int sp = 50;
    int ap = 20;
};

#endif
