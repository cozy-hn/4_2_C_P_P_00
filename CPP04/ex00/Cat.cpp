#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	cout << "Cat constructor called" << "\n";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	cout << "Cat copy constructor called" << "\n";
}

Cat::~Cat()
{
	cout << "Cat destructor called" << "\n";
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
		type = obj.type;
	return *this;
}

void Cat::makeSound() const
{
	cout << "I am a Cat! I am a Cat!" << "\n";
}