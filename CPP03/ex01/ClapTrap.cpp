#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    cout << "ClapTrap default constructor called" << "\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    cout << "ClapTrap copy constructor called" << "\n";
    *this = obj;
}

ClapTrap::~ClapTrap()
{
    cout << "ClapTrap destructor called" << "\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    cout << "ClapTrap constructor called" << "\n";
}

void ClapTrap::attack(const string& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << "\n";
    }
    else
        cout << "ClapTrap " << _name << " has no energy points left!" << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        _hitPoints -= amount;
        cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << "\n";
    }
    else
        cout << "ClapTrap " << _name << " is already dead!" << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints < 10)
    {
        _hitPoints += amount;
        if (_hitPoints > 10)
            _hitPoints = 10;
        _energyPoints--;
        cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << "\n";
    }
    else if (_energyPoints == 0)
        cout << "ClapTrap " << _name << " has no energy points left!" << "\n";
    else
        cout << "ClapTrap " << _name << " is already at full health!" << "\n";
}

