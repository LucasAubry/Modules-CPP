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
		Cat(const Cat &other);
		Cat &operator=(const Cat &animal);
};

#endif
