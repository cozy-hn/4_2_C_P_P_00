#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain constructor called" << "\n";
}

Brain::Brain(const Brain& obj)
{
	cout << "Brain copy constructor called" << "\n";
	*this = obj;
}

Brain::~Brain()
{
	cout << "Brain destructor called" << "\n";
}

Brain&	Brain::operator=(const Brain& obj)
{
	if (this != &obj)
		for (int i = 0; i < 100; i++)
			ideas[i] = obj.ideas[i];
	return *this;
}
