#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
   public:
    FragTrap(std::string name = "Default FragTrap");
    FragTrap(const FragTrap &other);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &other);

    void highFiveGuys(void);
};

#endif
