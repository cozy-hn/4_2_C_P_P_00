#include "HumanB.hpp"

HumanB::HumanB(string name) : name(name), weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (weapon == NULL)
	{
		cout << name << " has no weapon\n";
		return;
	}
	cout << name << " attacks with their " << weapon->getType() << "\n";
}