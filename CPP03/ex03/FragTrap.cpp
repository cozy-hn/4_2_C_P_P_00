#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30, 100)
{
	cout << "FragTrap default constructor called" << "\n";
}

FragTrap::FragTrap(const FragTrap& obj)
{
	cout << "FragTrap copy constructor called" << "\n";
	*this = obj;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor called" << "\n";
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	if (this != &obj)
		ClapTrap::operator=(obj);
	return *this;
}

FragTrap::FragTrap(string name) : ClapTrap(name, 100, 100, 30, 100)
{
	cout << "FragTrap constructor called" << "\n";
}

void FragTrap::highFivesGuys()
{
	cout << "FragTrap " << _name << " requests a high five!" << "\n";
}

void FragTrap::attack(const string& target)
{
	if (_energyPoints > 0)
	{
		_energyPoints--;
		cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << "\n";
	}
	else
		cout << "FragTrap " << _name << " has no energy points left!" << "\n";
}