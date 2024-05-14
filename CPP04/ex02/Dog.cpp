#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog constructor called" << "\n";
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& obj)
{
	cout << "Dog copy constructor called" << "\n";
	type = obj.type;
	_brain = new Brain(*obj._brain);
}

Dog::~Dog()
{
	cout << "Dog destructor called" << "\n";
	delete _brain;
}

Dog&	Dog::operator=(const Dog& obj)
{
	cout << "Dog assignment operator called" << "\n";
	if (this != &obj)
	{
		type = obj.type;
		delete _brain;
		_brain = new Brain(*obj._brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	cout << "I am a Dog! I am a Dog!" << "\n";
}