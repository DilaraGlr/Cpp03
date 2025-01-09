#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap assignment operator called for " << _name << std::endl;
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << _name << " is out of energy or hit points and can't attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " is asking for a high five!" << std::endl;
}
