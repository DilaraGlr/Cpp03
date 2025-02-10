#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap clapTrap("Clap");
	ScavTrap scavTrap("Scav");
	FragTrap fragTrap("Frag");

	scavTrap.attack(clapTrap.getName()); // Attack
	clapTrap.takeDamage(scavTrap.getAttackDamage()); // -20HP HP : total = -10:
	scavTrap.guardGate(); // enter keeper
	clapTrap.takeDamage(1); // Already dead
	scavTrap.guardGate();// exit keeper

	fragTrap.highFivesGuys();
	fragTrap.highFivesGuys();
	fragTrap.highFivesGuys();

	return (0);
}