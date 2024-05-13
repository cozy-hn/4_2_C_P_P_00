#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the Cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongCat();
	const WrongCat* copy_j2 = static_cast<const WrongCat*>(j2);
	std::cout << j2->getType() << " " << std::endl;
	j2->makeSound();
	meta2->makeSound();

	delete meta;
	delete j;
	delete i;
	delete meta2;
	delete j2;
	copy_j2->makeSound();
	copy_j2->~WrongCat();

	return 0;
}