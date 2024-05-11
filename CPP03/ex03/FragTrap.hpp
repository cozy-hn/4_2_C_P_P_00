#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap& obj);
        virtual ~FragTrap();
        FragTrap&	operator=(const FragTrap& obj);
        FragTrap(string name);
        void highFivesGuys();
};

#endif

