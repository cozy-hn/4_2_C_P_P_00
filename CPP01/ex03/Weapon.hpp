#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Weapon
{
	private:
		string type;
		Weapon();
	public:
		Weapon(string type);
		~Weapon();
		const string& getType() const;
		void setType(string type);
};

#endif