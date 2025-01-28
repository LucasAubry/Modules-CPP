#include "cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "constructor cat" << std::endl;
	this->type = "cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "destructor cat" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "miaou ta grand mere" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy !" << std::endl;
	this->type = cat.type;
	delete this->_brain;
	this->_brain = new Brain(*cat._brain);
	return *this;
}

Cat::Cat(const Cat &other)
{
	*this = other;
}
