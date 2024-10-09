#include "zombie.hpp"

void	randomeChump(std::string name)
{
	Zombie *new_zombie = newZombie(name);
	new_zombie->announce();
	delete new_zombie;// pas sur quil faut ca
}
