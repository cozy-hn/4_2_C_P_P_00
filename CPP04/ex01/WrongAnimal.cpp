#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	cout << "WrongAnimal constructor called" << "\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	cout << "WrongAnimal copy constructor called" << "\n";
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor called" << "\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
		type = obj.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	cout << "I am an WrongAnimal! I am an WrongAnimal!" << "\n";
}

string WrongAnimal::getType() const
{
	return type;
}