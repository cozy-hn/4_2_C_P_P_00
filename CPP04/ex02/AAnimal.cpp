#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	cout << "AAnimal constructor called" << "\n";
}

AAnimal::AAnimal(const AAnimal& obj)
{
	cout << "AAnimal copy constructor called" << "\n";
	*this = obj;
}

AAnimal::~AAnimal()
{
	cout << "AAnimal destructor called" << "\n";
}

AAnimal&	AAnimal::operator=(const AAnimal& obj)
{
	if (this != &obj)
		type = obj.type;
	return *this;
}

string AAnimal::getType() const
{
	return type;
}
