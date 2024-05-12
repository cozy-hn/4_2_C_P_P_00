#pragma once
#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <iostream>

using std::string;
using std::cout;

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& obj);
		~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal& obj);
		void makeSound() const;
		string getType() const;

	protected:
		string	type;

};

#endif
