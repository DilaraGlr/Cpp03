#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("clappy");
    ScavTrap scav("scavvy");
    FragTrap frag("fraggy");

    std::cout << std::endl;

    clap.attack("target 1");
    scav.attack("target 2");
    frag.attack("target 3");

    std::cout << std::endl;

    clap.takeDamage(5);
    scav.takeDamage(50);
    frag.takeDamage(30);

    std::cout << std::endl;

    clap.beRepaired(3);
    scav.beRepaired(20);
    frag.beRepaired(20);

    std::cout << std::endl;

    scav.guardGate();
    frag.highFivesGuys();

    std::cout << std::endl;

    return 0;
}