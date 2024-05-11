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
        string getName() const;
        void printall();

    private:
        string _name;
};

#endif

