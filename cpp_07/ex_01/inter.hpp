#pragma once

#include "iostream"

template <typename TAB, typename SIZE, typename FUNC>
void iter(TAB Tab[], SIZE lens, FUNC func)
{
	for (SIZE i = 0; i < lens; i++)
	{
		func(Tab[i]);
	}
}
