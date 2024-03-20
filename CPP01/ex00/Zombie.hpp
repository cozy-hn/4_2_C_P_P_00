#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include<string>

using std::string;
using std::cout;

class Zombie
{
	private:
		string _name;
		Zombie();
	public:
		Zombie(string name);
		~Zombie();
		void announce(void);
};

Zombie* newZombie(string name);
void randomChump(string name);

#endif