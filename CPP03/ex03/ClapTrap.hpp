#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
using std::string;
using std::cout;

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& obj);
        ClapTrap(string name);
        ClapTrap(string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage, unsigned int maxHitPoints);
        virtual ~ClapTrap();
        ClapTrap&	operator=(const ClapTrap& obj);

        virtual void attack(const string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		string getName() const;

    protected:
        string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        unsigned int _maxHitPoints;
};

#endif
