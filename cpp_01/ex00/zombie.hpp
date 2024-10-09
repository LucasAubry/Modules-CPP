#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "string"
#include "iostream"

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name_z);
		~Zombie();
		void announce(void);
	
};

	Zombie*	newZombie(std::string name);
	void	randomeChump(std::string name);

#endif
