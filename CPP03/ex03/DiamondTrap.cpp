#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("DiamondTrap")
{
    ClapTrap::_name += "_clap_name";
    _hitPoints = 100;
    _attackDamage = 30;
    _energyPoints = 50;
    _maxHitPoints = 100;
    cout << "DiamondTrap default constructor called" << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    cout << "DiamondTrap copy constructor called" << "\n";
    *this = obj;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap destructor called" << "\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        _name = obj._name;
    }
    return *this;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
    ClapTrap::_name += "_clap_name";
    _hitPoints = 100;
    _attackDamage = 30;
    _energyPoints = 50;
    _maxHitPoints = 100;
    cout << "DiamondTrap constructor called" << "\n";
}

void DiamondTrap::attack(const string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	cout << "My name is " << getName() << " and my ClapTrap name is " << ClapTrap::getName() << "\n";
}

string DiamondTrap::getName() const
{
    return _name;
}

void DiamondTrap::printall()
{
    cout << "Name: " << _name << "\n";
    cout << "Hit points: " << ClapTrap::_hitPoints << "\n";
    cout << "Energy points: " << ClapTrap::_energyPoints << "\n";
    cout << "Attack damage: " << ClapTrap::_attackDamage << "\n";
    cout << "Max hit points: " << ClapTrap::_maxHitPoints << "\n";
    cout << "ScavTrap energy points: " << ScavTrap::_energyPoints << "\n";
    cout << "FragTrap energy points: " << FragTrap::_energyPoints << "\n";
    cout << "ScavTrap attack damage: " << ScavTrap::_attackDamage << "\n";
    cout << "FragTrap attack damage: " << FragTrap::_attackDamage << "\n";
    cout << "ScavTrap hit points: " << ScavTrap::_hitPoints << "\n";
    cout << "FragTrap hit points: " << FragTrap::_hitPoints << "\n";
    cout << "ScavTrap max hit points: " << ScavTrap::_maxHitPoints << "\n";
    cout << "FragTrap max hit points: " << FragTrap::_maxHitPoints << "\n";
    cout << "ClapTrap name: " << ClapTrap::getName() << "\n";
    cout << "ScavTrap name: " << ScavTrap::getName() << "\n";
    cout << "FragTrap name: " << FragTrap::getName() << "\n";
    cout << "DiamondTrap name: " << getName() << "\n";
}