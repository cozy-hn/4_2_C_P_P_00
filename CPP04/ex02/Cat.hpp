#pragma once
#ifndef Cat_HPP
# define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat& obj);
		~Cat();
		Cat&	operator=(const Cat& obj);
		void makeSound() const;

	private:
		Brain* _brain;
};

#endif

