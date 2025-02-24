#include "dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "constructor dog" << std::endl;
	this->type = "dog";
}

Dog::~Dog()
{
	std::cout << "destructor dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "wouf wouf le chien" << std::endl;
}

