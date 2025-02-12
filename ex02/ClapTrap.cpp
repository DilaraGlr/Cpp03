#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
    if (this != &other) 
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap assignment operator called for " << _name << std::endl;
    return *this; // Retourne l'objet actuel
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if(_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " can't attack because it has no energy points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;

    if (amount >= _hitPoints)
        _hitPoints = 0; // Assurer que les HP ne deviennent pas négatifs
    else
        _hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if( _energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " has been repaired for " << amount << " points!" << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
    }
}

bool ClapTrap::posAction(void)
{
	bool	r;

	r = false;
	if (this->_hitPoints <= 0 && this->_energyPoints <= 0)
		std::cout << "No more healh and energy point" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "No more healh" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "No more energy point" << std::endl;
	else
		r = true;
	return (r);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHealth(void) const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoint(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}