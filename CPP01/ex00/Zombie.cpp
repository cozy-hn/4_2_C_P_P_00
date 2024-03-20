#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(string name) : _name(name)
{
	cout << "Zombie " << _name << " is born" << "\n";
}

Zombie::~Zombie()
{
	cout << "Zombie " << _name << " is dead" << "\n";
}

void Zombie::announce(void)
{
	cout << _name << " : BraiiiiiiinnnzzzZ..." << "\n";
}