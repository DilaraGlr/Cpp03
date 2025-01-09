#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() 
{
    this->name = "Default";
    ClapTrap::_name = this->name + "_clap_name"; // Nom de ClapTrap avec suffixe
    FragTrap::_hitPoints = 100; // Initialisation via FragTrap
    ScavTrap::_energyPoints = 50; // Initialisation via ScavTrap
    FragTrap::_attackDamage = 30; // Initialisation via FragTrap
    std::cout << "DiamondTrap " << this->name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : FragTrap(), ScavTrap() 
{
    this->name = name;
    ClapTrap::_name = this->name + "_clap_name"; // Nom de ClapTrap avec suffixe
    FragTrap::_hitPoints = 100; // Initialisation via FragTrap
    ScavTrap::_energyPoints = 50; // Initialisation via ScavTrap
    FragTrap::_attackDamage = 30; // Initialisation via FragTrap
    std::cout << "DiamondTrap " << this->name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : FragTrap(other), ScavTrap(other) 
{
    this->name = other.name;
    ClapTrap::_name = other.ClapTrap::_name; // Copie du nom de ClapTrap
    std::cout << "DiamondTrap " << this->name << " copied!" << std::endl;
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
 {
    if (this != &other) {
        this->name = other.name;
        ClapTrap::_name = other.ClapTrap::_name; 
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
    }
    std::cout << "DiamondTrap " << this->name << " assigned!" << std::endl;
    return *this;
}

void DiamondTrap::whoAmI() 
{
    std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target) 
{
    ScavTrap::attack(target);
}
