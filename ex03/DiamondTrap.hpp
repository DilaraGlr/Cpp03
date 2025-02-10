#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name; // Nom spécifique à DiamondTrap

    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &other);
        ~DiamondTrap();

        DiamondTrap &operator=(const DiamondTrap &other);

        std::string getName() const;
        void whoAmI(void);
};

#endif
