#include "animal.hpp"

Brain::Brain()
{
	std::cout << "constructor brain" << std::endl;
	this->ideas = new std::string[100];
}

Brain::Brain(const Brain &other)
{
	std::cout << "constructor brain" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "copy Brain" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "destructor brain" << std::endl;
	if (this->ideas)
		delete[] ideas;
}
