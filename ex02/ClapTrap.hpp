#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {
   public:
    ClapTrap(std::string name = "Default ClapTrap");
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &other);

    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void printStats() const;

   protected:
    std::string name;
    int hp = 10;
    int sp = 10;
    int ap = 0;

    ClapTrap(std::string name, int hp, int sp, int ap);
    bool isHealthyandRested() const;
};

#endif
