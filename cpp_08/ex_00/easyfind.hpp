#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>

template <typename T>

typename T::iterator easyfind(T &tab, int num)
{
	typename T::iterator it = std::find(tab.begin(), tab.end(), num);
	if (it == tab.end())
		throw std::runtime_error("easyfind: did not find value");
	else
		std::cout << *it << std::endl;
	return (it);
}
