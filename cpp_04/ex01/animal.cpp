#include "animal.hpp"

Animal::Animal()
{
	std::cout << "constructor animal" << std::endl;
	this->type = "Default";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "destructor animal" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "animal make song" << std::endl;
}

void Animal::set_type(std::string name)
{
	this->type = name;
}

std::string Animal::getType() const
{
	return (this->type);
}
