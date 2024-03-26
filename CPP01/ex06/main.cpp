#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		cout << "Usage: ./harlFilter <DEBUG|INFO|WARNING|ERROR>\n";
		return 1;
	}

	string level = argv[1];

	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		cout << "Usage: ./harlFilter <DEBUG|INFO|WARNING|ERROR>\n";
		return 1;
	}

	harl.complain(level);
	return 0;
}