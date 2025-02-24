#include "dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "constructor dog" << std::endl;
	this->type = "dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "destructor dog" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "wouf wouf le chien" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy !" << std::endl;
	this->type = other.type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	return *this;
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

