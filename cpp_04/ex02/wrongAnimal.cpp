#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "constructor wrong animal" << std::endl;
	this->type = "Default wrong";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructor called wronganimal" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Copy constructor called wronganimal" << std::endl;
	this->type = other.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor wrong animal" << std::endl;
}

void WrongAnimal::set_type(std::string name)
{
	this->type = name;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "wrong animal make song" << std::endl;
}
