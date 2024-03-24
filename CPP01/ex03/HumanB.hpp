#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

using std::string;
using std::cout;

class HumanB
{
	private:
		string name;
		Weapon* weapon;
	public:
		HumanB(string name);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack();
};

#endif