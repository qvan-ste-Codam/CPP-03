#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ClapTrap clapTrap1{"CPT1"};
    ScavTrap scavTrap1{"ST1"};
    ScavTrap scavTrap2{"ST2"};
    ScavTrap scavTrap3 = scavTrap1;

    scavTrap1.guardGate();
    scavTrap1.printStats();
    clapTrap1.attack("nothing");
    scavTrap1.attack("the sky");
    scavTrap1.beRepaired(30);
    scavTrap1.takeDamage(100);
    scavTrap3.printStats();
}
