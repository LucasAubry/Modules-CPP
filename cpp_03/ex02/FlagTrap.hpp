#ifndef FLAGTRAP_H
#define FLAGTRAP_H

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap(std::string name);
		~FlagTrap();
		void highFivesGuys(void);
};

#endif
