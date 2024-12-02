#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"
#include "dog.hpp"
#include "cat.hpp"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound() const;
		void set_type();
		std::string getType() const;
};

#endif
