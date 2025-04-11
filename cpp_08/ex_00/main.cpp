#include <vector>
#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> tab(3);
		tab[0] = 3;
		tab[1] = 10;
		tab[2] = 1;

		int num = 10;
		easyfind(tab, num);

		num = 0;
		easyfind(tab, num);
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
