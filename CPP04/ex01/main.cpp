#include "Dog.hpp"
#include "Cat.hpp"

// void showLeaks()
// {
// 	system("leaks Brain");
// }

int main()
{
	// atexit(showLeaks);
	const Animal* j = new Dog();
	cout << "\n";
	const Animal* i = new Cat();
	cout << "\n";
	delete j;//should not create a leak
	cout << "\n";
	delete i;
	cout << "\n";

	//more test cases array of animals
	const Animal* animals[10];
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	cout << "\n";
	for (int i = 0; i < 10; i++)
		delete animals[i];
	cout << "\n";

	//test copy constructor
	const Dog *dog = new Dog();
	cout << "\n";
	const Dog *dog2 = new Dog(*dog);
	cout << "\n";
	delete dog;
	cout << "\n";
	delete dog2;
	cout << "\n";

	//test assignment operator
	Cat *cat1 = new Cat();
	cout << "\n";
	Cat *cat2 = new Cat();
	cout << "\n";
	*cat2 = *cat1;
	cout << "\n";
	delete cat1;
	cout << "\n";
	delete cat2;
	cout << "\n";

	return 0;
}