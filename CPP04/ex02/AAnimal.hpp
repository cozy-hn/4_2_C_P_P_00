#pragma once
#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>

using std::string;
using std::cout;

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal& obj);
		virtual ~AAnimal();
		AAnimal&	operator=(const AAnimal& obj);
		virtual void makeSound() const = 0;
		string getType() const;

	protected:
		string	type;

};

#endif
