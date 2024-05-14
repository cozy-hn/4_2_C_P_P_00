#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const AAnimal* a = new AAnimal();
	// delete a;

	const AAnimal* j = new Dog();
	std::cout << "\n";
	const AAnimal* i = new Cat();
	std::cout << "\n";
	j->makeSound();
	i->makeSound();
	std::cout << "\n";
	delete j;
	std::cout << "\n";
	delete i;

}