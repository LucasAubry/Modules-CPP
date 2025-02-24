#include "cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "constructor cat" << std::endl;
	this->type = "cat";
}

Cat::~Cat()
{
	std::cout << "destructor cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou miaou le chat" << std::endl;
}
