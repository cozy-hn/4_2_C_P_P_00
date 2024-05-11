#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20, 100)
{
	cout << "ScavTrap default constructor called" << "\n";
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	cout << "ScavTrap copy constructor called" << "\n";
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor called" << "\n";
}


ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	if (this != &obj)
		ClapTrap::operator=(obj);
	return *this;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name, 100, 50, 20, 100)
{
	cout << "ScavTrap constructor called" << "\n";
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap " << _name << " has entered in Gate keeper mode!" << "\n";
}

void ScavTrap::attack(const string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << "\n";
	}
	else
		cout << "ScavTrap " << _name << " has no energy points left!" << "\n";
}