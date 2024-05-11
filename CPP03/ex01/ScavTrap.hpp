#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& obj);
        ~ScavTrap();
        ScavTrap&	operator=(const ScavTrap& obj);
        ScavTrap(string name);
        void guardGate();
        void attack(const string& target);
};

#endif

