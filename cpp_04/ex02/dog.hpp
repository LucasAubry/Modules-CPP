#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog: public Animal
{
	private:	
		Brain* _brain;
	public :
		Dog();
		~Dog();
		void makeSound() const;
		Dog &Dog::operator=(const Dog &other);
		Dog::Dog(const Dog &other);
};

#endif
