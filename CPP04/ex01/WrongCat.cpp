#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	cout << "WrongCat constructor called" << "\n";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	cout << "WrongCat copy constructor called" << "\n";
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called" << "\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
		type = obj.type;
	return *this;
}

void WrongCat::makeSound() const
{
	cout << "I am a WrongCat! I am a WrongCat!" << "\n";
}