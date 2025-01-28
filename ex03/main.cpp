#include <iostream>

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
    ClapTrap clapTrap1{"ClapTrap1"};
    ScavTrap scavTrap1{"ScavTrap1"};
    FragTrap fragTrap1{"FragTrap1"};
    DiamondTrap diamondTrap1{"DiamondTrap1"};
    DiamondTrap diamondTrap2 = diamondTrap1;
    DiamondTrap diamondTrap{diamondTrap1};

    std::cout << "Testing ClapTrap:" << std::endl;
    diamondTrap1.printStats();
    diamondTrap1.whoAmI();
    scavTrap1.printStats();
    clapTrap1.attack("target");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(3);

    std::cout << "\nTesting ScavTrap:" << std::endl;
    scavTrap1.guardGate();
    scavTrap1.attack("target");
    scavTrap1.takeDamage(10);
    scavTrap1.beRepaired(5);
    scavTrap1.printStats();

    std::cout << "\nTesting FragTrap:" << std::endl;
    fragTrap1.highFiveGuys();
    fragTrap1.attack("target");
    fragTrap1.takeDamage(15);

    std::cout << "\nTesting DiamondTrap:" << std::endl;
    diamondTrap1.whoAmI();
    diamondTrap1.attack("target");
    diamondTrap1.takeDamage(20);
    diamondTrap1.beRepaired(15);
    diamondTrap1.printStats();

    std::cout << "\nAdditional Testing:" << std::endl;
    std::cout << "ClapTrap1 attacks DiamondTrap1:" << std::endl;
    clapTrap1.attack("DiamondTrap1");
    diamondTrap1.takeDamage(10);
    diamondTrap1.printStats();

    std::cout << "DiamondTrap1 attacks ScavTrap1:" << std::endl;
    diamondTrap1.attack("ScavTrap1");
    scavTrap1.takeDamage(20);
    scavTrap1.printStats();

    std::cout << "FragTrap1 attacks ClapTrap1:" << std::endl;
    fragTrap1.attack("ClapTrap1");
    clapTrap1.takeDamage(25);
    clapTrap1.printStats();

    std::cout << "DiamondTrap2 repairs itself:" << std::endl;
    diamondTrap2.beRepaired(30);
    diamondTrap2.printStats();

    return 0;
}
