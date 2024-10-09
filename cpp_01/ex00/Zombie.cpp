#include "zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name_z)
{
	this->name = name_z;
}

Zombie::~Zombie()
{
	std::cout << "the zombie " << this->name << " was destroyed" << std::endl;
}
