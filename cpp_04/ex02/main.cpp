#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal *tab[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			tab[i] = new Dog;
		else if (i >= 50)
			tab[i] = new Cat;
	}
	for (int i = 0; i < 100; i++)
		tab[i]->makeSound();
	for (int i = 0; i < 100; i++)
		delete tab[i];
	delete j;
	delete i;
	
	return 0;
}
