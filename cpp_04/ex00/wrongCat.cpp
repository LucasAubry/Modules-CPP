#include "wrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "constructor wrong cat" << std::endl;
	this->type = "wrong cat";
}

WrongCat::~WrongCat()
{
	std::cout << "destructor wrong cat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "wrong miaouuuuuuuuuuuu" << std::endl;
}

