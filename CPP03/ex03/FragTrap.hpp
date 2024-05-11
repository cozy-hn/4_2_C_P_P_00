#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap& obj);
        ~FragTrap();
        FragTrap&	operator=(const FragTrap& obj);
        FragTrap(string name);
        void highFivesGuys();
        void attack(const string& target);
};

#endif

