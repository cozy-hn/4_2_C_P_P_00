#pragma once
#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>

using std::string;
using std::cout;

class Animal
{
	public:
		Animal();
		Animal(const Animal& obj);
		~Animal();
		Animal&	operator=(const Animal& obj);
		virtual void makeSound() const;
		string getType() const;

	protected:
		string	type;

};

#endif
