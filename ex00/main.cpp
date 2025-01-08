#include "ClapTrap.hpp"

int main() 
{
    // Test du constructeur par défaut
    ClapTrap defaultClap;

    // Test du constructeur avec paramètre
    ClapTrap clappy("Clappy");

    // Test du constructeur par copie
    ClapTrap copyClap(clappy);

    // Test de l'opérateur d'affectation
    ClapTrap assignedClap;
    assignedClap = clappy;

    // Test des méthodes publiques
    clappy.attack("target1");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    return 0; // Tous les destructeurs seront appelés automatiquement ici
}

