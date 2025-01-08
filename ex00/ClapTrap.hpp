#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
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

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        //void setName(std::string name);
        
        //void setHitPoints(unsigned int hitPoints);
        //void setEnergyPoints(unsigned int energyPoints);
        //void setAttackDamage(unsigned int attackDamage);
        
        //std::string getName() const;
        
        //unsigned int getHitPoints() const;
        //unsigned int getEnergyPoints() const;
        //unsigned int getAttackDamage() const;
};

#endif
