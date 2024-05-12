#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	cout << "Dog constructor called" << "\n";
}

Dog::Dog(const Dog& obj)
{
	cout << "Dog copy constructor called" << "\n";
	*this = obj;
}

Dog::~Dog()
{
	cout << "Dog destructor called" << "\n";
}

Dog&	Dog::operator=(const Dog& obj)
{
	if (this != &obj)
		type = obj.type;
	return *this;
}

void Dog::makeSound() const
{
	cout << "I am a Dog! I am a Dog!" << "\n";
}