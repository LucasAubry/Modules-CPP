#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "wrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public :
		WrongCat();
		~WrongCat();
		void makeSound() const;
};

#endif

