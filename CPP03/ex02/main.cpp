#include "FragTrap.hpp"

int main()
{
	FragTrap ft("FragTrap");
	cout << "\n";
	FragTrap ft2(ft);
	cout << "\n";

	ft.attack("target");
	cout << "\n";
	ft.takeDamage(1000);
	cout << "\n";
	ft.beRepaired(10);
	cout << "\n";
	ft.highFivesGuys();
	cout << "\n";

	return 0;
}