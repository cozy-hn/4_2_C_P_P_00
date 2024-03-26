#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(string level)
{
	switch (level[0])
	{
		case 'D':
			debug();
			//fallthrough
		case 'I':
			info();
			//fallthrough
		case 'W':
			warning();
			//fallthrough
		case 'E':
			error();
			break;
	}
}

void Harl::debug(void)
{
	cout << "[ DEBUG ]\n";
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!\n\n";
}

void Harl::info(void)
{
	cout << "[ INFO ]\n";
	cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void)
{
	cout << "[ WARNING ]\n";
	cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n";
}


void Harl::error(void)
{
	cout << "[ ERROR ]\n";
	cout << "This is unacceptable, I want to speak to the manager now.\n\n";
}
