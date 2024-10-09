#include "zombie.hpp"

int	main(void)
{
	int n = 2;
	Zombie *horde = zombieHorde(n, "zoo");
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
