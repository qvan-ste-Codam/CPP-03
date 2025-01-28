#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP
#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
   public:
    DiamondTrap(std::string name = "Default DiamonTrap");
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);

    void whoAmI();
    void printStats() const override;
    void attack(const std::string &target) override;

   private:
    std::string name;
};

#endif
