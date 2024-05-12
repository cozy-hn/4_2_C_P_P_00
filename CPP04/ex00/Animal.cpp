#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	cout << "Animal constructor called" << "\n";
}

Animal::Animal(const Animal& obj)
{
	cout << "Animal copy constructor called" << "\n";
	*this = obj;
}

Animal::~Animal()
{
	cout << "Animal destructor called" << "\n";
}

Animal&	Animal::operator=(const Animal& obj)
{
	if (this != &obj)
		type = obj.type;
	return *this;
}

void Animal::makeSound() const
{
	cout << "I am an Animal! I am an Animal!" << "\n";
}

string Animal::getType() const
{
	return type;
}