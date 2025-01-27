#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {
   public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &rhs);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &rhs);
    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

   private:
    int hp = 10;
    int sp = 10;
    int ap = 10;

   protected:
    std::string name = "Default ClaTrap";
    bool hasSp() const;
};

#endif
