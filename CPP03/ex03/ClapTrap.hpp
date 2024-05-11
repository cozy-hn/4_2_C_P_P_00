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
    ~ClapTrap();
    ClapTrap&	operator=(const ClapTrap& obj);

    void attack(const string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

};

#endif
