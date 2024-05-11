#include "FragTrap.hpp"

int main()
{
	FragTrap ft;
	cout << "\n";
	FragTrap ft2(ft);
	cout << "\n";

	ft.attack("target");
	cout << "\n";
	ft2.takeDamage(1000);
	cout << "\n";
	ft.beRepaired(10);
	cout << "\n";
	ft.highFivesGuys();
	cout << "\n";

	return 0;
}