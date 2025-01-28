#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
    ClapTrap clapTrap1{"ClapTrap1"};
    ScavTrap scavTrap1{"ScavTrap1"};
    ScavTrap scavTrap2{"ScavTrap2"};
    ScavTrap scavTrap3 = scavTrap1;

    std::cout << "Testing ScavTrap1:" << std::endl;
    scavTrap1.guardGate();
    scavTrap1.printStats();
    scavTrap1.attack("the sky");
    scavTrap1.beRepaired(30);
    scavTrap1.takeDamage(100);
    scavTrap1.printStats();

    std::cout << "\nTesting ClapTrap1:" << std::endl;
    clapTrap1.attack("nothing");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(3);
    clapTrap1.printStats();

    std::cout << "\nTesting ScavTrap2:" << std::endl;
    scavTrap2.attack("a tree");
    scavTrap2.takeDamage(50);
    scavTrap2.beRepaired(20);
    scavTrap2.printStats();

    std::cout << "\nTesting ScavTrap3 (copy of ScavTrap1):" << std::endl;
    scavTrap3.printStats();
    scavTrap3.attack("a rock");
    scavTrap3.takeDamage(10);
    scavTrap3.beRepaired(5);
    scavTrap3.printStats();
}
