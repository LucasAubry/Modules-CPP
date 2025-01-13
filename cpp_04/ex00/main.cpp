#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	const WrongAnimal* new_meta = new WrongAnimal();
	const WrongAnimal* new_i = new WrongCat();

	std::cout << new_i->getType() << " " << std::endl;
	new_i->makeSound();
	new_meta->makeSound();
	delete new_meta;
	delete new_i;

	return 0;
}
