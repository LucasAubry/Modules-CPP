#pragma once

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap(std::string name);
		~FlagTrap();
		void highFivesGuys(void);
};
