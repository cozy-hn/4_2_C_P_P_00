#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Zombie
{
	private:
		string _name;
	public:
		Zombie();
		Zombie(string name);
		~Zombie();
		void announce(void);
		void setName(string name);
};

Zombie* newZombie(string name);
Zombie*	zombieHorde(int N, string name);

#endif