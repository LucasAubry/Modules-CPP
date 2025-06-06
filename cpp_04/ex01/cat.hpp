#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat: public Animal
{
	private:
		Brain* _brain;
	public :
		Cat();
		~Cat();
		void makeSound() const;
		Cat &operator=(const Cat &animal);
		Cat(const Cat &other);
};

#endif
