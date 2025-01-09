#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("clappy");
    ScavTrap scav("scavvy");

    std::cout << std::endl;

    clap.attack("target 1");
    scav.attack("target 2");

    std::cout << std::endl;

    clap.takeDamage(5);
    scav.takeDamage(50);

    std::cout << std::endl;

    clap.beRepaired(3);
    scav.beRepaired(20);

    std::cout << std::endl;

    scav.guardGate();

    std::cout << std::endl;

    return 0;
}