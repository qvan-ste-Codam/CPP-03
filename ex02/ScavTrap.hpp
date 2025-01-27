#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   public:
    ScavTrap(std::string name = "Default ScrapTrap");
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &other);

    void attack(const std::string &target) override;
    void guardGate();
    void printStats() const;
};

#endif
