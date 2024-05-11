#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("Scavtrap");
	cout << "\n";
	ScavTrap scavtrap2(scavtrap);
	cout << "\n";
	ScavTrap scavtrap3 = scavtrap;
	cout << "\n";

	scavtrap.attack("target");
	cout << "\n";
	scavtrap.takeDamage(5);
	cout << "\n";
	scavtrap.beRepaired(100000000);
	cout << "\n";
	scavtrap.guardGate();
	cout << "\n";

	return 0;
}
