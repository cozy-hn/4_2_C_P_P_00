#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0), _maxHitPoints(10)
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

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _maxHitPoints(10)
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
        if (amount > _hitPoints)
            amount = _hitPoints;
        _hitPoints -= amount;
        cout << _name << " takes " << amount << " points of damage!" << "\n";
    }
    else
        cout << _name << " is already dead!" << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints < _maxHitPoints)
    {
        if (amount > _maxHitPoints)
            amount = _maxHitPoints;
        if (amount + _hitPoints > _maxHitPoints)
            _hitPoints = _maxHitPoints;
        else
            _hitPoints += amount;
        if (_hitPoints > _maxHitPoints)
            _hitPoints = _maxHitPoints;
        _energyPoints--;
        cout << _name << " is repaired for " << amount << " points!" << "\n";
    }
    else if (_energyPoints == 0)
        cout << _name << " has no energy points left!" << "\n";
    else
        cout << _name << " is already at full health!" << "\n";
}

