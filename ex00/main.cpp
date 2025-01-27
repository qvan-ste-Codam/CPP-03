#include "ClapTrap.hpp"

int main() {
    ClapTrap ClapTrap1("CT1");

    ClapTrap1.takeDamage(5);
    ClapTrap1.beRepaired(3);
    ClapTrap1.takeDamage(100);

    ClapTrap ClapTrap2("CT2");
    ClapTrap2.attack("target1");

    ClapTrap ClapTrap3(ClapTrap2);
    ClapTrap3.attack("target2");

    ClapTrap ClapTrap4("CT4");
    ClapTrap4 = ClapTrap1;
    ClapTrap4.attack("target3");
    return 0;
}
