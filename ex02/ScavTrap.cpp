#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "No name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    this->_gateKeeperMode = false;
    std::cout << "ScavTrap's default constructor have been called with no name" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    this->_name = name;
    this->_gateKeeperMode = false;
	std::cout << "ScavTrap's default Constructor have been called with name : " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap" << _name << " has been created!" << std::endl;
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this == &other)
		return (*this);
	std::cout << "ScavTrap assignation operator called with name " << other.getName() << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHealth();
	this->_energyPoints = other.getEnergyPoint();
	this->_attackDamage = other.getAttackDamage();
	this->_gateKeeperMode = other.getKeeperMode();
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attacks, he is already dead!" << std::endl;
		return ;
	}
	if (posAction())
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate() 
{
    if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't be in Gate keeper mode, he is already dead!" << std::endl;
		return ;
	}
	if(this->_gateKeeperMode == false)
	{
		std::cout << "ScavTrap " << this->_name << " entering in Gate keeper mode" << std::endl;
		this->_gateKeeperMode = true;		
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " exiting Gate keeper mode" << std::endl;
		this->_gateKeeperMode = false;
	}
}

bool ScavTrap::getKeeperMode(void) const
{
	return (this->_gateKeeperMode);
}