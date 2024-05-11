#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ClapTrap_clap_name", 
{

	cout << "DiamondTrap default constructor" << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap destructor" << "\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
}

void DiamondTrap::attack(const string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	cout << "My name is " << getName() << " and my ClapTrap name is " << ClapTrap::getName() << "\n";
}