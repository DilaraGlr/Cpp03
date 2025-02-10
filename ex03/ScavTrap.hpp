#ifndef SCARVTRAP_HPP
#define SCARVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        bool _gateKeeperMode;

    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &other);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &other);

        void attack(const std::string &target);
        void guardGate();
        bool getKeeperMode(void) const;

};

#endif