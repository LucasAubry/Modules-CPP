#include <vector>
#include <list>
#include <set>
#include "easyfind.hpp"

int main()
{
//conteneurs sequentiels (ordre lineaire)
	try
	{//conteneurs obligatoir psk find a besoin de begin et end fourni par celui si
		std::vector<int> tab(3);
		tab[0] = 3;
		tab[1] = 10;
		tab[2] = 1;

		int num = 10;
		easyfind(tab, num);

		num = 0;
		easyfind(tab, num);
	}
	catch (const std::runtime_error &e)//a lexecution
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::list<int> tab(3);
		tab.push_back(100);
		tab.push_back(101);
		tab.push_back(102);

		easyfind(tab, 102);

		easyfind(tab, 8);
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << e.what() << std::endl;
	}

//conteneurs associatif (avec des cles)
	try
	{
		std::set<int> tab;
		tab.insert(5);
		tab.insert(10);
		tab.insert(15);

		easyfind(tab, 10);
		easyfind(tab, 20);
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
