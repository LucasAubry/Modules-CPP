#include "zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::add_name(std::string name_z)
{
	this->name = name_z;
}
