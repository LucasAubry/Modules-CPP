#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include "iostream"
#include "string"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();
		void makeSound() const;
		void set_type(std::string name);
		std::string getType() const;
};

#endif
