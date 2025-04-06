#include "inter.hpp"

void add_one(int &i)
{
	i += 1;
}

void print_tab(int i)
{
	std::cout << i << std::endl;
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	iter(tab, 5, add_one);
	iter(tab, 5, print_tab);
}
