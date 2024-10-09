#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "string"
#include "iostream"

class Zombie
{
	private:
		std::string name;
	public:
		void add_name(std::string name);
		void announce(void);
	
};
	Zombie* zombieHorde(int N, std::string name);

#endif
