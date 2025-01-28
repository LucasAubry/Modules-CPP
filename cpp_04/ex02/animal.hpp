#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"
#include "string"
#include "brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		void set_type(std::string name);
		std::string getType() const;
};

#endif
