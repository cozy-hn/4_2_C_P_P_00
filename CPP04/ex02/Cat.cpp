#include "Cat.hpp"

	Cat::Cat()
	{
		cout << "Cat constructor called" << "\n";
		type = "Cat";
		_brain = new Brain();
	}

	Cat::Cat(const Cat& obj)
	{
		cout << "Cat copy constructor called" << "\n";
		type = obj.type;
		_brain = new Brain(*obj._brain);
	}

	Cat::~Cat()
	{
		cout << "Cat destructor called" << "\n";
		delete _brain;
	}

	Cat&	Cat::operator=(const Cat& obj)
	{
		cout << "Cat assignment operator called" << "\n";
		if (this != &obj)
		{
			type = obj.type;
			delete _brain;
			_brain = new Brain(*obj._brain);
		}
		return *this;
	}

	void Cat::makeSound() const
	{
		cout << "I am a Cat! I am a Cat!" << "\n";
	}