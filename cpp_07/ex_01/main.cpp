#include "inter.hpp"

int *add_one(int *tab)
{
	for (int i = 0; tab[i]; i++)
	{
		tab[i] = tab[i] + 1;
	}
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int new_tab[];
	new_tab = inter(tab[], 6, add_one());
	for (int i = 0; new_tab[i], i++)
	{
		std::cout << new_tab[i] << std::endl;
	}
}
