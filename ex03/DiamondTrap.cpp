#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap's default constructor with no name" << std::endl;
    this->name = "noName_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name)
{
    this->_energyPoints = 100;
	this->ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
    std::cout << "DiamondTrap " << this->name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) 
{
	std::cout << "DiamondTrap copy constructor with name : " << this->name << std::endl;
	*this = other;

}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
 {
    if (this == &other)
		return (*this);
	std::cout << "DiamondTrap assignation operator called with name " << other.getName() << std::endl;
	this->name = other.getName();
	this->_hitPoints = other.getHealth();
	this->_energyPoints = other.getEnergyPoint();
	this->_attackDamage = other.getAttackDamage();
	return (*this);
}

void DiamondTrap::whoAmI() 
{
	if(this->_hitPoints <= 0)
	{
		std::cout << "Already dead, can't display name" << std::endl;
		return ;
	}
	std::cout << "name : " << this->name << " and ClapTrap name is " << this->ClapTrap::_name << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return (this->_name);
}
