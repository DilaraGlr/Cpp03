#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name<< " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap assignment operator called for " << _name << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if(_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " is out of energy or hit points and can't attack!" << std::endl;
    }
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

