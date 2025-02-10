#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
   ClapTrap clapTrap("Clap");
	ScavTrap scavTrap("Scav");
	FragTrap fragTrap("Frag");
	DiamondTrap diamondTrap("Diamond");

	scavTrap.attack(clapTrap.getName()); // Attack
	clapTrap.takeDamage(scavTrap.getAttackDamage()); // -20HP HP : total = -10:
	scavTrap.guardGate(); // enter keeper
	clapTrap.takeDamage(1); // Already dead
	scavTrap.guardGate();// exit keeper
	diamondTrap.whoAmI();
	diamondTrap.highFivesGuys();
	diamondTrap.guardGate();
	diamondTrap.guardGate();
	diamondTrap.beRepaired(10);
	diamondTrap.attack(fragTrap.getName());

	return (0);
}