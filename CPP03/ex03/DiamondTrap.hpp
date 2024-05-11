#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(const DiamondTrap& obj);
        ~DiamondTrap();
        DiamondTrap&	operator=(const DiamondTrap& obj);
        DiamondTrap(string name);
        void whoAmI();
        void attack(const string& target);

    private:
        string _name;
        unsigned int _hitpoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        unsigned int _maxHitpoints;

};

#endif

