#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    
    public:
        
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &other);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &other);

        std::string getName() const;
	    int getHealth() const;
	    int getEnergyPoint() const;
	    int getAttackDamage() const;

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        bool posAction();
        void beRepaired(unsigned int amount);
};

#endif
