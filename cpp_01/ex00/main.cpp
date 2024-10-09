#include "zombie.hpp"

int	main(void)
{
	Zombie *new_zombar;
	randomeChump("Foo");
	
	new_zombar = newZombie("zizou");
	new_zombar->announce();
	delete new_zombar;
}
