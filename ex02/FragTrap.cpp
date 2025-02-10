#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    this->_name = name;
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " created!" << std::endl;
    *this = other;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this == &other)
		return (*this);
	std::cout << "FragTrap assignation operator called with name " << other.getName() << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHealth();
	this->_energyPoints = other.getEnergyPoint();
	this->_attackDamage = other.getAttackDamage();
	return (*this);	
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " is asking for a high five!" << std::endl;
}
