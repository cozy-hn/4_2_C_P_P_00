#pragma once
#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& obj);
		~Dog();
		Dog&	operator=(const Dog& obj);
		void makeSound() const;
	
	private:
		Brain* _brain;
};

#endif

