#include "animal.hpp"

Animal::Animal()
{
	std::cout << "constructor animal" << std::endl;
	this->type = "Default";
}

Animal::~Animal()
{
	std::cout << "destructor animal" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "animal make song" << std::endl;
}

Animal::set_type()
{
	std::string name;

	std::getline(name);
	this->type = name;
}

std::string Animal::getType() const
{
	return (this->type);
}
